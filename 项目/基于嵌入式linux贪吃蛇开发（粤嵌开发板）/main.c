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
	pthread_create(&TOUCH, NULL,KEY_value,    NULL);//��������ֹ�źŸ��̣߳�����ɹ��򷵻�0������Ϊ��0ֵ��
	pthread_create(&MOVE , NULL,play_game,    NULL);
	pthread_join  ( MOVE , NULL);//�������ķ�ʽ�ȴ�threadָ�����߳̽���������������ʱ�����ȴ��̵߳���Դ���ջء�����߳��Ѿ���������ô�ú������������ء�
	pthread_join  ( TOUCH, NULL);
	return 0;
}



