#include<stdio.h>
union Un//联合体声明
{
	char c;
	int i;
	short s;
};
int main()
{
	union Un un;//联合体定义
	printf("%p\n", &un.c);
	printf("%p\n", &un.i);
	printf("%p\n", &un.s);
	un.i = 0x11223344;
	un.c = 0x00;
	un.s = 0x1111;
	printf("%d\n", un.i);
	return 0;
}