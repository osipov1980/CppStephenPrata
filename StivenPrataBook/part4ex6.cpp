#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
	string brand;
	float weight;
	int calories;
};

int main()
{
	CandyBar sweets[3] = {{"Natasha", 45.3, 350}, {"Alenka", 33.76, 400}, {"Stepashka", 330.12, 500}};

	for (int i = 0; i < 3; i++)
	{
		cout << sweets[i].brand << endl;
		cout << sweets[i].weight << endl;
		cout << sweets[i].calories << endl;
		cout << endl;
	}


	cin.get();
	return 0;
}