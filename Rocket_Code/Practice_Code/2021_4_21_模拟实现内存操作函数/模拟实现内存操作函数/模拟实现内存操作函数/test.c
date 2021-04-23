#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
void* my_Memcpy(void* dst, void* src, size_t count)
{
	assert(dst != NULL && src != NULL);
	void* ret = dst;
	while (count--)
		*((char *)dst)++ = *((char*)src)++;
	return ret;
}
int main()
{
	char p1[256] = "hello,world!";
	char p2[256] = { 0 };
	my_Memcpy(p2, p1, 13);
	printf("%s", p2);
	return 0;
}