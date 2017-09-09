#include <iostream>
#include <string>

using namespace std;

struct pizza
{
	string brand;
	float diameter;
	float weight;
};


int main()
{
	pizza first;

	cout << "Enter the brand name: " << endl;
	getline (cin, first.brand);
	cout << "Enter the diameter of pizza: " << endl;
	cin >> first.diameter;
	cout << "Enter the weight of pizza: " << endl;
	cin >> first.weight;

	cout << first.brand << endl
		 << first.diameter << endl
		 << first.weight << endl;

	cin.get();
	return 0;
}