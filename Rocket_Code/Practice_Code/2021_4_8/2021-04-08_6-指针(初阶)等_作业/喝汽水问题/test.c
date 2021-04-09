#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
int drink(int money)
{
	int x=0;//购买汽水总数
	int y=0;//剩余瓶子数
	for (; money > 0; money--)
	{
		if (y == 1)
			x += 2;
		else
		{
			x++;
			y++;
		}
	}
	return x;
}
int main()
{
	int money;
	printf("Please input money:>");
	scanf("%d", &money);
	printf("You can drink %d bottles!\n", drink(money));
	return 0;
}