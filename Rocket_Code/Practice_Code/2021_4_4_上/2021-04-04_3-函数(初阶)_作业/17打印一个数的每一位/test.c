#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//ʵ�ֽ�һ������ÿһλ��ӡ����
void print_Units_Num(int num)
{
	if (num < 10)
	{
		printf("%d  ", num);
	}
	else
	{
		print_Units_Num(num / 10);
		printf("%d  ", (num % 10));
	}
}
int main()
{
	int num;
	printf("Please input a num :>");
	scanf("%d", &num);
	print_Units_Num(num);
}