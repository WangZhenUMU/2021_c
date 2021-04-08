#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"Arry.h"
//输出数组
void test01()
{
	int arr[10] = { -1,10,-7,9,2,8,7,6,5,4 };
	Print_Array(arr, 0, 10);
}
//找最大值
void test02()
{
	int arr[10] = { -1,10,-7,9,2,8,7,6,5,4 };
	printf("The MAX value : %d\n",FindMax_Array(arr, 0, 10));
}
//找第二大值
void test03()
{
	int arr[10] = { -1,10,-7,9,2,8,7,6,5,4 };
	printf("The second MAX value : %d\n", FindSecMax_Array(arr, 0, 10));
}
//正反置换
void test04()
{
	int arr[10] = { -1,10,-7,9,2,8,7,6,5,4 };
	printf("Before:\t\t");
	Print_Array(arr, 0, 10);
	Reverse_Array(arr, 0, 10);
	printf("Current:\t");
	Print_Array(arr, 0, 10);
}
//查找
void test05()
{
	int arr[10] = { -1,10,-7,9,2,8,7,6,5,4 };
	printf("The array is : ");
	Print_Array(arr, 0, 10);
	int key = 7;
	if (FindValue_Array(arr, 0, 10, key) == -1)
		printf("The value %d is not in the array!",key);
	else
		printf("The value %d is in the array!",key);
}
//排序
void test06()
{
	int arr[10] = { -1,10,-7,9,2,8,7,6,5,4 };
	printf("The array is : ");
	Print_Array(arr, 0, 10);
	Sory_Array(arr, 0, 10);
	printf("The sorted array is : ");
	Print_Array(arr, 0, 10);
}
//二分法查找
void test07()
{
	int arr[10] = { -1,10,-7,9,2,8,7,6,5,4 };
	printf("The array is : ");
	Print_Array(arr, 0, 10);
	Sory_Array(arr, 0, 10);
	printf("The sorted array is : ");
	Print_Array(arr, 0, 10);
	int key = 7;
	if (BinSearch_Array(arr, 0, 10, key) == -1)
		printf("The value %d is not in the array!", key);
	else
		printf("The value %d is in the array!", key);
}
int main()
{
	
	//test01();//输出数组
	//test02();//找最大值
	//test03();//找第二大值
	//test04();//置换
	//test05();//查找
	//test06();//排序
	test07();//二分法查找
	return 0;
}