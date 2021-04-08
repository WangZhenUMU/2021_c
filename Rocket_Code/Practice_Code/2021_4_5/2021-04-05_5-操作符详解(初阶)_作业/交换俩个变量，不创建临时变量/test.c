#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1, num2;
	printf("Please input two nums:> ");
	scanf("%d%d", &num1, &num2);
	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;
	printf("After SWAP , two nums:> %d %d", num1, num2);
	return 0;
}