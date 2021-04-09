#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//求水仙花数
int daffodils_Nums(int num)
{
	int temp1 = num;
	int temp2 = num;
	int sum = 0;
	int i=1;
	while(temp1/10)
	{
		i++;
		temp1 =temp1/ 10;
	}
	while (temp2)
	{
		sum =sum+ pow( (int)(temp2%10), i);
		temp2 =temp2/ 10;
	} 
	if (sum == num)
		return i;
	return 0;
}
int main()
{
	int t=0;
	for (int i = 0; i <= 99999; i++)
	{
		if (daffodils_Nums(i))
		{
		if (t != daffodils_Nums(i))
		{
			t = daffodils_Nums(i);
			printf("\n %d到%d之间的水仙花数：>>",(int)pow(10,t-1), (int)pow(10,t)-1);
		}
			printf("%d   ", i);
		}
	}
	return 0;
}