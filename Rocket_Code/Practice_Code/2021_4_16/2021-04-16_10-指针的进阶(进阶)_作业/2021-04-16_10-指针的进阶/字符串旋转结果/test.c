#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define SIZE 512
int rotation_Compar(const char * src, const char * find)
//�����ַ�����ת�õ����ַ���������������ԭ�ַ������ҵ�
//���磺
//ABCDE������ת���Եõ�BCDEA,CDEAB,DEABC,EABCD.��Щ�ַ�����������ABCDEABCDE���ҵ���
{
		char tmp[SIZE] = { 0 }; 
		strcpy(tmp, src); //�Ƚ��ַ������ݿ�������ʱ����
		strcat(tmp, src); //�����������һ��ԭ�ַ���
		return strstr(tmp, find) != NULL; 
}
int main()
{
	char a[] = "ABCDBBAC";
	char b[] = "CDBBACAB";
	char c[] = "CDBBACAC";
	if (rotation_Compar(a, b))
		printf("%s �� %s��ת������\n",a,b);
	else
		printf("%s ���� %s��ת������\n",a,b);
	if (rotation_Compar(a, c))
		printf("%s �� %s��ת������\n", a, c);
	else
		printf("%s ���� %s��ת������", a, c);
	return 0;
}