#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define SIZE 512
int rotation_Compar(const char * src, const char * find)
//任意字符串旋转得到的字符串都可以在俩倍原字符串中找到
//例如：
//ABCDE经过旋转可以得到BCDEA,CDEAB,DEABC,EABCD.这些字符串都可以在ABCDEABCDE中找到。
{
		char tmp[SIZE] = { 0 }; 
		strcpy(tmp, src); //先将字符串内容拷贝到临时数组
		strcat(tmp, src); //再在其后连接一遍原字符串
		return strstr(tmp, find) != NULL; 
}
int main()
{
	char a[] = "ABCDBBAC";
	char b[] = "CDBBACAB";
	char c[] = "CDBBACAC";
	if (rotation_Compar(a, b))
		printf("%s 是 %s旋转而来的\n",a,b);
	else
		printf("%s 不是 %s旋转而来的\n",a,b);
	if (rotation_Compar(a, c))
		printf("%s 是 %s旋转而来的\n", a, c);
	else
		printf("%s 不是 %s旋转而来的", a, c);
	return 0;
}