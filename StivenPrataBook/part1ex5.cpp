//celsius to fahrenheit
#include <iostream>
using namespace std;
float celsiusToFahrenheit(float);

int main()
{
	cout << "Please enter a Celsius value: ";
	float celsius;
	cin >> celsius;
	cout << endl;
	cout << celsius << " degrees Celsius is ";
	celsius = celsiusToFahrenheit(celsius);
	cout << celsius << " degrees Fahrenheit." << endl;
	cin.get();
	return 0;
}

float celsiusToFahrenheit(float _celsius)
{
	return (1.8 * _celsius) + 32;
}