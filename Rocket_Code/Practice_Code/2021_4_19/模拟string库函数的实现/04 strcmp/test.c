#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
//第一个字符串大于第二个字符串，则返回大于0的数字
//第一个字符串等于第二个字符串，则返回0
//第一个字符串小于第二个字符串，则返回小于0的数字
//那么如何判断两个字符串？
int my_Strcmp(const char * str1, const char * str2)
{
	assert((str1 != NULL) && (str2 != NULL));
	int len1 = 0, len2 = 0;
	while (*str1++)
		len1++;
	while (*str2++)
		len2++;
	return len1 - len2;
}
int main()
{
	char a[] = "hello wang";
	char b[] = "hello.c";
	printf("%d", my_Strcmp(a, b));
	return 0;
}