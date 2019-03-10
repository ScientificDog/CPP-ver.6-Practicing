#include<iostream>
using namespace std;

int main()
{
	const int meter=100;
	int cm;
	cout << "Please Enter your height in cm: ___\b\b\b";
	cin >> cm;
	cout << "Your height is "
		<< cm / meter << " m "
		<< cm % meter << " cm\n";
	return 0;
}