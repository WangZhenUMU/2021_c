#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
//源字符串必须以 '\0' 结束。
//目标空间必须有足够的大，能容纳下源字符串的内容。
//目标空间必须可修改。
//字符串自己给自己追加，如何？
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