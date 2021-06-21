#include <iostream>
using namespace std;
class A
{
	friend class C;
public:
	void a1()
	{
		cout<< a << b2.b <<endl;
	}
private:
	int a;
	B b2;
};
class B
{
	friend class A;
private:
	int b;
	A a2;
};
class C
{
	void test()
	{
		cout << a3.b2.b << endl;
	}
private:
	A a3;
};