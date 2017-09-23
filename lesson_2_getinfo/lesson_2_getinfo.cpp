//Data load and data out (C++ input, C++ output)
#include <iostream>

int main () 
{
	//using namespace std;
	int carrots;
	std::cout << "How many carrots do you have?\n" ;
	std::cin >> carrots;
	std::cout << "Here are two more " ;
	carrots = carrots + 2;
	std::cout << "Now you have " << carrots << " carrots.\n" ;
	std::cin.get();
	std::cin.get();
	
	
	return 0;
}