#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
int drink(int money)
{
	int x=0;//������ˮ����
	int y=0;//ʣ��ƿ����
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