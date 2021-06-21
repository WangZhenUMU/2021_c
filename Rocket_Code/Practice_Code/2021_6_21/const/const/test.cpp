#include <iostream>
using namespace std;
class A
{
public:
	void ModA(int b)
	{
		a = b;
		Func();
	}
	int Func()const
	{
		//ModA(10);
		return a;
	}
private:
	int a;
};
int main()
{
	//const A X;
	//X.ModA(10);
	A x;
	x.Func();
	return 0;
}