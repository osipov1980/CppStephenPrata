//Convert latitude decimal
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter a latitude in degrees, minutes and seconds:" << endl;
	cout << "First, enter the degrees:" << endl;
	float degrees;
	cin >> degrees;
	cout << "Next, enter the minutes of arc:" << endl;
	float minutes;
	cin >> minutes;
	cout << "Finally, enter the seconds of arc:" << endl;
	float seconds;
	cin >> seconds;

	float const Minutes_per_degree = 60;
	float const Seconds_per_hour = 3600;
	float res = degrees + (minutes / Minutes_per_degree) + (seconds / 3600);
	cout << degrees << " degrees, " << minutes << " minutes, " 
		<< seconds << " seconds = " << res << " degrees" << endl;

	system("pause");
}