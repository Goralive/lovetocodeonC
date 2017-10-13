
#include <iostream>
int main()
{
	int chest = 42; 
	int waist = 0x42; 
	int inseam = 042; 

	std::cout << "Monsieur cuts a striking figure!" << std::endl;
	std::cout << "chest = " << chest << " (42 in decimal)" << std::endl;
	std::cout << "waist = " << waist << " (0x42 in hex)" << std::endl;
	std::cout << "inseam = " << inseam << " (042 in octal)" << std::endl;

	std::cin.get();

	return 0;
}