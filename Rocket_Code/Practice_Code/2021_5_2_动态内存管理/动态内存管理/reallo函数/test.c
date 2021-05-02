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
	printf("Please enter the size of the expanded array:>");
	int num2;
	scanf("%d", &num2);
	arr = realloc(arr, num2 * sizeof(int));
	assert(arr != NULL);
	for (int i = num; i < num2; i++)
	{
		*(arr + i) = i;
	}
	for (int i = 0; i < num2; i++)
	{
		printf("%d  ", *(arr + i));
	}
	free(arr);
	return 0;
}