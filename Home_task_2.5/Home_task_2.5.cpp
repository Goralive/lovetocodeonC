// homework p84
// Hello github xD
#include <iostream>

int calculation(int);
int main()
{	
	int celsium;
	std::cout << "Please enter a Celsium value: " ;
	std::cin >> celsium;
	int fahrenheit = calculation (celsium);
	std::cout << "Here the temperature in Celsium " << celsium;
	std::cout << " and here the temperature in Fahrenheit: " << fahrenheit << std::endl;

	std::cin.get();
	std::cin.get();

	return 0;
}
int calculation (int c)
{
	
	return c  * 1.8 + 32;
}
