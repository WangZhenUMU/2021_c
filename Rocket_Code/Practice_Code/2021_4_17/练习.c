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

	/*����ˮ����
	��Ŀ���� :
	����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
	��20Ԫ�����Զ�����ˮ�����ʵ�֣�*/

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
//	//ż������λ
//	printf("ż��λ: ");
//	ShowBitsHelper(x, 1 << 31);
//	printf("����λ��");
//	ShowBitsHelper(x, 1 << 30);
//}
////��Ŀ����:
////����������������������ʱ������
////��Ŀ���� :
////����������ʱ������������������������
//
//void Swap(int *xp, int *yp)
//{
//	//1. ��ͬΪ��(0)����ͬΪ��(1),��λ���㣡���������λ���е�
//	//00000.....0001
//	//00000.....0010 ^
//	//---------------
//	//00000.....0011 -�� 3
//	//printf("%d\n", 1^2);
//	//2. �κ�����0 ^����������
//	//printf("%d\n", 1 ^ 0);
//	//printf("%d\n", 12 ^ 0);
//	//printf("%d\n", 11 ^ 0);
//	//printf("%d\n", 14 ^ 0);
//	//printf("%d\n", 0 ^ 0);
//	//3. �����֧�ֽ����ɺͽ����
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
//		printf("�Ƿ�n\n");
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
//	//��ӡ����
//	//��Ŀ���� :
//	//��C��������Ļ���������ͼ����
//
//	//ShowImage(43);
//
//
//	//��ӡˮ�ɻ���
//	//��Ŀ���� :
//	//���0��100000֮������С�ˮ�ɻ������������
//	//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮
//	//��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3��
//	//��153��һ����ˮ�ɻ�������
//	//int i = 0;
//	//for (; i <= 100000; i++){
//	//	if (IsNarcissus(i)){
//	//		printf("%d ", i);
//	//	}
//	//}
//	//printf("\n");
//	//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//	//���磺2 + 22 + 222 + 2222 + 22222
//	//������ֵ�����ۼ�,total
//	//����ÿ����ֵ,curr
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
//	//дһ����������������һ���ַ��������ݡ�
//	//"abcd1234"
//	//char str[] = "abcd234";
//	//printf("before: %s\n", str);
//	//Reverse(str);
//	//printf("after: %s\n", str);
//
//
//	//�������Ľ���ǣ�
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
//	//ָ�� vs ָ����� vs ��ַ
//	//ָ����ǵ�ַ����ַ���������ǣ��ɱ������𣿿��ԣ���ʲô������ָ�����
//	
//
//	//�������ռ�+����+����ַ��
//	//int x = 10;
//	//x = 20; //x�ռ䣬��ֵ
//	//y = x;  //x���ݣ� ��ֵ
//
//	//ָ�� vs ָ�����: �����ڸ����ϣ����������������ϣ������֣��ﾳ�������ģ�
//	//int x = 10;
//	//int *p = &x;
//
//	////�κ�һ���������ڲ�ͬ��Ӧ�ó����У� ����ͬ�ĺ��壡����
//	//int *q = p; //p���ݣ�&x����ַ
//	//p = &y;     //p�ռ�
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
//	//��ӡ���������Ƶ�����λ��ż��λ
//	//int
//	//�κ�����1 & ����������
//	//�κ�����0 & ����0
//	// 1100 0001
//	// 1000 0000
//	// 0000 0001 << 31 : n >> 2
//	// ������1 0 0 1
//	// ż����1 0 0 0
//	//ShowBits(0xFEFE0000);
//
//	system("pause");
//	return 0;
//}