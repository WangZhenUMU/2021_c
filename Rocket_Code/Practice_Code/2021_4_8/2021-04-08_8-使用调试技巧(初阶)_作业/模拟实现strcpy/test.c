#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
//模拟实现strlen函数
char* Strcpy(char* str1, const char* str2)
{
	assert((str1 != NULL) && (str2 != NULL));
	char *str = str1;
	while (*str++ = *str2++);
	return (str);
}
int main()
{
	char str1[] = { "hahahaha" };
	char str2[] = { "wangzhen" };
	printf("before:>\n\tstr1:%s\n\tstr2:%s\n", str1, str2);
	Strcpy(str1, str2);
	printf("after :>\n\tstr1:%s\n\tstr2:%s\n", str1, str2);
	return 0;
}