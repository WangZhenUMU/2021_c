#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int num_Power(int n, int k)
{
	if (1 == k)
		return n;
	else
		return n * num_Power(n,--k);
}
int main()
{
	int n, k,power;
	printf("Please input n , k  :>");
	scanf("%d%d", &n, &k);
	power = num_Power(n, k);
	printf("%d to the %d is: %d\n", n, k, power);
	return 0;
}