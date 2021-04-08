#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Print_Array(int arr[], int left, int right)
{
	int i;
	for (i = left; i < right; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
}
void Sory_Array(int arr[], int left, int right)
{
	for (int i = left; i < right - 1; i++)
	{
		for (int j = left; j < right + left - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int arr[10] = { -1,10,-7,9,2,8,7,6,5,4 };
	printf("The array is : ");
	Print_Array(arr, 0, 10);
	Sory_Array(arr, 0, 10);
	printf("The sorted array is : ");
	Print_Array(arr, 0, 10);
	return 0;
}