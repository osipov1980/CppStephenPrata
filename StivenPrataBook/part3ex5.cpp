//Population in some country vs global population
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the world's population:";
	long long global_population;
	cin >> global_population;
	cout << endl << "Enter the population of some country:";
	long long country_population;
	cin >> country_population;
	double result = (country_population / (double)global_population) * 100;

	cout << endl << "The population of the country is " << result << "% of the world population.";
	system("pause");
}