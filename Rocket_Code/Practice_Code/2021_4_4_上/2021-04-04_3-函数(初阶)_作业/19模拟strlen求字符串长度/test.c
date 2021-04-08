#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int my_Strlen1(char* arr)//直接利用循环求长度，当arr指向'\0'时，while停止执行。
{
	int count=0;
	while (*arr)
	{
		count++;
		arr++;
	}
	return count;
}
int my_Strlen2(char* arr)
//利用指针求长度,将字符串首元素地址传递给*p，
//然后同方案一遍历while循环直到p指向这个数组最后一个元素的地址，
//p-arr即为字符串的长度。
{
	char *p = arr;
	while (*p)
	{
		p++;
	}
	return p - arr;
}
int my_strlen3(char* arr)
//利用递归求字符串长度
{
	if (*arr==0)
	{
		return 0;
	}
	return my_strlen3(arr+1)+1;
}
int main()
{
	int len;
	char *arr = { "asdfghjkl" };
	//len = my_Strlen1(arr);
	//len = my_Strlen2(arr);
	len = my_strlen3(arr);
	printf("The string's len is %d\n", len);
	return 0;
}