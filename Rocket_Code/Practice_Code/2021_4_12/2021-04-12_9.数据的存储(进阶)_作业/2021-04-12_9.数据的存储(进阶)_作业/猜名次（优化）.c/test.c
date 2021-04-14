#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//生成5个数的排列组合
   int Compare(int arr[], int len)
	{
		for (int i = 0; i < len-1; i++)
		{
			for (int j = i+1; j < len; j++)
			{
				if (arr[i] == arr[j])
					return 0;
			}
		}
		return 1;
	}
void count(int arr[120][5])
{
	int n = 0,a[5];
	for( a[0]=1;a[0]<=5;a[0]++)
		for( a[1]=1;a[1]<=5;a[1]++)
			for( a[2]=1;a[2]<=5;a[2]++)
				for( a[3]=1;a[3]<=5;a[3]++)
					for ( a[4] = 1; a[4] <= 5; a[4]++)
					{
						if (Compare(a, 5))
						{
							for(int i=0;i<5;i++)
							arr[n][i] = a[i];
							n++;
						}
					}
}
int main()
{
	int arr[120][5] = { 0 };
	count(arr);
	for(int i=0;i<120;i++)
		if (((arr[i][1] == 2) + (arr[i][0] == 3) == 1) &&
			((arr[i][1] == 2) + (arr[i][4] == 4) == 1) &&
			((arr[i][2] == 1) + (arr[i][3] == 2) == 1) &&
			((arr[i][2] == 5) + (arr[i][3] == 3) == 1) &&
			((arr[i][4] == 4) + (arr[i][0] == 1) == 1))
		{
			printf("A:%d	B:%d	C:%d	D:%d	E:%d", arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[i][4]);
			break;
		}
	return 0;
}