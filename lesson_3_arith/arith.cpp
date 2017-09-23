// Some examples of Arithmetical operation's in C++

#include <iostream>
int main()
{
	float hats, heads;

	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield); // For display small nubmers in fixed formatting 
	
	std::cout << "Enter a number: ";
	std::cin >> hats;

	std::cout << "Enter another number: ";
	std::cin >> heads;

	std::cout << "Hats = " << hats << "; heads = " << heads << "\n";
	std::cout << "Hats + Heads = " << hats + heads << "\n";
	std::cout << "Hats - Heads = " << hats - heads << "\n";
	std::cout << "Hats * Heads = " << hats * heads << "\n";
	std::cout << "Hats / Heads = " << hats / heads << "\n";


	std::cin.get();
	std::cin.get();

	return 0;

}