#include<iostream>
using namespace std;
void time(int h, int m);

int main()
{
	int h, m;
	cout << "Enter the numebr of hours: ";
	cin >> h;
	cout << endl;
	cout << "Enter the number of minutes: ";
	cin >> m;
	cout << endl;
	time(h,m);
	return 0;
}

void time(int h, int m) {
	std::cout << "Time: "
		<< h << ":" << m << endl;
}