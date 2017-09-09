//Calculate size of array (part 4)
#include <iostream>
int main()
{
	using namespace std;
	short things[] = { 1, 5, 3, 8 };
	int num_elements = sizeof things / sizeof(short);
	cout << num_elements << endl;
	return 0;
}