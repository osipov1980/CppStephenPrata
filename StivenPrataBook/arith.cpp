//using arithmetic operations
#include <iostream>
int main()
{
	using namespace std;
	double hats, heads;

	cout.setf(ios_base::fixed, ios_base::floatfield); //using format with fixed point
	cout << "Enter a number please: ";
	cin >> hats;
	cout << "Enter another number: ";
	cin >> heads;
	cout << "hats = " << hats << "; heads = " << heads << endl;
	cout << "hats + heads = " << hats + heads << endl;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "hats * heads = " << hats * heads << endl;
	cout << "hats / heads = " << hats / heads << endl;
	return 0;
}