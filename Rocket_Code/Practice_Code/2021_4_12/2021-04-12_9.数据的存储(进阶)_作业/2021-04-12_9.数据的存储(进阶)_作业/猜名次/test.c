//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Compare(int arr[],int len,int num)
{
	for (int i = 0; i < len; i++)
	{
		if (num == arr[i])
			return 1;
	}
	return 0;
}
int main()
{
	int arr[5] = { 0,0,0,0,0 };
	int A, B, C, D, E;
	for (A = 1; A <= 5; A++)
	{
		arr[A-1] = A;
		for (B = 1; B <= 5; B++)
		{
			if (Compare(arr, 5, B))
				continue;
			arr[B-1] = B;
			for (C = 1; C <= 5; C++)
			{
				if (Compare(arr, 5, C))
					continue;
				arr[C-1] = C;
				for (D = 1; D <= 5; D++)
				{
					if (Compare(arr, 5, D))
						continue;
					arr[D-1] = D;
					for (E = 1; E <= 5; E++)
					{
						if (Compare(arr, 5, E))
							continue;
						arr[E-1] = E;
						if (((B == 2) + (A == 3) == 1) &&
							((B == 2) + (E == 4) == 1) &&
							((C == 1) + (D == 2) == 1) &&
							((C == 5) + (D == 3) == 1) &&
							((E == 4) + (A == 1) == 1))
						{
							printf("A=%d	B=%d	C=%d	D=%d	E=%d\n", A, B, C, D, E);
							break;
						}
						arr[E - 1] = 0;
					}
					arr[D - 1] = 0;
				}
				arr[C - 1] = 0;
			}
			arr[B - 1] = 0;
		}
		arr[A - 1] = 0;
	}
	return 0;
}