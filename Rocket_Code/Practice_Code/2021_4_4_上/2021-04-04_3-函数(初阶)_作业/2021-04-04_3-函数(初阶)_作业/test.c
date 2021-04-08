//需求：实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//判断是否是素数。
int prime_num(int n) 
{
	if (n == 1)
		return 0;
	for (int i = 2; i*i <= n; i++)
		if (n % i == 0)
			return 0;
	return 1;
}
int main()
{
	int a, b, count = 0;
	printf("Please input scope:>");
	scanf("%d%d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		if (prime_num(i))
		{
			printf("%d\t", i);
			count++;
			if (count % 5 == 0)
				printf("\n");
		}
	}
	printf("\nThere are %d prime number in [%d,%d]\n", count, a, b);
	return 0;
}