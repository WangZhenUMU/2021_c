#ifndef 		__PIC_SHOW_H//测试_PIC_SHOW_H是否被定义过，
#define 		__PIC_SHOW_H//如果_PIC_SHOW_H没有被定义过。则定义并编译它

#include          <stdio.h>
#include          <stdlib.h>
#include          <string.h>
#include          <math.h>
#include          <time.h>
#include          <unistd.h>
#include          <sys/types.h>
#include          <sys/stat.h>
#include          <fcntl.h>
#include 	  <linux/input.h> 

#define		GAMEOVER	"over.bmp"   //定义标识符GAMEOVER
#define		H_PIC		"h.bmp"		 //定义标识符H_PIC
#define		S_PIC		"s.bmp"		 //定义标识符S_PIC
#define		BCK_PIC		"snake.bmp"	 //定义标识符BCK_PIC
#define		SUCCESS		"success.bmp"//定义标识符SUCCESS

int 	bmp_show(char * pic_path, int x0, int y0);//定义bmp文件显示函数，pic_path为bmp格式图片，（x0，y0）表示图片在开发板上的显示位置
void 	lcd_init(void);//定义初始化LCD函数。
void 	lcd_free(void);//定义释放LCD函数。
int 	bmp_show_bck(int x0, int y0, int W, int H);//将背景图片x,y点开始的信息显示于x,y点
void  	get_xy( int * x, int *y);//定义获取触摸位置的函数。（x，y）为触摸位置。

#endif//终止if
