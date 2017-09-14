#include <iostream>
int main()
{
	char ch;

	std::cout << "Enter a character: " << std::endl;
	std::cin >> ch;
	std::cout << "Here is your character: " << ch << std::endl;
	
	std::cin.get();
	std::cin.get();

	return 0;

}