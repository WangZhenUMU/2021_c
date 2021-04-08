#include<stdio.h>
#include"Arry.h"
void Print_Array(int arr[], int left, int right)
{
	int i;
	for (i = left; i < right; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
}
int FindMax_Array(int arr[], int left, int right)
{
	int Max = arr[left];
	for (int i = left + 1; i < right; i++)
	{
		if (Max < arr[i])
			Max = arr[i];
	}
	return Max;
}
int FindSecMax_Array(int arr[], int left, int right)
{
	int Max = arr[left];
	int SecMax=0;
	for (int i = left + 1; i < right; i++)
	{
		if (Max < arr[i])
		{
			SecMax = Max;
			Max = arr[i];
		}
		else if (Max > arr[i])
		{
			if (0 == SecMax)
			{
				SecMax = arr[i];
			}
			else if (SecMax < arr[i])
			{
				SecMax = arr[i];
			}
		}
	}
	return SecMax;
}
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
int FindValue_Array(int arr[], int left, int right, int key)
{
	for (int i = left; i < right; i++)
	{
		if (key == arr[i])
		{
			return i;
		}
	}
	return -1;
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
int BinSearch_Array(int arr[], int left, int right, int key)
{
	int low = left;
	int high = right - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (key == arr[mid])
			return mid;
		else if (key < arr[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}