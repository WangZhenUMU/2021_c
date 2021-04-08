#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int binNum_one(num)
{
	int count=0;
	while (num)
	{
		num &= (num - 1);
		count++;
	}
	return count;
}
int main()
{
	int num;
	printf("Please input num:> ");
	scanf("%d", &num);
	printf("The number of 1 in binary number is %d .",binNum_one(num));
	return 0;
}