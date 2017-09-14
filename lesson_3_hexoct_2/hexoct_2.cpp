#include<iostream>
int main()
{
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	std::cout << "Monsieur cuts a striking figure!" << std::endl;
	std::cout << "chest = " << chest << " (42 in decimal)" << std::endl << std::hex;

	std::cout << "waist = " << waist << " (0x42 in hex)" << std::endl << std::oct;

	std::cout << "inseam = " << inseam << " (042 in octal)" << std::endl << std::hex;

	std::cin.get();
}