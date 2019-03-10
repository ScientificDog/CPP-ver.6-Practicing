#include<iostream>
using namespace std;
double liye(double ly);

int main()
{
	double ly;
	cout << "enter the number of light year: ";
	cin >> ly;
	liye(ly);
	return 0;
}

double liye(double ly){
//特定函数调用cout需要在前面加上std::，或是using语句	
	double au;
	au = ly * 63240;
	std::cout << ly << " light years = "
		<< au << " astronomical units"
		<< endl;
	return au;
}