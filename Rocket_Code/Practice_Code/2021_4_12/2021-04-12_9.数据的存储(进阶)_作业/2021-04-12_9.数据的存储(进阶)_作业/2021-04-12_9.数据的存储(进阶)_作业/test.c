#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define ROW	10
int main()
{
	int a[ROW][ROW] = { 0 };
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j <= i; j++)
			a[i][j] = (i == 0 || j == 0) ? 1 : a[i - 1][j - 1] + a[i - 1][j];
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%3d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}