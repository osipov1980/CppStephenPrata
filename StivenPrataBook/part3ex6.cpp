//Calculate litres per 100 km
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter kilometres:";
	float km;
	cin >> km;
	cout << "Enter litres:";
	float litres;
	cin >> litres;
	float litres_per_100km = (litres / km) * 100;
	cout << litres_per_100km << endl;
	system("pause");
}