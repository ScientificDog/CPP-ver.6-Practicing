#include<iostream>
using namespace std;

int main()
{
	const int i2f = 12;
	const double i2m = 0.0254;
	const double k2p = 2.2;
	int inch, foot, pound;
	double meter, kg,BMI;
	cout << "Enter your height in __ foots and __ inches: \n";
	cin >> foot;
	cin >> inch;
	cout << "Enter your weight in __ pounds: \n";
	cin >> pound;
	meter = (foot*i2f + inch)*i2m;
	kg = pound / k2p;
	BMI = kg / meter / meter;
	cout << "Your BMI is " << BMI << endl;
	return 0;
}