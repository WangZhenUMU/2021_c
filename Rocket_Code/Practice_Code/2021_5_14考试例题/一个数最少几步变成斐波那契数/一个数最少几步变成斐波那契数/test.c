#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	while (1) {
		int N, current = 1, next = 1;
		printf("请输入N #>");
		scanf("%d", &N);
		if (N == 0)
		{
			printf("需要1步\n");
		}
		else
		{
			while (N > next)
			{
				int temp = next;
				next += current;
				current = temp;
			}
			printf("需要%d步\n", ((next - N) < (N - current) ? (next - N) : (N - current)));
		}
	}
	return 0;
}