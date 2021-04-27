#include<sys/mman.h>//mmap，mummap
#include<stdint.h>
#include 	"pic_show.h"

static  int      fd_lcd;        //背景图片文件描述符
static  uint8_t  *fp;          //LCD的地址映射，往该地址写数据就是对LCD写数据
unsigned char *bck_info;      //保存背景图片的信息
/*初始化LCD屏*/
void lcd_init(void)
{
	//1. 打开LCD屏
 	fd_lcd  = open( "/dev/fb0", O_RDWR );
	if(fd_lcd == -1)//打开失败
	{
		perror(" open lcd ");//输出open lcd失败的原因
		exit(-1);
	}	

	//2. 做屏幕映射
	fp = mmap( NULL, 800*480*4, PROT_READ|PROT_WRITE, MAP_SHARED, fd_lcd, 0);//MAP_SHARED与其它所有映射这个对象的进程共享映射空间
	//将一个图片映射进内存，      可读   |  可写		      文件描述符 被映射对象内容的起点
	if( fp == (void*)-1)//映射失败
	{
		perror("mmap");//输出mmap映射失败的原因
		close(fd_lcd);
		exit(-1);
	}	
	
	//3. 准备好背景图片的像素缓冲区
	int fd_bmp  = open( BCK_PIC, O_RDONLY );
	if(fd_bmp == -1)//准备缓冲区失败
	{
		perror("open bmp");//输出open bmp失败的原因
		exit(-1);
	}
	
	bck_info = calloc( 800 * 480, 3); //图片像素点个数：width*height  每个像素点: 3个字节
	lseek(fd_bmp, 54, SEEK_SET); //跳过头信息
	read( fd_bmp, bck_info, 800 * 480 * 3); //读取颜色信息
	close(fd_bmp);
}

void lcd_free(void){
	close(fd_lcd);
	munmap(fp, 800*480*4);//解除内存映射
	free(bck_info);//释放bck_info
}


/*显示一张图片于x,y的起始位置*/
int bmp_show(char * pic_path, int x0, int y0)//pic_path图片文件名，（x0，y0）图片的起始位置
{

    int j,i;
	if( x0 <0 || x0 >= 800  || y0<0 || y0>=480){
		fprintf(stderr, "Incorrect position of display image\n");//显示图片位置有误
		return -1;
	}
	int fd_bmp  = open( pic_path, O_RDONLY );//打开图片
	if(fd_bmp == -1)//打开失败
	{
		perror("open bmp");//输出打开失败的原因
		return -1;
	}

	//存放 BMP像素
	int width, height;//定义宽度，高度
	lseek( fd_bmp, 18, SEEK_SET);//跳到存放宽度的 位置
	read( fd_bmp, &width, 4); //读取宽度
	read( fd_bmp, &height, 4);//读取高度
	
	unsigned char * bmp_info = calloc( width * height, 3); //图片像素点个数：width*height  每个像素点: 3个字节
	lseek(fd_bmp, 54, SEEK_SET); //跳过头信息
	read( fd_bmp, bmp_info, width*height*3); //读取颜色信息


	//3. 颜色数据 写入 映射区
	for( j=0; j<height && j<480-y0; j++){
		for( i=0; i<width && i<800-x0; i++){
			memcpy( fp+ ( (j+y0)*800+ (i+x0))*4, bmp_info+ ((height-1-j)*width+i)*3, 3);//memcpy从源内存地址的起始位置开始拷贝若干个字节到目标内存地址
		}
	}
	close( fd_bmp);//关闭fd_bmp
	free( bmp_info);//释放bmp_info
	return 0;
}

//将背景图片x,y点开始的信息显示于x,y点
int bmp_show_bck(int x0, int y0, int W, int H)
{

	int i,j;
	//0. 判断参数合法性
	if( x0 <0 || x0 >= 800  || y0<0 || y0>=480){
		fprintf(stderr, "显示图片位置有误\n");
		return -1;
	}
	//1. 颜色数据 写入 映射区
	for( j=y0; j<480 && j<y0+H; j++)
		for( i=x0; i<800 && i<x0+W; i++){
			memcpy( fp+ ( j*800+ i)*4, bck_info+ ((479-j)*800+i)*3, 3);
			//从原内存到目标内存的内容拷贝                         拷贝的字节数
		}
	return 0;
}
/*获取触摸位置的函数。（x，y）为触摸位置。*/
void  get_xy( int * x, int *y)
{
	
	struct input_event  in_evt;
	int fd = open( "/dev/input/event0" , O_RDONLY);
	if( fd == -1)//open失败
	{
		perror("open input dev");//输出open input dev失败的原因
		return ;
	}
	while(1)
	{
		read(fd, &in_evt, sizeof( in_evt) );
		printf ( "type:0x%x  code:%d  value:%d\n", in_evt.type, in_evt.code*800/1024 , in_evt.value*480/600 );
		if( in_evt.type == 0x03 && in_evt.code == 0){
			*x = in_evt.value*800/1024;
		}else if( in_evt.type == 0x03 && in_evt.code == 1){
			*y = in_evt.value*480/600;
		}
		if(in_evt.code == 330 && in_evt.value == 0){
			break;
		}
	}
	close(fd);
	return ;
}


