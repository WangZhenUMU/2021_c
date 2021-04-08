#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int DigitSum(unsigned int n)
{
	if (n < 10)
		return n;
	else
	{
		return DigitSum(n / 10) + n % 10;
	}
}
int main()
{
	int a;
	printf("Please input a num:>");
	scanf("%d", &a);
	int DiSum = DigitSum(a);
	printf("The sum of each member of %d is : %d\n", a, DiSum);
	return 0;
}