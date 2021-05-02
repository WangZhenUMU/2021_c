#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int main()
{
	int num;
	printf("please input arr's size:>");
	scanf("%d", &num);
	int *arr = (int*)calloc(num, sizeof(int));
	assert(arr != NULL);
	for (int i = 0; i < num; i++)
	{
		printf("%d  ", *(arr + i));
	}
	free(arr);
	arr = NULL;
	return 0;
}