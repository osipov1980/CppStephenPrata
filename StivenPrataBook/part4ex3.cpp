#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	const int ArSize = 20;
	char fname[ArSize];
	char lname[ArSize];
	char singleString[2 * ArSize + 2];

	cout << "Enter your first name: " << endl;
	//cin.get(fname, ArSize).get();
	cin.getline(fname, ArSize);
	fname[ArSize - 1] = '\0';
	
	cout << "Enter your last name: " << endl;
	//cin.get(lname, ArSize).get();
	cin.getline(lname, ArSize);
	lname[ArSize - 1] = '\0';

	strcpy(singleString, lname);
	strcat(singleString, ", ");
	strcat(singleString, fname);

	cout << "Here's the information in a single string: " << singleString << endl;

	cin.get();
	return 0;
}