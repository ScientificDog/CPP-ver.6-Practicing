#include<iostream>
using namespace std;

int main()
{
	const int d2m = 60;
	const int m2s = 60;
	double deg, min, sec;
	cout << "Enter a Latitude in degrees,minutes and seconds: \n";
	cout << "First, enter the degrees: ";
	cin >> deg;
	cout << "Next, enter the minutes of arc: ";
	cin >> min;
	cout << "Finally, enter the seconds of arc: ";
	cin >> sec;
	cout << deg << " degrees, "
		<< min << " minutes, "
		<< sec << " seconds = "
		<< deg + min / d2m + sec / m2s / d2m
		<< " degrees\n";
	return 0;
}