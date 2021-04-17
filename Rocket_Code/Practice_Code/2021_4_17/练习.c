#include <stdio.h>
#include <string.h>
#include <math.h>
#include <assert.h>
#include <windows.h>

struct stu
{
	int num;
	char name[10];
	int age;
};


void fun(struct stu *p)
{
	printf("%s\n", (*p).name);
	return;
}

int DrinkSoda(int money)
{
	int total = money;
	int empty = money;

	while (empty > 1){
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}

	return total;
}

int main()
{
	//struct stu students[3] ={	{ 9801, "zhang", 20 },
	//							{ 9802, "wang", 19 },
	//							{ 9803, "zhao", 18 }
	//						};
	//fun(students + 1);

	/*喝汽水问题
	题目内容 :
	喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
	给20元，可以多少汽水（编程实现）*/

	int money = 20;
	int total = DrinkSoda(money);

	printf("%d\n", total);

	system("pause");
	return 0;
}


//
//void ShowBitsHelper(int x, unsigned int index)
//{
//	int top = sizeof(int)* 8;
//	int i = 0;
//	for (; i < top / 2; i++){
//		//printf("%d ", x  & n); 
//		if (x & index){
//			printf("1 ");
//		}
//		else{
//			printf("0 ");
//		}
//		index >>= 2;
//	}
//	printf("\n");
//}
//
//void ShowBits(int x)
//{
//	//偶数比特位
//	printf("偶数位: ");
//	ShowBitsHelper(x, 1 << 31);
//	printf("奇数位：");
//	ShowBitsHelper(x, 1 << 30);
//}
////题目名称:
////交换两个变量（不创建临时变量）
////题目内容 :
////不允许创建临时变量，交换两个整数的内容
//
//void Swap(int *xp, int *yp)
//{
//	//1. 相同为假(0)，不同为真(1),是位运算！！，逐比特位进行的
//	//00000.....0001
//	//00000.....0010 ^
//	//---------------
//	//00000.....0011 -》 3
//	//printf("%d\n", 1^2);
//	//2. 任何数和0 ^都是它本身
//	//printf("%d\n", 1 ^ 0);
//	//printf("%d\n", 12 ^ 0);
//	//printf("%d\n", 11 ^ 0);
//	//printf("%d\n", 14 ^ 0);
//	//printf("%d\n", 0 ^ 0);
//	//3. 异或是支持交换律和结合律
//	//printf("%d\n", 11 ^ 22 ^ 11);
//	//printf("%d\n", 11 ^  11 ^22);
//	//printf("%d\n", 11 ^( 22 ^ 11));
//
//	*xp = *xp ^ *yp;
//	*yp = *xp ^ *yp;
//	*xp = *xp ^ *yp;
//
//	//*xp = *xp + *yp;
//	//*yp = *xp - *yp;
//	//*xp = *xp - *yp;
//
//	//int temp = *xp;
//	//*xp = *yp;
//	//*yp = temp;
//}
//int i = 0;
//
//void Reverse(char *str)
//{
//	assert(str);
//	char *start = str;
//	char *end = str + strlen(str) - 1;
//
//	while (start < end){
//		char temp = *start;
//		*start = *end;
//		*end = temp;
//		start++, end--;
//	}
//}
//
//int CountNum(int n)
//{
//	int count = 0;
//	while (n){
//		n /= 10;
//		count++;
//	}
//	return count;
//}
//int IsNarcissus(int n)
//{
//	int count = CountNum(n); //1
//
//	//2
//	int total = 0;
//	int _n = n;
//	while (_n){
//		int Individual = _n % 10;
//		total += (int)pow(Individual, count);
//		_n /= 10;
//	}
//
//	//3
//	return n == total;
//}
//
//void ShowImage(int n)
//{
//	if (n % 2 == 0){
//		printf("非法n\n");
//		return;
//	}
//
//	int up = n / 2 + 1;
//	int i = 0;
//	for (; i < up; i++){
//		int j = 0;
//		for (; j < n/2 - i ; j++){
//			printf(" ");
//		}
//		int k = 0;
//		for (; k < 2*i+1; k++){
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	int down = n / 2; //6
//	for (i = 0; i < down ; i++){
//		int j = 0;
//		for (; j < i + 1; j++){
//			printf(" ");
//		}
//		int k = 0;
//		for (; k < n - 2 * i - 2; k++){
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a;
//	struct S *p = &a;
//
//	printf("%d\n", (*p).a);
//
//	//打印菱形
//	//题目内容 :
//	//用C语言在屏幕上输出以下图案：
//
//	//ShowImage(43);
//
//
//	//打印水仙花数
//	//题目内容 :
//	//求出0～100000之间的所有“水仙花数”并输出。
//	//“水仙花数”是指一个n位数，其各位数字的n次方之
//	//和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，
//	//则153是一个“水仙花数”。
//	//int i = 0;
//	//for (; i <= 100000; i++){
//	//	if (IsNarcissus(i)){
//	//		printf("%d ", i);
//	//	}
//	//}
//	//printf("\n");
//	//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//	//例如：2 + 22 + 222 + 2222 + 22222
//	//各个数值进行累加,total
//	//更改每个数值,curr
//	//int a = 2;
//	//int total = 0;
//	//int curr = 0; //?
//
//	//int i = 0;
//	//for (; i < 5; i++){
//	//	curr = curr * 10 + a;
//	//	total += curr;
//	//}
//	//printf("%d\n", total);
//
//
//
//	//unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	//unsigned long *pulPtr;
//	//pulPtr = pulArray;
//	//*(pulPtr + 3) += 3;
//	//printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//	//写一个函数，可以逆序一个字符串的内容。
//	//"abcd1234"
//	//char str[] = "abcd234";
//	//printf("before: %s\n", str);
//	//Reverse(str);
//	//printf("after: %s\n", str);
//
//
//	//下面代码的结果是：
//	//int a = 0x11223344;
//	//char *pc = (char*)&a;
//	//*pc = 0;
//	//printf("%x\n", a);
//	//int arr[] = { 1, 2, 3, 4, 5 };
//	//short *p = (short*)arr;
//	//int i = 0;
//	//for (i = 0; i<4; i++)
//	//{
//	//	*(p + i) = 0;
//	//}
//
//	//for (i = 0; i<5; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	//10->int
//	//指针 vs 指针变量 vs 地址
//	//指针就是地址，地址是数据吗？是，可被保存吗？可以，用什么变量？指针变量
//	
//
//	//变量：空间+内容+（地址）
//	//int x = 10;
//	//x = 20; //x空间，左值
//	//y = x;  //x内容， 右值
//
//	//指针 vs 指针变量: 我们在概念上，区分它。在语义上，不区分，语境（上下文）
//	//int x = 10;
//	//int *p = &x;
//
//	////任何一个变量，在不同的应用场景中， 代表不同的含义！！！
//	//int *q = p; //p内容，&x，地址
//	//p = &y;     //p空间
//
//	//int *p ;
//	//int x = 20;
//
//	//int x = 20;
//	//&x;
//	//i--;
//	//if (i > sizeof(i))
//	//{
//	//	printf(">\n");
//	//}
//	//else
//	//{
//	//	printf("<\n");
//	//}
//	//int x = 10;
//	//int y = 20;
//
//	//printf("before:%d, %d\n", x, y);
//
//	//Swap(&x, &y);
//
//	//printf("after:%d, %d\n", x, y);
//
//	//打印整数二进制的奇数位和偶数位
//	//int
//	//任何数和1 & 都是它本身
//	//任何数和0 & 都是0
//	// 1100 0001
//	// 1000 0000
//	// 0000 0001 << 31 : n >> 2
//	// 奇数：1 0 0 1
//	// 偶数：1 0 0 0
//	//ShowBits(0xFEFE0000);
//
//	system("pause");
//	return 0;
//}