#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fact(int num)//�ǵݹ�ʵ�ֽ׳�
{
	int prod=1;
	for (int i = 1; i <= num; i++)
	{
		prod *= i;
	}
	return prod;
}
int fact_Recursive(int num)//�ݹ�ʵ�ֽ׳�
{
	if (num == 1)
		return num;
	else
		return num*fact_Recursive(num-1);
}
int main()
{
	int num,prod;
	printf("Please input num :>");
	scanf("%d", &num);
	//prod=fact(num);�ǵݹ�ʵ��num�Ľ׳�
	prod = fact_Recursive(num);//�ݹ�ʵ��num�Ľ׳�
	printf("%d the factorial is %d", num, prod);
	return 0;
}