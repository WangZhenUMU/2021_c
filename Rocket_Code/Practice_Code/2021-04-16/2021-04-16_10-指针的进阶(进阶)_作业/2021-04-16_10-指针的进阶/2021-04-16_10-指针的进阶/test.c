#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*))
//base-- 指向要排序的数组的第一个元素的指针。
//nitems-- 由 base 指向的数组中元素的个数。
//size-- 数组中每个元素的大小，以字节为单位。
//compar-- 用来比较两个元素的函数，即函数指针（回调函数）
/********************************************************************/
//设计我自己的qsort函数：
int compare(const void* a,const void* b)
{
	if(*(int*)a - *(int*)b<0)
		return 1;
	return 0;
}
void my_qsort(void* arr, int len, int size, int(*compare)(const void *,const void *))
//arr指向要排序的数组首元素，len数组元素个数，size每个元素的大小，compare用来进行比较的回调函数
{
	char* ar = (char*)arr;
	char temp[16];
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len-1-i; j++)
		{
			if (compare(ar + j * size, ar + (j + 1)*size))
			{
				memcpy(temp, ar +j*size, size);
				memcpy(ar + j * size, ar + (j + 1)*size, size);
				memcpy(ar + (j + 1)*size, temp, size);
			}
		}
	}
}
int main()
{
	int a[10] = { 5,2,1,3,2,0,8,7,9,11 };
	printf("before:>");
	for (int i = 0; i < 10; i++)
		printf("%d\t", a[i]);
	my_qsort(a, sizeof(a) / sizeof(a[0]), sizeof(int), compare);
	printf("\nafter :>");
	for (int i = 0; i < 10; i++)
	printf("%d\t", a[i]);
	return 0;
}