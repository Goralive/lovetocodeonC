//p.84
#include <iostream>

double calculation (double);
int main ()
{
	double years;
	std::cout << "Enter the number of light years: ";
	std::cin >> years;
	double astranomical = calculation(years);
	std::cout << years << " light years = " << astranomical << " astronomical units" << std::endl;
	std::cin.get();
	std::cin.get();
}

double calculation (double c) 
{
	return c * 63240;
}