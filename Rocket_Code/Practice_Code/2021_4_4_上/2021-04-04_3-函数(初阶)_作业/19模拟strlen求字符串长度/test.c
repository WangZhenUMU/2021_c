#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int my_Strlen1(char* arr)//ֱ������ѭ���󳤶ȣ���arrָ��'\0'ʱ��whileִֹͣ�С�
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
//����ָ���󳤶�,���ַ�����Ԫ�ص�ַ���ݸ�*p��
//Ȼ��ͬ����һ����whileѭ��ֱ��pָ������������һ��Ԫ�صĵ�ַ��
//p-arr��Ϊ�ַ����ĳ��ȡ�
{
	char *p = arr;
	while (*p)
	{
		p++;
	}
	return p - arr;
}
int my_strlen3(char* arr)
//���õݹ����ַ�������
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