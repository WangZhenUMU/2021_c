#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
//����num���ַ���Դ�ַ�����Ŀ��ռ䡣
//���Դ�ַ����ĳ���С��num���򿽱���Դ�ַ���֮����Ŀ��ĺ��׷��0��ֱ��num��
char * my_Strncpy(char * des, const char * sou, size_t num)
{
	char * address = des;
	assert((des != NULL) && (sou != NULL));
	while (num--)
	{
		*address++ = *sou++;
	}
	return des;
}
int main()
{
	char a[] = "hello wangzhen";
	char b[] = "hello.c";
	my_Strncpy(a, b, 6);
	printf("%s", a);
	return 0;
}