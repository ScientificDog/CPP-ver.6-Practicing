#include<iostream>
using namespace std;

int main()
{
	const double m2k = 0.6214;
	const double g2l = 3.875;
	double km, lit, mpg;
	cout << "Enter the number of kilometers: ";
	cin >> km;
	cout << "Enter the number of oil liters: ";
	cin >> lit;
	mpg = (km*m2k) / (lit / g2l);
	cout << "Oil consumption in mpgs: "
		<< mpg << endl;
	return 0;
}