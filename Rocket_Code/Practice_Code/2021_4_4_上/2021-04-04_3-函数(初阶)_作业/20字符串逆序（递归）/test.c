#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void reverse_string(char * string )
//先将首元素的值保存在一个临时变量中，将尾元素的值传给首元素，将尾元素置零
//然后将首元素地址后移，由此相当于首尾元素各减去一个
//当字符串长度小于2的时候，递归结束。
//然后开始不断后退对尾元素依次赋值
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