#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_N       1000    //���������С

int fib(int n);
int memo[MAX_N + 1];

int main()
{
	signed int n;
	int fibn;
	printf("n = ");
	scanf("%d", &n);

	if (n <= 1) {    //�����n���������ж���ʱ��ֱ�ӷ���
		printf("variable n should be greater than 1.");
		return 0;
	}

	for (int i = 0; i <= n; i++) {

		fibn = fib(i);
		printf("%d,", fibn);    //���쳲���������a(0)��a(n)
		if (i == n) {
			printf("\nfibn(%d) = %d\n", i, fibn);    //���a(n)
		}
	}

	return 0;
}

int fib(int n)
{
	int fibn;
	if (memo[n] != 0) {
		fibn = memo[n];    //���a(n)֮ǰ�������¼�������У���ֱ�ӷ���ֵ
	}
	else if (n == 0 || n == 1) {
		fibn = n;
		memo[n] = fibn;
	}
	else {
		fibn = fib(n - 1) + fib(n - 2);    //����a(n)ֵ������������
		memo[n] = fibn;
	}

	return fibn;
}
