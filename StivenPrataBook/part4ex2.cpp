#include <iostream>
#include <string>  //for string

int main()
{
	using namespace std;
	string name, dessert;

	cout << "Enter your nane: \n";
	getline(cin, name);
	cout << "Enter your favorite dessert: \n";
	cin >> dessert;
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << " .\n";

	return 0;
}