#include<iostream>
using namespace std;

int main()
{
	long long wp, usp;
	double pct;
	cout << "Enter the world's population: ";
	cin >> wp;
	cout << "Enter the population of the US: ";
	cin >> usp;
	pct = 1.0*usp / wp * 100;
	cout << "the population of the US is "
		<< pct
		<< "% of the world's population.\n";
	return 0;
}