#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, n,t=0,sum=0;
	printf("Please input a , n :>");
	scanf("%d%d", &a, &n);
	for (int i = 0; i < n; i++)
	{
		t = t * 10 + a;
		sum += t;
	}
	printf("sum :> %d",sum);
	return 0;
}