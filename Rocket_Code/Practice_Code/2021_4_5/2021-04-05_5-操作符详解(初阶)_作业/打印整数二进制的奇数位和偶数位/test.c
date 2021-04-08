#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print_bit(int num)
{

	int n = num;
	//打印整数的二进制
	printf("BINARY:>     ");
	for (int i = 31; i >= 0; i -= 1)
	{
		printf("%d", (num >> i) & 1);
	}
	//打印奇数位
	printf("\nODD DIGIT:>  ");
	for (int i = 31; i >=0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	//打印偶数位
	printf("\nEVEN DIGIT:> ");
	for (int i = 30; i >=0; i -= 2)
	{
		printf(" %d", (n >> i) & 1);
	}
}
int main()
{
	int num;
	printf("Please input a num:> ");
	scanf("%d", &num);
	print_bit(num);
	return 0;
}