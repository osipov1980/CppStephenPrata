// pe3-6.cpp -- liters per 100 km gasoline consumption to miles per gallon
// This is exercise 6 of chapter 3 in C++ Primer Plus by Stephen Prata

#include<iostream>

int main(void)
{
	using namespace std;
	const double gallon_per_litre = 1 / 3.875;  //0.258
	const double miles_per_100km = 62.14;

	cout << "Enter the gas consumption in liters per 100 km: ";
	double litres_per_100km;
	cin >> litres_per_100km;
	double miles_per_gallon = (miles_per_100km) / (litres_per_100km * gallon_per_litre);

	cout << litres_per_100km << " liters per 100 km is equivalent to ";
	cout << miles_per_gallon << " miles per gallon" << endl;
	system("pause");
}