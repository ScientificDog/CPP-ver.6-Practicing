#include<iostream>
using namespace std;
void fun1(void);
void fun2(void);

int main()
{
	fun1();
	for (int i = 0; i < 2; i++) {
		fun2();
	}
	return 0;
}

void fun1(void)
{
	for (int j = 0; j < 2; j++) {
		cout << "Three blind mice" << endl;
	}
}
void fun2(void)
{
	cout << "See how they run" << endl;
}