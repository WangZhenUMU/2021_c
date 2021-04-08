#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void reverse_String(char* arr)
{
	char * top = arr;//定义指针top指向头
	char * last = arr;//定义指针last指向尾
	while (*last)
		last++;
	last--;
	while (top < last)
	{
		char temp = *top;
		*top = *last;
		*last = temp;
		top++;//头指针后移
		last--;//尾指针前移
	}
}
int main()
{
	char ch[] = { "I am wang zhen !" };
	reverse_String(ch);
	printf("%s", ch);
	return 0;
}