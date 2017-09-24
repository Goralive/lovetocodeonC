#include <iostream>
int main()
{
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);

	float tree = 3; // int modify to float
	int guess = 3.9832; // float modify to int
	int debt = 7.2E12; // result didn't applicable in C++

	std::cout << "three = " << tree << "\n";
	std::cout << "guess = " << guess << "\n";
	std::cout << "debt = " << debt << "\n";

	std::cin.get();
	std::cin.get();

	return 0;
}