#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
//拷贝num个字符从源字符串到目标空间。
//如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后边追加0，直到num个
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