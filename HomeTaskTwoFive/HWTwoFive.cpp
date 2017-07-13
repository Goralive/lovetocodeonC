// homework p84
// Hello github xD
#include <iostream>
using namespace std;
int calculation(int);
int main()
{	
	int celsium;
	cout << "Please enter a Celsium value: " ;
	cin >> celsium;
	int fahrenheit = calculation (celsium);
	cout << "Here the temperature in Celsium " << celsium;
	cout << " and here the temperature in Fahrenheit: " << fahrenheit << endl;

	system("pause");
	return 0;
}
int calculation (int c)
{
	
	return c  * 1.8 + 32;
}
