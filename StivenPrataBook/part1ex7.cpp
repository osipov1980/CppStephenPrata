//time view
#include <iostream>
using namespace std;
void timeView(int, int);

int main()
{
	cout << "Enter the number of hours: ";
	int hours;
	cin >> hours;
	cout << endl;
	int minutes;
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	cout << endl;
	timeView(hours, minutes);
	cin.get();
	return 0;
}

void timeView(int hours, int minutes)
{
	cout << hours << ":" << minutes << endl;
}