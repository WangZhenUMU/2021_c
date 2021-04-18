#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*))
//base-- ָ��Ҫ���������ĵ�һ��Ԫ�ص�ָ�롣
//nitems-- �� base ָ���������Ԫ�صĸ�����
//size-- ������ÿ��Ԫ�صĴ�С�����ֽ�Ϊ��λ��
//compar-- �����Ƚ�����Ԫ�صĺ�����������ָ�루�ص�������
/********************************************************************/
//������Լ���qsort������
int compare(const void* a,const void* b)
{
	if(*(int*)a - *(int*)b<0)
		return 1;
	return 0;
}
void my_qsort(void* arr, int len, int size, int(*compare)(const void *,const void *))
//arrָ��Ҫ�����������Ԫ�أ�len����Ԫ�ظ�����sizeÿ��Ԫ�صĴ�С��compare�������бȽϵĻص�����
{
	char* ar = (char*)arr;
	char temp[16];
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len-1-i; j++)
		{
			if (compare(ar + j * size, ar + (j + 1)*size))
			{
				memcpy(temp, ar +j*size, size);
				memcpy(ar + j * size, ar + (j + 1)*size, size);
				memcpy(ar + (j + 1)*size, temp, size);
			}
		}
	}
}
int main()
{
	int a[10] = { 5,2,1,3,2,0,8,7,9,11 };
	printf("before:>");
	for (int i = 0; i < 10; i++)
		printf("%d\t", a[i]);
	my_qsort(a, sizeof(a) / sizeof(a[0]), sizeof(int), compare);
	printf("\nafter :>");
	for (int i = 0; i < 10; i++)
	printf("%d\t", a[i]);
	return 0;
}