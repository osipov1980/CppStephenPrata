//Readig more then one line
#include <iostream>
int main()
{
	using namespace std;
	const int ArrSize = 20;
	char name[ArrSize];
	char dessert[ArrSize];

	cout << "Enter your name:\n";
	cin.get(name, ArrSize).get();
	//cin >> name;                            reading only one word
	cout << "Enter your favorite dessert:\n";
	cin.get(dessert, ArrSize).get();
	//cin >> dessert;                         reading only one word
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";

	return 0;
}