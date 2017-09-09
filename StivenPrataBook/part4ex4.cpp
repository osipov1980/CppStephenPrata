#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string fname;
	string lname;
	string singleString = "Here's the information in a single string: ";

	cout << "Enter first name: " << endl;
	getline(cin, fname);
	cout << "Enter last name: " << endl;
	getline(cin, lname);
	singleString = singleString + lname + ", " + fname;

	cout << singleString << endl;

	cin.get();
	return 0;
}