// p.129
// Create program wich ask height in inches and change it in feet and inches
#include <iostream>
int main()
{
	double heigh;
	std::cout << "Enter your height in inches and you will get it in foot and inches:  \n";
	std::cin >> heigh;
	double feet = heigh / 12;
	// listening 3.12
	std::cout << "Here is the result: " << feet << " feet" ;

	std::cin.get();
	std::cin.get();
	return 0;
}