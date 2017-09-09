//arrays of integers
#include <iostream>
int main()
{
	using namespace std;
	int yams[3];
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;
	int yamcosts[3] = { 20, 30, 5 }; //initialize array

	cout << "Total yams = ";
	cout << yams[0] + yams[1] + yams[2] << endl;  //21
	cout << "The package with " << yams[1] << " yams costs ";
	cout << yamcosts[1] << " cents per yam.\n"; //8 30
	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
	total = total + yams[2] * yamcosts[2];
	cout << "The total yam expense is " << total << " cents.\n"; //140+240+30 = 410

	cout << "\nSize of yams array = " << sizeof yams; //12
	cout << " bytes. \n";  
	cout << "Size of one element = " << sizeof yams[0];  //4
	cout << " bytes. \n";

	system("pause");
}