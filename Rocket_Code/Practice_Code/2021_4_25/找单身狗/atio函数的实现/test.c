#include <stdio.h>
#include <ctype.h>
#include <assert.h>
int my_atoi(char* str)
{
	int ret = 0;  
	int flag = 1;
	assert(str);
	while (*str == ' ') //除掉空格
		str++;
	if (*str == '+')//处理加号
	{
		str++;
		flag = 1;
	}
	if (*str == '-')//处理减号
	{
		str++;
		flag = -1;
	}
	while (*str)
	{
		if (isdigit(*str))  //数字
		{
			ret = ret * 10 + (*str - '0')*flag;
			str++;
		}
		else
		{
			ret = 0;
			break;
		}
	}
	return ret;
}
int main()
{
	char p[] = "  -2147483647";
	int ret = my_atoi(p);
	printf("%d", ret);
	return 0;
}