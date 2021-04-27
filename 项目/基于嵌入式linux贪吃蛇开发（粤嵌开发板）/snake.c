#include  "snake.h"
#include  <unistd.h>
#include  <pthread.h>

sem_t       touch_condition;
sem_t       GAME_OVER__;
u8  OVER=0;
u16 length_body=20;
u16 score=0;
u16 speed=10;
u16 SRAND=0;
snake_P SNAK[MAX_NUM]; 
u16     snake_front=0;
u16     snake_front_next;
u16     snake_rear=0;
snake_P target;
u8      KEY_state=turn_right;
u8      end_condition=0;
u8      eat_value=0;
extern pthread_t 	MOVE;      
extern pthread_t 	TOUCH;
char *picture[10]={"s0.bmp","s1.bmp","s2.bmp","s3.bmp","s4.bmp","s5.bmp","s6.bmp","s7.bmp","s8.bmp","s9.bmp"};//定义字符数组，保存数字0~9的图片名

const u16 x_rand[25]={0,20,40,60,80,100,120,140,160,
             180,200,220,240,260,280,300,320,340,360,380,
            400,420,440,460,480};//定义无符号短整型数组，保存贪吃蛇游戏界面的横坐标
const u16 y_rand[24]={0,20,40,60,80,100,120,140,160,
             180,200,220,240,260,280,300,320,340,360,
             380,400,420,440,460};//定义无符号短整型数组，保存贪吃蛇游戏界面的纵坐标
                       
void R_and(void)//生成食物
{
    int value=0;
    int con=1;
    while(1)
    {
        SRAND=rand()%25;//生成随机数，“%25限制随机数的范围”
        if(SRAND>24) SRAND=24;
        target.x_point=x_rand[SRAND];
        if(SRAND>23)SRAND=23;
        target.y_point=y_rand[23-SRAND];
        for(value=0;value<MAX_NUM;value++)//最多生成MAX_NUM个食物
        {
                if(SNAK[value].stat)
                {
                    if( (SNAK[value].x_point==target.x_point) &&( (SNAK[value].y_point==target.y_point) ) )//判断食物与蛇头的坐标是否重合
                    {
                        con=1;
                        break;
                    }
                }
        }
        if(!con)break;
        else con=0;
    }
	bmp_show(S_PIC,target.x_point,target.y_point);//输出食物位置
}

void snake_init(void)//初始化蛇函数
{
    u16 i=0;//定义无符号短整型 i，并初始化为0
    for(i=0;i<MAX_NUM;i++)
        SNAK[i].stat=0;
    for(i=0;i<5;i++)
    {
        SNAK[snake_front].x_point=20+length_body*i;
        SNAK[snake_front].y_point=60;
        SNAK[snake_front].stat=1;
		bmp_show(H_PIC,SNAK[snake_front].x_point, SNAK[snake_front].y_point);//输出蛇身
        snake_front++;
    }
    snake_front--;
}

void show_window(void)
{
    int x,y;
    srand(time(NULL));
	lcd_init();//初始化lcd
    printf("Please press the start button\n");
    bmp_show(BCK_PIC,0,0);//显示背景
    bmp_show("back.bmp",520,0);//显示菜单底图
    bmp_show("start.bmp",560,16);//显示开始
    bmp_show("tcs.bmp",560,110);//显示“贪吃蛇”
    bmp_show("zu.bmp",560,188);//显示组员名
    bmp_show("score.bmp",560,230);//显示分数底图
    bmp_show("AA.bmp",560,380);//显示方向键A
    bmp_show("SS.bmp",630,380);
    bmp_show("DD.bmp",700,380);
    bmp_show("WW.bmp",630,300);
    while(1)//循环获取触摸坐标
    {
        get_xy(&x,&y);//获取触摸坐标
        if( ((560<x)&&(x<760)) &&( (16<y) && (y<86)) )
        {
            printf("start_computer\r\n");
            break;
        }
    }
    snake_init();//初始化蛇
    sem_init(&touch_condition,0,1);
    sem_init(&GAME_OVER__,0,1);
}


  int X0=0,Y0=0;
 void *KEY_value(void *p)//键值
 {
     pthread_setcancelstate(PTHREAD_CANCEL_ENABLE,NULL);
	 /*设置本线程对Cancel信号的反应，state有两种值：PTHREAD_CANCEL_ENABLE（缺省）和 PTHREAD_CANCEL_DISABLE，
	 分别表示收到信号后设为CANCLED状态和忽略CANCEL信号继续运行；old_state如果不为 NULL则存入原来的Cancel状态以便恢复。*/
     pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS,NULL);
	 /*设置本线程取消动作的执行时机，type由两种取值：PTHREAD_CANCEL_DEFERRED和 PTHREAD_CANCEL_ASYNCHRONOUS，仅当Cancel状态为Enable时有效，
	 分别表示收到信号后继续运行至下一个取消点再退出和 立即执行取消动作（退出）；oldtype如果不为NULL则存入原来的取消动作类型值。*/
     while(1)
     {
        get_xy(&X0,&Y0);
        sem_wait(&touch_condition);
		////被用来阻塞当前线程直到信号量sem的值大于0，解除阻塞后将sem的值减一，表明公共资源经使用后减少。
		/*根据获取的触摸坐标，判断蛇的移动方向*/
        if     ( X0< 620 && Y0>300)                                    KEY_state =turn_LEFT;
        else if( ((X0> 630 && X0<690) && ( Y0>380 && Y0<440)) )        KEY_state =turn_down ;
        else if( ((X0> 700 && X0<760) && ( Y0>380 && Y0<440)) )        KEY_state =turn_right;
        else if( ((X0> 630 && X0<690) && ( Y0>300 && Y0<360)) )        KEY_state =turn_up   ;
        else   {KEY_state=KEY_state;}
        sem_post(&touch_condition);
        //用来增加信号量的值当有线程阻塞在这个信号量上时，调用这个函数会使其中的一个线程不再阻塞，选择机制同样是由线程的调度策略决定的。
        sem_wait(&GAME_OVER__);
		//被用来阻塞当前线程直到信号量sem的值大于0，解除阻塞后将sem的值减一，表明公共资源经使用后减少。
        		if (OVER)
		{
			printf("get_OVER!!!!!!\n");
            return 0;
		}
        sem_post(&GAME_OVER__);
		// //用来增加信号量的值当有线程阻塞在这个信号量上时，调用这个函数会使其中的一个线程不再阻塞，选择机制同样是由线程的调度策略决定的。
     }
 }

 void *play_game(void *p)//游戏进行函数
 {
    int value=0;
    pthread_setcancelstate(PTHREAD_CANCEL_ENABLE,NULL);
	/*设置本线程对Cancel信号的反应，state有两种值：PTHREAD_CANCEL_ENABLE（缺省）和 PTHREAD_CANCEL_DISABLE，
	 分别表示收到信号后设为CANCLED状态和忽略CANCEL信号继续运行；old_state如果不为 NULL则存入原来的Cancel状态以便恢复。*/
    pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS,NULL);
	/*设置本线程取消动作的执行时机，type由两种取值：PTHREAD_CANCEL_DEFERRED和 PTHREAD_CANCEL_ASYNCHRONOUS，仅当Cancel状态为Enable时有效，
	分别表示收到信号后继续运行至下一个取消点再退出和 立即执行取消动作（退出）；oldtype如果不为NULL则存入原来的取消动作类型值。*/
    printf("Application resources\n");//获取程序资源
    while(1)
    {
        
        snake_front_next=(snake_front+1)%MAX_NUM;
        if(snake_front_next==snake_rear)
        {
            end_condition=success;
            break;
            printf("success\n");
        }
        if(!eat_value)
        {
            R_and();//随机产生目标物
            eat_value=1;
        }
        sem_wait(&touch_condition);
		//被用来阻塞当前线程直到信号量sem的值大于0，解除阻塞后将sem的值减一，表明公共资源经使用后减少。
        switch(KEY_state)//控制蛇移动的方向
        {
            case turn_LEFT :
                            SNAK[snake_front_next].x_point=SNAK[snake_front].x_point-20;
                            SNAK[snake_front_next].y_point=SNAK[snake_front].y_point;
                            break;
            case turn_right:
                            SNAK[snake_front_next].x_point=SNAK[snake_front].x_point+20;
                            SNAK[snake_front_next].y_point=SNAK[snake_front].y_point;
                            break;
            case turn_up   :
                            SNAK[snake_front_next].x_point=SNAK[snake_front].x_point;
                            SNAK[snake_front_next].y_point=SNAK[snake_front].y_point-20;
                            break;
            case turn_down :
                            SNAK[snake_front_next].x_point=SNAK[snake_front].x_point;
                            SNAK[snake_front_next].y_point=SNAK[snake_front].y_point+20;
                            break;
            
            default:        break;
        }

        sem_post(&touch_condition);
		//用来增加信号量的值当有线程阻塞在这个信号量上时，调用这个函数会使其中的一个线程不再阻塞，选择机制同样是由线程的调度策略决定的。
        if( (SNAK[snake_front_next].x_point>=520) || (SNAK[snake_front_next].x_point<0) || 
                           (SNAK[snake_front_next].y_point<0) || (SNAK[snake_front_next].y_point>=480))
        {
                end_condition=fail;
                break;
        }
        for(value=0;value<MAX_NUM;value++)
        {
            if(SNAK[value].stat)
            {
                if( (SNAK[snake_front_next].x_point==SNAK[value].x_point) && 
                ( (SNAK[snake_front_next].y_point==SNAK[value].y_point) ) )
                {
                    end_condition=fail;
                    break;
                }
            }
        }
        
        if((SNAK[snake_front_next].x_point==target.x_point) && 
            ( (SNAK[snake_front_next].y_point==target.y_point) ))
        {
             snake_front=snake_front_next;
             SNAK[snake_front].stat=1;
             score++  ;
             if(score>=99)
             {
                 score=99;
                 bmp_show(SUCCESS,140 ,150 );
                 end_condition=success;
                 break;
             }
             bmp_show(picture[score/10], 670,230  );//显示分数的十位数
	         bmp_show(picture[score%10], 720,230  );//显示分数的个位数
             speed+=50;//加速
             eat_value=0;
             printf("Eat the food\n");//吃到食物
        }
        else 
        {
             printf("In search state\n");
             snake_front=snake_front_next;
             SNAK[snake_front].stat=1;
			 bmp_show(H_PIC,SNAK[snake_front].x_point,SNAK[snake_front].y_point);
			 bmp_show_bck(SNAK[snake_rear].x_point, SNAK[snake_rear].y_point,20,20);
             SNAK[snake_rear].stat=0;
             snake_rear=(snake_rear+1) %MAX_NUM;
        }
            usleep(60000-speed);
            usleep(60000-speed); 
            usleep(60000-speed); 
            usleep(60000-speed); 
            usleep(30000-speed); 
        if(end_condition==fail)break;
    }
    sem_wait(&GAME_OVER__);
	//被用来阻塞当前线程直到信号量sem的值大于0，解除阻塞后将sem的值减一，表明公共资源经使用后减少。
    OVER=1;
    sem_post(&GAME_OVER__);
	//用来增加信号量的值当有线程阻塞在这个信号量上时，调用这个函数会使其中的一个线程不再阻塞，选择机制同样是由线程的调度策略决定的。
	
    switch(end_condition)
    {
        case fail:
                bmp_show(GAMEOVER,140,150);
                printf("failure!!!!!\r\n");
                pthread_cancel(TOUCH); //发送终止信号给TOUCH线程，如果成功则返回0，否则为非0值
                pthread_join(TOUCH,NULL); //以阻塞的方式等待thread指定的线程结束。当函数返回时，被等待线程的资源被收回。如果线程已经结束，那么该函数会立即返回。
                lcd_free();//释放lcd
                _exit(1);
                break;
        case success:
                printf("success!!!!!\r\n");
                pthread_cancel(TOUCH);
                pthread_join(TOUCH,NULL);
                lcd_free();
                _exit(0);
                break;
        default:
                break;
    }
    return NULL;
}
