#include<stdio.h> //Ԥ��������  ��׼�������ͷ�ļ�
#include<stdbool.h>
int global = 0;//ȫ�ֱ���

//����д�ĵ�һ��c����hello C��
void test01()
{
	printf("Hello C.\n");
}

//��������
void test02()
{
	//������� ���ٿռ�
	bool flag;//������
	char ch;  //�ַ�
	short s; //������
	int i;   //����
	long b;  //������
	long long long_b;
	float f; //�����ȸ�������
	double d; //˫���ȸ�������
	printf("bool = %d\n", sizeof(bool));
	printf("char = %d\n", sizeof(char));
	printf("short = %d\n", sizeof(short));
	printf("int = %d\n", sizeof(int));
	printf("long = %d\n", sizeof(long));
	printf("long long = %d\n", sizeof(long long));
	printf("float = %d\n", sizeof(float));
	printf("double = %d\n", sizeof(double));
}

//������� ���ٿռ�
void test03()
{
	bool flag = false; //true 1   false 0
	char ch = 'A';  //�ַ�  "�ַ���"
	short s = 10; //������
	int i = 100;   //
	long b = 1000;  //������
	long long long_b = 2000;
	float f = 12.34f; //�����ȸ�������
	double d = 23.45; //˫���ȸ�������
}

//������ʹ��
void test04()
{
	int select;
	printf("Please input select:>");
	scanf("%d", &select); //ȡ��ַ
	if(select >= 60)
	{
		printf("����\n");
	}
	else
	{
		printf("������.\n");
	}
}

//�ֲ�����
void test05()
{
	//�ֲ�����
	char ch = 'A'; //��ʼ��
	int a = 100;
	double d = 12.34;
}

//������
void test06()
{
	int local = 2018;//�ֲ�����
	int global = 2020;//�ֲ�����
	printf("global = %d\n", global);//���2020��ȫ�ֱ����;ֲ�����ͬ��ʱ����������ʹ�þֲ�����
}

#define SIZE 10//�궨�壬������ֵ10һ��������SIZE
void test07()
{
	10;
	const int a = 10; //���� ֻ������
	enum {A=1,B=2};
}

//�ַ���
void test08()
{
	char ar[] = "abcxyz";
	printf("strlen = %d\n", strlen(ar));
	printf("sizeof = %d\n", sizeof(ar));
	char arr1[] = "bit";
	char arr2[] = { 'b', 'i', 't' };
	char arr3[] = { 'b', 'i', 't', '\0' };

	printf("%s\n", arr1); //bit
	printf("%s\n", arr2); //bit�����
	printf("%s\n", arr3); //bit
}

//ת���ַ�
void test09()
{
	printf("Hello C.\n"); //\n����  ת���ַ�
	printf("C:\\Bit\\Code\\2021_rocket\\C\\Test3_31_��ʶC����\n");
	printf("Hello \"body\"\n");
	printf("Hello \'body\'\n");
	printf("abc\txyz\thjk\tlmn\n"); //tab
}

//++�����
void test10()
{
	int count = 1;
	while(count <= 100)
	{
		printf("count = %d\n", count);
		//count = count + 1;
		//count += 1;
		//count++; //��++
		++count; //ǰ++
	}
}

//whileѭ��
void test11()
{
	int count = 1;
	do
	{
		printf("count = %d\n", count);
		count = count + 1;
	}while(count <= 100);
}

//forѭ��
void test12()
{
	int count = 1;
	//for(��ʼ��; ѭ������ ; ��������)
	for(int i=0;  i<100; i++)
	{
		printf("count = %d\n", count);
		count = count + 1;
	}
}

//����
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

//����
void test14()
{
	int array[10] = {1,2,3,4,5,6,7,8,9,10}; //
	for(int i=0; i<10; ++i)
	{
		printf("%d ", array[i]);
	}
	int ar[10]; //δ��ʼ��
	//printf("size = %d\n", sizeof(ar));
	int br[10] = { 1,2,3,4,5,6,7,8,9,10 }; //��ȫ��ʼ��
	int cr[10] = { 1,2,3,4 };//δ��ȫ��ʼ��

	int dr[] = { 1,2,3,4,5 };
	int n = sizeof(dr) / sizeof(ar[0]);
}

//������
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




