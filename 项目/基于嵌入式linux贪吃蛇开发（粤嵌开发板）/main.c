#include "pic_show.h"
#include "snake.h"
#include  <pthread.h>
#include  <signal.h>
#include  <sys/types.h>
pthread_t 	MOVE;      
pthread_t 	TOUCH;      
pthread_t 	MUSIC;
 
int main(int argc,char *argv[])
{
	show_window();
	pthread_create(&TOUCH, NULL,KEY_value,    NULL);//它发送终止信号给线程，如果成功则返回0，否则为非0值。
	pthread_create(&MOVE , NULL,play_game,    NULL);
	pthread_join  ( MOVE , NULL);//以阻塞的方式等待thread指定的线程结束。当函数返回时，被等待线程的资源被收回。如果线程已经结束，那么该函数会立即返回。
	pthread_join  ( TOUCH, NULL);
	return 0;
}



