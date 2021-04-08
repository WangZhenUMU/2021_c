#include<stdio.h> //预处理命令  标准输入输出头文件
#include<stdbool.h>
int global = 0;//全局变量

//萌新写的第一个c语言hello C。
void test01()
{
	printf("Hello C.\n");
}

//变量类型
void test02()
{
	//定义变量 开辟空间
	bool flag;//布尔型
	char ch;  //字符
	short s; //短整形
	int i;   //整型
	long b;  //长整形
	long long long_b;
	float f; //单精度浮点类型
	double d; //双精度浮点类型
	printf("bool = %d\n", sizeof(bool));
	printf("char = %d\n", sizeof(char));
	printf("short = %d\n", sizeof(short));
	printf("int = %d\n", sizeof(int));
	printf("long = %d\n", sizeof(long));
	printf("long long = %d\n", sizeof(long long));
	printf("float = %d\n", sizeof(float));
	printf("double = %d\n", sizeof(double));
}

//定义变量 开辟空间
void test03()
{
	bool flag = false; //true 1   false 0
	char ch = 'A';  //字符  "字符串"
	short s = 10; //短整形
	int i = 100;   //
	long b = 1000;  //长整形
	long long long_b = 2000;
	float f = 12.34f; //单精度浮点类型
	double d = 23.45; //双精度浮点类型
}

//变量的使用
void test04()
{
	int select;
	printf("Please input select:>");
	scanf("%d", &select); //取地址
	if(select >= 60)
	{
		printf("优秀\n");
	}
	else
	{
		printf("不及格.\n");
	}
}

//局部变量
void test05()
{
	//局部变量
	char ch = 'A'; //初始化
	int a = 100;
	double d = 12.34;
}

//作用域
void test06()
{
	int local = 2018;//局部变量
	int global = 2020;//局部变量
	printf("global = %d\n", global);//输出2020当全局变量和局部变量同名时，作用域内使用局部变量
}

#define SIZE 10//宏定义，给字面值10一个新名字SIZE
void test07()
{
	10;
	const int a = 10; //常量 只读变量
	enum {A=1,B=2};
}

//字符串
void test08()
{
	char ar[] = "abcxyz";
	printf("strlen = %d\n", strlen(ar));
	printf("sizeof = %d\n", sizeof(ar));
	char arr1[] = "bit";
	char arr2[] = { 'b', 'i', 't' };
	char arr3[] = { 'b', 'i', 't', '\0' };

	printf("%s\n", arr1); //bit
	printf("%s\n", arr2); //bit随机数
	printf("%s\n", arr3); //bit
}

//转义字符
void test09()
{
	printf("Hello C.\n"); //\n换行  转义字符
	printf("C:\\Bit\\Code\\2021_rocket\\C\\Test3_31_初识C语言\n");
	printf("Hello \"body\"\n");
	printf("Hello \'body\'\n");
	printf("abc\txyz\thjk\tlmn\n"); //tab
}

//++运算符
void test10()
{
	int count = 1;
	while(count <= 100)
	{
		printf("count = %d\n", count);
		//count = count + 1;
		//count += 1;
		//count++; //后++
		++count; //前++
	}
}

//while循环
void test11()
{
	int count = 1;
	do
	{
		printf("count = %d\n", count);
		count = count + 1;
	}while(count <= 100);
}

//for循环
void test12()
{
	int count = 1;
	//for(初始化; 循环条件 ; 更改条件)
	for(int i=0;  i<100; i++)
	{
		printf("count = %d\n", count);
		count = count + 1;
	}
}

//函数
int Max(int a, int b)
{
	int max_value;
	if(a > b)
	{
		max_value = a;
	}
	else
	{
		max_value = b;
	}
	return max_value;
}
void test13()
{
	int a = 10;
	int b = 20;

	int result = Max(a, b);

	printf("max value = %d\n", result);

}

//数组
void test14()
{
	int array[10] = {1,2,3,4,5,6,7,8,9,10}; //
	for(int i=0; i<10; ++i)
	{
		printf("%d ", array[i]);
	}
	int ar[10]; //未初始化
	//printf("size = %d\n", sizeof(ar));
	int br[10] = { 1,2,3,4,5,6,7,8,9,10 }; //完全初始化
	int cr[10] = { 1,2,3,4 };//未完全初始化

	int dr[] = { 1,2,3,4,5 };
	int n = sizeof(dr) / sizeof(ar[0]);
}

//主函数
int main()
{
	//void test01();
	//void test02();
	//void test03(); 
	//void test04();
	//void test05();
	//void test06();
	//void test07();
	//void test08();
	//void test09();
	//void test10();
	//void test11();
	//void test12();
	//void test13();
	void test14();
	return 0;
}




