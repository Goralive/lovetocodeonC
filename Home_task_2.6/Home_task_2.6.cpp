//p.84
#include <iostream>
using namespace std;
double calculation (double);
int main ()
{
	double years;
	cout << "Enter the number of light years: ";
	cin >> years;
	double astranomical = calculation(years);
	cout << years << " light years = " << astranomical << " astronomical units" << endl;
	system("pause");
}

double calculation (double c) 
{
	return c * 63240;
}