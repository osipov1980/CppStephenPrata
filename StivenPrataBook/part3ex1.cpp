//convert height from inch to foots and inches
#include <iostream>
int main()
{
	using namespace std;
	const int Inches_per_foot = 12;
	int height;

	cout << "Enter your height in inches: ___\b\b\b";
	cin >> height;
	int foots = height / Inches_per_foot;
	int inches = height % Inches_per_foot;
	cout << height << " inches are " << foots
		<< " foots, " << inches << " inch(es). \n";
	return 0;
}