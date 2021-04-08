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
//数组元素逆置
void Reverse_Array(int arr[], int left, int right)
{
	right--;
	while (left < right)
	{
		arr[left] = arr[left] ^ arr[right];
		arr[right] = arr[left] ^ arr[right];
		arr[left] = arr[left] ^ arr[right];
		left++;
		right--;
	}
}
int main()
{
	int arr[10] = { 1,4,7,0,2,5,8,3,6,9 };
	Print_Array(arr, 0, 10);
	Reverse_Array(arr, 0, 10);
	Print_Array(arr, 0, 10);
	Init_Array(arr, 0, 10);
	Print_Array(arr, 0, 10);
	return 0;
}
