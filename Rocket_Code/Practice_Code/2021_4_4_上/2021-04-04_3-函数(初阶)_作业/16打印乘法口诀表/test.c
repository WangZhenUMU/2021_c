#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��ӡ�˷��ھ���size�����˷��ھ�����size*size��С��
void print_Clc_disp(int size)
{
	for (int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%2d * %2d = %3d\t", i, j, i*j);
		}
		printf("\n");
	}
	printf("\nThis is %d*%d clc disp.\n",size,size);
}
int main()
{
	int size;
	printf("Please input size:>");
	scanf("%d", &size);
	print_Clc_disp(size);
	return 0;
}