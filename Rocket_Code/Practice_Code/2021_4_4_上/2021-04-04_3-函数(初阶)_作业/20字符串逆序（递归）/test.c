#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void reverse_string(char * string )
//�Ƚ���Ԫ�ص�ֵ������һ����ʱ�����У���βԪ�ص�ֵ������Ԫ�أ���βԪ������
//Ȼ����Ԫ�ص�ַ���ƣ��ɴ��൱����βԪ�ظ���ȥһ��
//���ַ�������С��2��ʱ�򣬵ݹ������
//Ȼ��ʼ���Ϻ��˶�βԪ�����θ�ֵ
{
	int len = strlen(string);
	char temp = *string;
	*string = *(string + len - 1);
	*(string + len - 1) = '\0';
	if (strlen(string + 1) >= 2)
		reverse_string(string + 1);

	*(string + len - 1) = temp;
}
int main()
{
	char arr[] = { "abcdefg" };
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}