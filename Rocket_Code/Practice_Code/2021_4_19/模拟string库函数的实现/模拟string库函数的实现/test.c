#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//�ַ����Ѿ� '\0' ��Ϊ������־��strlen�������ص������ַ����� '\0' ǰ����ֵ��ַ������������� '\0' )��
//����ָ����ַ�������Ҫ�� '\0' ������
//ע�⺯���ķ���ֵΪsize_t�����޷��ŵģ� �״� ��
//ѧ��strlen������ģ��ʵ��
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