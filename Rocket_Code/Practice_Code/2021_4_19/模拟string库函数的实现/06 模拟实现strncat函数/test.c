#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
char * my_Strncat(char * des, const char * sou, size_t num)
{
	char* address = des;
	assert((des != NULL) && (sou != NULL));
	while (*address != '\0')
	{
		address++;
	}
	while (num--)
	{
		*address++ = *sou++;
	}
	*address = '\0';
	return des;
}
int main()
{
	char a[20] = "abcdefg";
	char b[10] = "123456789";
	my_Strncat(a, b, 6);
	//strncat(a, b, 6);
	printf("%s\n", a);
	return 0;
}