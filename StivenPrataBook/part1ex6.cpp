//convert light years to light years
#include <iostream>
using namespace std;
double yearsToUnits(double);

int main()
{
	cout << "Enter the number of light years: ";
	double lightYears;
	cin >> lightYears;
	cout << endl;
	double astronomicalUnits;
	astronomicalUnits = yearsToUnits(lightYears);
	cout << lightYears << " light years = " << astronomicalUnits << " astronomical units." << endl;
	cin.get();
	return 0;
}

double yearsToUnits(double lightYears)
{
	double _astronomicalUnits = 63240;
	return lightYears * _astronomicalUnits;
}