#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>

unsigned long long Fib(int n)
{
	if (n <= 2)
		return 1;

	unsigned long long fib, fib1 = 1, fib2 = 1;
	for (int i = 3; i <= n; ++i)
	{
		fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib;
	}
	return fib;
}

void main()
{
	int n;
	while (1)
	{
		printf("input n:>");
		scanf("%d", &n);
		if (n == -1)
			break;

		size_t result = Fib(n);
		printf("第%d项的斐波那契值 = %ul\n", n, result);
	}
}

/*
unsigned long long Fib(int n)
{
	if(n <= 2)
		return 1;
	else
		return Fib(n-1) + Fib(n-2);
}

void main()
{
	int n;
	while(1)
	{
		printf("input n:>");
		scanf("%d", &n);
		if(n == -1)
			break;

		size_t result = Fib(n);
		printf("第%d项的斐波那契值 = %d\n", n, result);
	}
}

/*
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);  //123  12 1
	}
	printf("%d ", n % 10);
}

int main()
{
	int num = 1234;
	print(num); //1 2 3 4
	return 0;
}



/*
//n! = 1*2*3*.....*n
//OJ 迭代  循环
//递归

size_t Fact(int n)
{
	size_t ret = 1;
	for(int i=1; i<=n; ++i)
	{
		ret *= i;
	}
	return ret;
}

void main()
{
	int n;
	while(1)
	{
		printf("input n:>");
		scanf("%d", &n);
		if(n == -1)
			break;

		size_t result = Fact(n);
		printf("%d! = %d\n", n, result);
	}
}


/*
size_t Fact(int n)
{
	if(n == 1)
		return 1;
	else
		return n*Fact(n-1);
}

void main()
{
	int n;
	while(1)
	{
		printf("input n:>");
		scanf("%d", &n);
		if(n == -1)
			break;

		size_t result = Fact(n);
		printf("%d! = %d\n", n, result);
	}
}

/*
size_t Fact(int n)
{
	size_t ret = 1;
	for(int i=1; i<=n; ++i)
	{
		ret *= i;
	}
	return ret;
}

void main()
{
	int n;
	while(1)
	{
		printf("input n:>");
		scanf("%d", &n);
		if(n == -1)
			break;

		size_t result = Fact(n);
		printf("%d! = %d\n", n, result);
	}
}

/*
#include"Max.h"
#include"Min.h"

void main()
{
	int a = 1;
	int b = 2;
	int result = Max(a, b);
	printf("max value = %d\n", result);
	result = Min(a, b);
	printf("min value = %d\n", result);
}

/*
int Max(int a, int b);
void fun();

void main()
{
	int a = 1;
	int b = 2;
	int result = Max(a, b);
	printf("result = %d\n", result);
	fun();
}

void fun()
{
	printf("aaaaaaaaaaa\n");
	Max(1,2);
}

int Max(int a, int b)
{
	fun();
	return a > b ? a : b;
}




/*
void main()
{
	char str[20] = "HelloC++";
	int len = strlen(str);  //字符串有效长度
	printf("len = %d\n", len);

	char str1[20] = "Hello ";
	char str2[] = "C++";
	printf("str1 = %s\n", str1);
	strcat(str1, str2);  //字符串的链接
	printf("str1 = %s\n", str1);

	char str3[20] = "Hello ";
	char str4[] = "C++";
	printf("str3 = %s\n", str3);
	strcpy(str3, str4);  //字符串的拷贝
	printf("str3 = %s\n", str3);

	char str5[] = "Hello falfj";
	char str6[] = "Hello";
	int ret = strcmp(str5, str6); //字符串的比较
	printf("ret = %d\n", ret);
}

/*
int Max(int a, int b)
{
	return a > b ? a : b;
}

void main()
{
	int a = 10;
	int b = 30;
	int c = 20;
	int result = Max( Max(a, b), c );
	printf("result = %d\n", result);

}

/*
void fun()
{
	printf("This is fun().\n");
}

void PrintFun(int n)
{
	for(int i=0; i<n; ++i)
	{
		fun();
	}
}
void main()
{
	int n;
	printf("input n:>");
	scanf("%d", &n);

	PrintFun(n);
}


/*
//效率不高  改进
bool IsPrime(int value)
{
	for(int i=2; i<value/2; ++i)
	{
		if(value % i == 0)
			return false;
	}
	return true;
}

bool IsLeap(int year)
{
	return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400==0));
}


int Increment()
{
	static int num = 0;
	num +=1;
	return num;
}

void main()
{
	int num = Increment();  //num = num + 1;
	printf("num = %d\n", num);

	num = Increment(num);  //num = num + 1;
	printf("num = %d\n", num);

	num = Increment(num);  //num = num + 1;
	printf("num = %d\n", num);
}

/*
void main()
{
	int num = 0;
	num = Increment(num);  //num = num + 1;
	printf("num = %d\n", num);

	num = Increment(num);  //num = num + 1;
	printf("num = %d\n", num);

	num = Increment(num);  //num = num + 1;
	printf("num = %d\n", num);
}

/*
void main()
{
	int value;
	while(1)
	{
		printf("Please input a number[以-1结束]:>");
		scanf("%d", &value);
		if(value == -1)
			break;

		//bool flag = IsPrime(value);
		int flag = IsLeap(value);

		if(flag == 0)
			printf("OK.\n");
		else
			printf("NO.\n");
	}
}

/*
//返回值  函数名  (参数列表)  {函数体}
int Sum(int a, int b)
{
	int result = a + b;
	return result;
}
int Max(int a, int b)
{
	return a > b ? a : b;   //选择结构
}

void Swap(int x, int y)
{
	int tmp = x;
	x = y;
	y = tmp;
}
void  main()
{
	int a = 100;
	int b = 20;
	int result = Sum(a, b);
	printf("result = %d\n", result);
	int max_value = Max(a, b);
	printf("max value = %d\n", max_value);
	//交换两数
	printf("before: a = %d, b = %d\n", a, b);
	Swap(a, b);
	printf("after: a = %d, b = %d\n", a, b);
}

/*
void Swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void  main()
{
	int a = 100;
	int b = 20;
	int result = Sum(a, b);
	printf("result = %d\n", result);
	int max_value = Max(a, b);
	printf("max value = %d\n", max_value);
	//交换两数
	printf("before: a = %d, b = %d\n", a, b);
	Swap(&a, &b);
	printf("after: a = %d, b = %d\n", a, b);
}

/*
void main()
{
	time_t te;
	time(&te);
	printf("%s\n", ctime(&te));
}

/*
void main()
{
	char *str = "Hellohflkakfl";  //字符串
	int len = strlen(str);
	printf("str length = %d\n", len);
}
*/