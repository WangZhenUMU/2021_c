#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
//Դ�ַ��������� '\0' ������
//�ὫԴ�ַ����е� '\0' ������Ŀ��ռ䡣
//Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ�����
//Ŀ��ռ����ɱ䡣
char* my_Strcpy(char * des, const char * sou)
{
	char * address=des;
	assert((des != NULL) && (sou != NULL));
	while(*address++ = *sou++)
	{ }
	return des;
}
int main()
{
	char a[] = "hello wangzhen";
	char b[]="hello.c";
	my_Strcpy(a, b);
	printf("%s", a);
	return 0;
}