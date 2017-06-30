//Convert seconds to days, hours, minutes and seconds
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the number of seconds:";
	long long input;
	cin >> input;
	const long long Seconds_per_minute = 60;
	const long long Minutes_per_hour = (60 * Seconds_per_minute);
	const long long Hours_per_day = (24 * Minutes_per_hour);

	long days = (input / Hours_per_day);
	long residue = (input % Hours_per_day);
	long hours = (residue / Minutes_per_hour);
	residue = (residue % Minutes_per_hour);
	long minutes = (residue / Seconds_per_minute);
	long seconds = (residue % Seconds_per_minute);
	cout << input << " seconds = ";
	cout << days << " days, ";
	cout << hours << " hours, ";
	cout << minutes << " minutes, ";
	cout << seconds << " seconds." << endl;

	system("pause");
}