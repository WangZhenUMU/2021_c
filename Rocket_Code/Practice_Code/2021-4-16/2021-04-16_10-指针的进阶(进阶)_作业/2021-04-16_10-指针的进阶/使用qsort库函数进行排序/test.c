#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int compare(const void* a, const void* b)
{
	if (*(float*)a - *(float*)b < 0)
		return 1;
	return 0;
}
int main()
{
	float arr[10]= { 1.1,2.34,3.45,4.56,5.78,6.89,0.45,0.02,-1.2,-92.532};
	printf("before:>");
	for (int i=0; i < 10; i++)
		printf("%f    ", arr[i]);
	qsort(arr, 10, sizeof(float), compare);
	printf("\nafter :>");
	for (int i=0; i < 10; i++)
		printf("%f    ", arr[i]);
	return 0;
}