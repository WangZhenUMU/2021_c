#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//交换两个整数
void swap_Num(int* num1,int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
int main()
{
	int num1, num2;
	printf("Please input num1,num2:>");
	scanf("%d%d", &num1, &num2);
	swap_Num(&num1, &num2);
	printf("num1=%d\tnum2=%d\n", num1, num2);
	return 0;
}