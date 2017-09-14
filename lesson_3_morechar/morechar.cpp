#include <iostream>
int main()
{
	
	char ch;
	std::cout << "Please enter the character: " << std::endl;
	std::cin >> ch; // Присваевает ch код ASCII симовола который введем
	int i = ch;		// переводим в его в инт
	std::cout << "Here the ASCII code for " << ch << " is " << i << std::endl;

	std::cout << "Adding one to the character code: " << std::endl;
	ch = ch++;
	i = ch;
	std::cout << "The ASCII code for " << ch << " is " << i << std::endl;
	std::cout << "Displaying char ch using cout.put: ";
	std::cout.put(ch);
	std::cout.put('!');


	std::cin.get();
	std::cin.get();

	return 0;
}
