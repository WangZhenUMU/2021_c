#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
//��һ���ַ������ڵڶ����ַ������򷵻ش���0������
//��һ���ַ������ڵڶ����ַ������򷵻�0
//��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������
//��ô����ж������ַ�����
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