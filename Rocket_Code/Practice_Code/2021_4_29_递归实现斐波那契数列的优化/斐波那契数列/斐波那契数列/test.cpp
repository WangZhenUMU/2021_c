#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_N       1000    //定义数组大小

int fib(int n);
int memo[MAX_N + 1];

int main()
{
	signed int n;
	int fibn;
	printf("n = ");
	scanf("%d", &n);

	if (n <= 1) {    //输入的n不符合数列定义时会直接返回
		printf("variable n should be greater than 1.");
		return 0;
	}

	for (int i = 0; i <= n; i++) {

		fibn = fib(i);
		printf("%d,", fibn);    //输出斐波那契数列a(0)到a(n)
		if (i == n) {
			printf("\nfibn(%d) = %d\n", i, fibn);    //输出a(n)
		}
	}

	return 0;
}

int fib(int n)
{
	int fibn;
	if (memo[n] != 0) {
		fibn = memo[n];    //如果a(n)之前算过，记录在数组中，就直接返回值
	}
	else if (n == 0 || n == 1) {
		fibn = n;
		memo[n] = fibn;
	}
	else {
		fibn = fib(n - 1) + fib(n - 2);    //计算a(n)值并存在数组中
		memo[n] = fibn;
	}

	return fibn;
}
