#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
//源字符串必须以 '\0' 结束。
//会将源字符串中的 '\0' 拷贝到目标空间。
//目标空间必须足够大，以确保能存放源字符串。
//目标空间必须可变。
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