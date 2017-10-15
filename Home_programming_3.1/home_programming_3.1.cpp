// p.129
// Create program wich ask height in inches and change it in feet and inches
#include <iostream>
int main()
{
	int heigh;
	std::cout << "Enter your height in inches and you will get it in foot and inches:  \n";
	std::cin >> heigh;
	int feet = heigh / 12;
	int inches = heigh % 12; // remainder of division
	
	std::cout << "Here is the result: " << feet << " feet " << inches << " inches" ;

	std::cin.get();
	std::cin.get();
	return 0;
}