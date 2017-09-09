//Get string after getting number (problem)
#include <iostream>
int main()
{
	using namespace std;
	cout << "What year was your house built?\n";
	int year;
	//cin >> year;       Here is problem! Do not do this!
	(cin >> year).get();  //This is the right way!
	cout << "What is its address?\n";
	char address[80];
	cin.getline(address, 80);
	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\n";

	return 0;
}