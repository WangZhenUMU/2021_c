#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"Arry.h"
//�������
void test01()
{
	int arr[10] = { -1,10,-7,9,2,8,7,6,5,4 };
	Print_Array(arr, 0, 10);
}
//�����ֵ
void test02()
{
	int arr[10] = { -1,10,-7,9,2,8,7,6,5,4 };
	printf("The MAX value : %d\n",FindMax_Array(arr, 0, 10));
}
//�ҵڶ���ֵ
void test03()
{
	int arr[10] = { -1,10,-7,9,2,8,7,6,5,4 };
	printf("The second MAX value : %d\n", FindSecMax_Array(arr, 0, 10));
}
//�����û�
void test04()
{
	int arr[10] = { -1,10,-7,9,2,8,7,6,5,4 };
	printf("Before:\t\t");
	Print_Array(arr, 0, 10);
	Reverse_Array(arr, 0, 10);
	printf("Current:\t");
	Print_Array(arr, 0, 10);
}
//����
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
//����
void test06()
{
	int arr[10] = { -1,10,-7,9,2,8,7,6,5,4 };
	printf("The array is : ");
	Print_Array(arr, 0, 10);
	Sory_Array(arr, 0, 10);
	printf("The sorted array is : ");
	Print_Array(arr, 0, 10);
}
//���ַ�����
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
	
	//test01();//�������
	//test02();//�����ֵ
	//test03();//�ҵڶ���ֵ
	//test04();//�û�
	//test05();//����
	//test06();//����
	test07();//���ַ�����
	return 0;
}