// Forcing change type
#include <iostream>
int main()
{
	int auks, bats, coots;

	// double union and conversion to int

	auks = 19.99 + 11.99;
	bats = (int) 19.99 + (int) 11.99; // old syntax C
	coots = int(19.99) + int(11.99); // new syntax C++

	std::cout << "auks = " << auks << "\nbats = " << bats << "\ncoots = " << coots << "\n";

	char ch = 'Z';

	std::cout << "The code for " << ch << " is "; // Char output
	
	std::cout << int {ch} << "\n"; // int output
	std::cout << "Yes, the code is " << static_cast<int>(ch) << "\n";


	std::cin.get();

	return 0;
}