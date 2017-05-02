//call two functions, that print some text
#include <iostream>
using namespace std;
void printMice(void);
void printRun(void);

int main()
{
	printMice();
	printMice();
	printRun();
	printRun();
	cin.get();
	return 0;
}

void printMice()
{
	cout << "Three blind mice" << endl;
}

void printRun()
{
	cout << "See how they run" << endl;
}