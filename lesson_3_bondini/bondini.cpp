#include<iostream>
int main()
{
	std::cout << "\aOperation \"HyperHype\" is now activated!\n";
	std::cout << "Enter you agent code:________ \b\b\b\b\b\b\b\b";
	
	long code;
	std::cin >> code;

	std::cout << "\aYou entered " << code << " \npip....pip....pip\n";
	std::cout << "\aYour code verified! Proceed with a plan Barbarosa " << code << std::endl;

	std::cin.get();
	std::cin.get();

	return 0;

}