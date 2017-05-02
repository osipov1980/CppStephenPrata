//furlong to yards
#include <iostream>
using namespace std;
void furlongToYard(int);

int main()
{
	cout << "Please enter the distance in farlong: " << endl;
	int farlong;
	cin >> farlong;
	furlongToYard(farlong);
	cin.get();
	return 0;
}

void furlongToYard(int f)
{
	cout << "The distance in farlong is: " << f << endl;
	cout << "The distance in yards is: " << f * 220 << endl;
}