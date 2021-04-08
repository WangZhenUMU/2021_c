#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//初始化数组
void Init_Array(int arr[], int left, int right)
{
	for (int i = left; i < right; i++)
		arr[i] = 0;
}
//打印数组
void Print_Array(int arr[], int left, int right)
{
	int i;
	for (i = left; i < right; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
}
//交换俩数组
void swap_Array(int arr1[], int arr2[],int left,int right)
{
	for (int i = left; i < right; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}
int main()
{
	int arr1[10] = { 1,4,7,0,2,5,8,3,6,9 };
	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("Before arr1 : > ");
	Print_Array(arr1, 0, 10);
	printf("Before arr2 : > ");
	Print_Array(arr2, 0, 10);
	swap_Array(arr1, arr2, 0, 10);
	printf("After arr1  : > ");
	Print_Array(arr1, 0, 10);
	printf("After arr2  : > ");
	Print_Array(arr2, 0, 10);
	return 0;
}
