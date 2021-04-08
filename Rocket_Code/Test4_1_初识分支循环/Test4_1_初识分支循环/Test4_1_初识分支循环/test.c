#define _CRT_SECURES_NO_WARINGS
#include<stdio.h>
#include<stdbool.h>

int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++,k++)
	{
		printf("fjlajfaflajl\n");
		k++;
	}
	return 0;
}



/*
void main()
{
	int i = 0;
	//-128 ~ 127
	for(char ch=0; ch<128; ++ch)
	{
		printf("i = %d\n",i++);
	}
}

/*
void main()
{
	for(int i=1; i<=10; ++i)
	{
		if(i == 5)
		{
			//break; //跳出整个循环
			continue;//跳出本次循环
		}
		printf("i = %d\n", i);
	}

}

/*
void main()
{
	int i = 1;
	while(i < 1)
	{
		printf("i = %d\n", i);
		++i;
	}
}

/*
void main()
{
	int i = 1;
	do
	{
		printf("i = %d\n", i);
		++i;
	}while(i < 1);
}

/*
void main()
{
	int i = 1;
	while(i <= 10)
	{
		printf("i = %d\n", i);
		++i;
	}
}

/*
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{//switch允许嵌套使用
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	return 0;
}

/*
void main()
{
	int year, month;
	printf("Plase input year and month:>");
	scanf("%d %d", &year, &month);

	int days;

	switch(month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break;
	case 2:
		if((year%4==0&&year%100!=0) || (year%400==0))
			days = 29;
		else
			days = 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;

	default:
		printf("月份有误，程序结束.\n");
		return;
	}
	printf("%d 年的 %d 月 有 %d 天.\n", year, month, days);
}

/*
void main()
{
	float f = 12.3;
	int a=1, b=2;

	char ch = 'A';

	//整形  整形表达式
	switch(ch)
	{
	default:
		break;
	case 'A':
		break;
	}
}

/*
void main()
{
	int year, month;
	printf("Plase input year and month:>");
	scanf("%d %d", &year, &month);

	int days;

	switch(month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break;
	case 2:
		if((year%4==0&&year%100!=0) || (year%400==0))
			days = 29;
		else
			days = 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	default:
		printf("月份有误，程序结束.\n");
		return;
	}
	printf("%d 年的 %d 月 有 %d 天.\n", year, month, days);
}

/*
void main()
{
	int year, month;
	printf("Plase input year and month:>");
	scanf("%d %d", &year, &month);

	int days;

	switch(month)
	{
	case 1:
		days = 31;
		break;
	case 2:
		if((year%4==0&&year%100!=0) || (year%400==0))
			days = 29;
		else
			days = 28;
		break;
	case 3:
		days = 31;
		break;
	case 4:
		days = 30;
		break;
	case 5:
		days = 31;
		break;
	case 6:
		days = 30;
		break;
	case 7:
		days = 31;
		break;
	case 8:
		days = 31;
		break;
	case 9:
		days = 30;
		break;
	case 10:
		days = 31;
		break;
	case 11:
		days = 30;
		break;
	case 12:
		days = 31;
		break;
	default:
		printf("月份有误，程序结束.\n");
		return;
	}
	printf("%d 年的 %d 月 有 %d 天.\n", year, month, days);
}

/*
void main()
{
	int year, month;
	printf("Plase input year and month:>");
	scanf("%d %d", &year, &month);

	if(month<=0 || month>12)
	{
		printf("月份有误，程序结束.\n");
		return;
	}

	int days;

	if(month==1 || month==3 || month==5 || month==7
	   || month==8 || month==10 || month==12)
		days = 31;
	else if(month == 2)
	{
		if((year%4==0&&year%100!=0) || (year%400==0))
			days = 29;
		else
			days = 28;
	}
	else
		days = 30;

	printf("%d 年的 %d 月 有 %d 天.\n", year, month, days);
}


/*
int main()
{
	int a = 1;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)
		{
			printf("hehe\n");
		}
		else
		{
			printf("haha\n");
		}
	}
	return 0;
}

/*
int main()
{
	int a = 1;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)
			printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	return 0;
}

/*
// 1 2 3 4 5 6 7 8 9 10 11 12

void main()
{
	int year, month;
	printf("Plase input year and month:>");
	scanf("%d %d", &year, &month);

	if(month<=0 || month>12)
	{
		printf("月份有误，程序结束.\n");
		return;
	}

	if(month==1 || month==3 || month==5 || month==7
	   || month==8 || month==10 || month==12)
		printf("31");
	else if(month == 2)
	{
		if((year%4==0&&year%100!=0) || (year%400==0))
			printf("29");
		else
			printf("28");
	}
	else
		printf("30");
}

/*
void main()
{
	int year, month;
	printf("Plase input year and month:>");
	scanf("%d %d", &year, &month);

	if(month == 1)
		printf("31");
	else if(month == 2)
	{
		if((year%4==0&&year%100!=0) || (year%400==0))
			printf("29");
		else
			printf("28");
	}
	else if(month == 3)
		printf("31");
	else if(month == 4)
		printf("30");
	else if(month == 5)
		printf("31");
	else if(month == 6)
		printf("30");
	else if(month == 7)
		printf("31");
	else if(month == 8)
		printf("31");
	else if(month == 9)
		printf("30");
	else if(month == 10)
		printf("31");
	else if(month == 11)
		printf("30");
	else if(month == 12)
		printf("31");
}

/*
void main()
{
	int a = 10;

	if(a == 10)
	{
		printf("A.\n");
	}
	else if(a == 20)
	{
		printf("B.\n");
	}
	else if(a != 0)
	{
		printf("OK.\n");
	}
	else
	{
		printf("Error.\n");
	}
}

/*
struct Student
{
	char name[10];
	int age;
	char sex[3];
};

void main()
{
	struct Student s1 = {"比特", 10, "男"};
	printf("%s %d %s\n", s1.name, s1.age, s1.sex);
}


/*
void  main()
{
	printf("bool = %d\n", sizeof(bool*));
	printf("short = %d\n", sizeof(short*));
	printf("int = %d\n", sizeof(int*));
	printf("long = %d\n", sizeof(long*));
	printf("float = %d\n", sizeof(float*));
	printf("double = %d\n", sizeof(double*));
	printf("long long = %d\n", sizeof(long long*));
}

/*
void main()
{
	int a = 100;

	int *p = &a;  //

	printf("p size = %d\n", sizeof(p));

	printf("a = %d\n", a);
	printf("a = %d\n", *p);
	printf("&a = %p\n",&a);
}

/*#include"fun.h"

extern int global;

void main()
{
	int a = 10;
	int b = 20;
	int max_value = Max(a, b);
	printf("max value = %d\n", max_value);

	printf("global = %d\n", global);
}

/*
int fun()
{
	static int i = 0;
	i++;
	return i;
}

void main()
{
	int ret = fun();
	printf("ret = %d\n", ret);
	ret = fun();
	printf("ret = %d\n", ret);
	ret = fun();
	printf("ret = %d\n", ret);
}

/*
//宏定义
#define U_LONG unsigned long
typedef unsigned long u_long;

void main()
{
	unsigned long val;
	U_LONG data;
	u_long dat;

	//char short int float double
	size_t type;
}

/*
int Max(int a, int b)
{
	return a > b ? a : b;
}

void main()
{
	int ret = (10, 20, 30, 40);
	printf("ret = %d\n", ret);
	printf("max value = %d\n", Max(10,20));
}


/*
int Max(int a, int b)
{
	if(a > b)
		return a;
	return b;
}

void main()
{
	printf("max value = %d\n", Max(10,20));
}

/*
void main()
{
	int i = 0;

	printf("%d %d %d %d\n", i++, ++i, i++, ++i);
		 //0   2  2  4
		 //0   1  1  2

	printf("i = %d\n", i);
		 //4
}


/*
//逻辑运算符 && || ！
void main()
{
	int a = 0;
	int b = 1;
	int ret = a && ++b; //短路求值

	printf("ret = %d\n", ret); //1
	printf("b = %d\n", b);     //1
}

/*
//位运算
void main()
{
	int a = 10;   //0000 1010
	int b = 10;   //0001 0110

	//int ret = a & b;
	//int ret = a | b;
	//int ret = a ^ b;

	// 0000 0000 0000 0000 0000 0000 0000 1010
	// 1111 1111 1111 1111 1111 1111 1111 0101
	// 1111 1111 1111 1111 1111 1111 1111 0100
	// 1000 0000 0000 0000 0000 0000 0000 1011

	int ret = ~a;
	printf("ret = %d\n", ret);
}

/*
//>>右移  <<左移
void main()
{
	// 0110 0100
	int a = 100;
	//int ret = a >> 2;   //a / 2^2
	int ret = a << 2;     //a * 2^2

	printf("ret = %d\n", ret);
}

/*
void main()
{
	int a = 10;
	int b = 3;

	int ret = a / b;  //整除

}
*/