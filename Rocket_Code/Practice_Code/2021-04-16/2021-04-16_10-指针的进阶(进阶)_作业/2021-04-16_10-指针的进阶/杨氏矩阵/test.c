#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int search_key(int a[][5],int x,int y, int key)//x,y规定数组的列数和行数。
{
	int i = 0, j = x-1;
	while (j >= 0 && i < y)
	{
		if (a[i][j] < key)
			i++;
		else if (a[i][j] > key)
			j--;
		else return 1;
	}
	return 0;
}
/*  1  2  3  4  5
    2  3  4  5  6
	3  4  5  6  7
	4  5  6  7  8
	5  6  7  8  9*/
int main()
{
	int key = 5;
	int a[][5] = { {1,2,3,4,5} ,{2,3,4,5,6},{3,4,5,6,7} ,{4,5,6,7,8}, {5,6,7,8,9} };
	if (search_key(a, 5, 5, key)==1)
		printf("%d在这个数组中", key);
	else
		printf("%d不在这个数组中",key);
	return 0;
}