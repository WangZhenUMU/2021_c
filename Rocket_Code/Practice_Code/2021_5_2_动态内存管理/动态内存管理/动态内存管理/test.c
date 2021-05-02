#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int main()
{
	int num;
	printf("please input arr's size:>");
	scanf("%d", &num);
	int *arr = (int*)malloc(sizeof(int)*num);
	assert(arr != NULL);
	for (int i = 0; i < num; i++)
	{
		*(arr + i) = i;
	}
	for (int i = 0; i < num; i++)
	{
		printf("%d  ",*(arr + i));
	}
	free(arr);
	return 0;
}