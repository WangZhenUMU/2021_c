#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Fibonacci_Num(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return Fibonacci_Num(n - 2) + Fibonacci_Num(n - 1);
}
int main()
{
	int n;
	printf("Please input you need nth Fibonacci num.\nn = ");
	scanf("%d", &n);
	printf("The %dth Fibonacci num is %d", n, Fibonacci_Num(n));
}