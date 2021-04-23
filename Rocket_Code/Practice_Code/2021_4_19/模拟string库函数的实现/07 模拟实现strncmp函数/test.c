#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
int my_Strncmp(const char * str1, const char * str2, size_t num)
{
	assert(str1 != NULL && str2 != NULL&&num>=0);
	const char* pos1 = str1;
	const char* pos2 = str2;
	while (num!=0&&(*pos1==*pos2))
	{
		num--;
		pos1++;
		pos2++;
	}
		return *pos1-*pos2;
}
int main()
{
	char a[10] = "abcdefghil";
	char b[10] = "abcdefghil";
	int ret = my_Strncmp(a, b, 5);
	printf("%d\n", ret);
	return 0;
}