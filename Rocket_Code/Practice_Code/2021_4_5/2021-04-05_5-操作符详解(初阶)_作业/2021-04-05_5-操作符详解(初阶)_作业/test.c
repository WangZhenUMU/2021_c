#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int compare_Dif(int num1, int num2)
{
	int c = num1 ^ num2;
	int count = 0;
	while (c)
	{
		count++;
		c = c & (c - 1);
	}
	return count;
}
int main()
{
	int num1, num2;
	printf("please input num1 , num2 #>");
	scanf("%d %d", &num1, &num2);
	int count = compare_Dif(num1, num2);
	printf("The two nums has %d different bits!\n", count);
}