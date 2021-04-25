#include<stdio.h>
int find_single_dog(int arr[],int len)
{
	int a = arr[0];
	for (int i = 1; i < len; i++)
		a ^= arr[i];
	return a;
}
int main()
{
	int a[9] = { 1,2,3,4,5,4,3,2,1 };
	int len = sizeof(a) / sizeof(a[0]);
	printf("Single dogs is %d", find_single_dog(a, len));
	return 0;
}