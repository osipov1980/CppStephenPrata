//calculate BMI
#include <iostream>
#include <cmath>
using namespace std;
void main() {
	cout << "Enter your height in feet and inches:" << endl;
	cout << "First, enter the feet:";
	int feet;
	cin >> feet;
	cout << "Second, enter the inches:";
	int inch;
	cin >> inch;
	cout << "Enter your weight in pounds:";
	int pounds;
	cin >> pounds;
	const int Inches_per_foot = 12;
	int inches = (feet * Inches_per_foot) + inch;
	const float Meter_per_inch = 0.0254;
	float meters = inches * Meter_per_inch;
	const float Pounds_per_kg = 2.2;
	float weight = pounds / Pounds_per_kg;
	float bmi = weight / sqrt(meters);
	cout << endl << "Your Body Mass Index (BMI) is: " << bmi << endl;
	system("pause");
}
