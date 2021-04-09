#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void prismatic(int L)
{
	for (int i = 0; i < L; i++)
	{
		for (int j = 0; j < L - 1 - i; j++)
		{
			printf(" ");
		}
		for (int j = 0;j < 2 * i + 1; j++)
		{
			printf("*");
		}
	printf("\n");
	}
	for (int i = L - 2; i >= 0; i--)
	{
		for (int j = 0; j < L- 1 - i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	prismatic(13);
	return 0;
}