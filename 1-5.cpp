#include<iostream>
using namespace std;

int main()
{
	double cel;
	cout << "please enter a celsius value: ";
	cin >> cel;
	cout << cel << " degrees Celsius is " 
		<< 1.8*cel + 32.0 
		<< " degrees Fahrenheit" << endl;
	return 0;
}