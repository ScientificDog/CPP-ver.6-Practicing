#include<iostream>
using namespace std;

int main()
{
	const int h2m = 60;
	const int m2s = 60;
	const int d2h = 24;
	long sec;
	int d, h, m, s;
	cout << "Enter the number of seconds: ";
	cin >> sec;
	d = sec / (m2s*h2m*d2h);
	h = (sec - d * (m2s*h2m*d2h)) / (h2m*m2s);
	m = (sec - d * (m2s*h2m*d2h) - h * (h2m*m2s)) / m2s;
	s = sec - d * (m2s*h2m*d2h) - h * (h2m*m2s) - m * m2s;
	cout << sec << " seconds = "
		<< d << " days, "
		<< h << " hours, "
		<< m << " minutes, "
		<< s << " seconds.\n";
	return 0;
}