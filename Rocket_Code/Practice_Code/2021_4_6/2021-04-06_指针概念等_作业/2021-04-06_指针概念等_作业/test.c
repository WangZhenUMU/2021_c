#define _CRE_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int * p = arr;
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}