#include<iostream>
#include<string>

using namespace std;

struct CandyBar
{
	string s_name;
	float f_weight;
	int i_calories;
};

int main()
{
	CandyBar snack =
	{
		"Mocha Munch",
		2.3,
		350
	};

	cout << "name: " << snack.s_name << endl;
	cout << "weight: " << snack.f_weight << endl;
	cout << "calories: " << snack.i_calories << endl;

	cin.get();
}