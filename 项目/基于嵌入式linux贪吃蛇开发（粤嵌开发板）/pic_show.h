#ifndef 		__PIC_SHOW_H//����_PIC_SHOW_H�Ƿ񱻶������
#define 		__PIC_SHOW_H//���_PIC_SHOW_Hû�б�����������岢������

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

#define		GAMEOVER	"over.bmp"   //�����ʶ��GAMEOVER
#define		H_PIC		"h.bmp"		 //�����ʶ��H_PIC
#define		S_PIC		"s.bmp"		 //�����ʶ��S_PIC
#define		BCK_PIC		"snake.bmp"	 //�����ʶ��BCK_PIC
#define		SUCCESS		"success.bmp"//�����ʶ��SUCCESS

int 	bmp_show(char * pic_path, int x0, int y0);//����bmp�ļ���ʾ������pic_pathΪbmp��ʽͼƬ����x0��y0����ʾͼƬ�ڿ������ϵ���ʾλ��
void 	lcd_init(void);//�����ʼ��LCD������
void 	lcd_free(void);//�����ͷ�LCD������
int 	bmp_show_bck(int x0, int y0, int W, int H);//������ͼƬx,y�㿪ʼ����Ϣ��ʾ��x,y��
void  	get_xy( int * x, int *y);//�����ȡ����λ�õĺ�������x��y��Ϊ����λ�á�

#endif//��ֹif
