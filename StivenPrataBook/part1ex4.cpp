//user enter his age and the programm convet this age to months
#include <iostream>
using namespace std;
int ageToMonths(int);

int main()
{
	cout << "Enter your age, please: ";
	int age;
	cin >> age;
	cout << endl;
	cout << "Your age in months is: " << ageToMonths(age) << endl;
	cin.get();
	return 0;
}

int ageToMonths(int _age)
{
	return _age * 12;
}