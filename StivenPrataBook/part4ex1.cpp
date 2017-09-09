#include <iostream>
#include <string>
using namespace std;

struct student
{
	string fname;
	string lname;
	char grade;
	int age;
};

int main()
{
	student member_1;
	cout << "What is your first name?" << endl;
	getline (cin, member_1.fname);
	cout << "What is your last name?" << endl;
	getline(cin, member_1.lname);
	cout << "What letter grade do you deserve?" << endl;
	cin >> member_1.grade;
	member_1.grade = member_1.grade + 1;
	cout << "What is your age?" << endl;
	cin >> member_1.age;

	cout << "Name: " <<  member_1.lname;
	cout << ", " << member_1.fname << endl;
	cout << "Grade: " << member_1.grade << endl;
	cout << "Age: " << member_1.age << endl;

	cin.get();
	cin.get();

	return 0;
}