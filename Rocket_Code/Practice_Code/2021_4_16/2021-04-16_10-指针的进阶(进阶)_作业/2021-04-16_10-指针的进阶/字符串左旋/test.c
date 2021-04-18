//实现一个函数，可以左旋字符串中的k个字符。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define SIZE 512
void rotation( char * str,int k)
{
	for (int i=0; i < k; i++)
	{
		for(int i=0;str[i+1]!='\0';i++)
		{
			char temp = str[i];
			str[i] = str[i+1];
			str[i+1] = temp;
		}
	}
}
int main()
{
	char a[] = "ABCDBBAC";
	int k = 2;
	printf("%s经过%d次旋转得到：",a,k);
	rotation(a, k);
	printf("%s", a);
	return 0;
}