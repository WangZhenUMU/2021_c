#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void reverse_String(char* arr)
{
	char * top = arr;//����ָ��topָ��ͷ
	char * last = arr;//����ָ��lastָ��β
	while (*last)
		last++;
	last--;
	while (top < last)
	{
		char temp = *top;
		*top = *last;
		*last = temp;
		top++;//ͷָ�����
		last--;//βָ��ǰ��
	}
}
int main()
{
	char ch[] = { "I am wang zhen !" };
	reverse_String(ch);
	printf("%s", ch);
	return 0;
}