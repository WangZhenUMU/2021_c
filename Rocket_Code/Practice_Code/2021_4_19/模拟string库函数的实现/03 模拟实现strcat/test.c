#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
//Դ�ַ��������� '\0' ������
//Ŀ��ռ�������㹻�Ĵ���������Դ�ַ��������ݡ�
//Ŀ��ռ������޸ġ�
//�ַ����Լ����Լ�׷�ӣ���Σ�
char * my_Strcat(char * des, const char * sou)
{
	char* address = des;
	assert((des != NULL) && (sou != NULL));
	while (*address!='\0')
	{
		address++;
	}
	while ((*address++ = *sou++) != '\0');
	return des;
}

int main()
{
	char a[20] = "hello wang";
	char b[] = "hello.c";
	my_Strcat(a, b);
	printf("%s", a);
	return 0;
}