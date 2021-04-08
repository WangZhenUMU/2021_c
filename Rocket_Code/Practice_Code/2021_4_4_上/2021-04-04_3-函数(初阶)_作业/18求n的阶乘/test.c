#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fact(int num)//非递归实现阶乘
{
	int prod=1;
	for (int i = 1; i <= num; i++)
	{
		prod *= i;
	}
	return prod;
}
int fact_Recursive(int num)//递归实现阶乘
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
	//prod=fact(num);非递归实现num的阶乘
	prod = fact_Recursive(num);//递归实现num的阶乘
	printf("%d the factorial is %d", num, prod);
	return 0;
}