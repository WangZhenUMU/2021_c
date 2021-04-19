#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//字符串已经 '\0' 作为结束标志，strlen函数返回的是在字符串中 '\0' 前面出现的字符个数（不包含 '\0' )。
//参数指向的字符串必须要以 '\0' 结束。
//注意函数的返回值为size_t，是无符号的（ 易错 ）
//学会strlen函数的模拟实现
size_t my_Strlen(const char *arr)
{
	assert(arr != NULL);
	size_t count=0;
	int i = 0;
	while (arr[i++] != '\0')
	{
		count++;
	}
	return count;
}
int main()
{
	char a[] = "wangzhen";
	printf("%d", my_Strlen(a));
	return 0;
}