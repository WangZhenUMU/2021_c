#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void sort1(int arr[], int len)//方法一：从前面开始不断将偶数后移。
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2 == 0)
		{
			for (int j = i; j < len-1; j++)
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1] = temp;
			}
		}
	}
}
void sort2(int arr[], int len)//方法二：从前面开始找偶数，后面开始找奇数，找到后交换。
{
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		while (left<right && arr[left] % 2 == 1)left++;
		while (left<right && arr[right] % 2 == 0)right--;
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; 
	printf("before : > ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d   ", arr[i]);
	}
	sort2(arr, 10);
	printf("\nafter  : > ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d   ", arr[i]);
	}
	return 0;
}