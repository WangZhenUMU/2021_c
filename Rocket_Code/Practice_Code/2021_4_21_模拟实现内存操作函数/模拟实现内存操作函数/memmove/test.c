#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
void* my_Memmove(void* dst, void* src, size_t count)
{
	assert(dst != NULL && src != NULL);
	void* ret = dst;
	if ((char*)dst > (char*)src && (char*)dst < (char*)src + count)
	{
		(char*)dst += count - 1;
		(char*)src += count - 1;
		while (count--)
			*((char *)dst)-- = *((char*)src)--;
	}
	else
	{
		while (count--)
			*((char *)dst)++ = *((char*)src)++;
	}
	return ret;
}
int main()
{
	char p1[256] = "hello,world!";
	char p2[256] = { 0 };
	my_Memmove(p1 + 5, p1, 13);
	printf("%s", p1 + 5);
	return 0;
}