//ʵ��һ�����������������ַ����е�k���ַ���
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
	printf("%s����%d����ת�õ���",a,k);
	rotation(a, k);
	printf("%s", a);
	return 0;
}