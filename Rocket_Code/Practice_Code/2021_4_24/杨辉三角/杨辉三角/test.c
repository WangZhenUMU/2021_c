#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define ROW	10
int main()
{
	int i, j;
	int a[ROW][ROW] = { 0 };
	for (i = 0; i < ROW; i++) {
		for (j = ROW - i; j > 0; j--) {
			printf("    ");
		}
		for (j = 0; j <= i; j++) {
			a[i][j] = (j == 0) ? 1 : (a[i - 1][j - 1] + a[i - 1][j]);
			printf("%5d     ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}