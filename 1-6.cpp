#include<iostream>
using namespace std;
void liye(double ly);

int main()
{
	double ly;
	cout << "enter the number of light year: ";
	cin >> ly;
	liye(ly);
	return 0;
}

void liye(double ly){	
	double au;
	au = ly * 63240;
	cout << ly << " light years = "
	     << au << " astronomical units"
	     << endl;
}
