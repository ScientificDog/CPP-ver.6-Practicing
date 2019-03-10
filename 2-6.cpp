#include<iostream>
using namespace std;

int main()
{
	double mile, gal;
	cout << "Enter the number of miles: ";
	cin >> mile;
	cout << "Enter the number of gallons: ";
	cin >> gal;
	cout << mile / gal << " miles per gallon.\n";
	return 0;
}