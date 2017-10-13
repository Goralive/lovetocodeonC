//page 84
#include <iostream>
void simon(int);
void corben(int);

int main()
{
	
	simon(1);
	simon(1);
	corben(2);
	corben(2);
	
	std::cin.get();
	std::cin.get();

	return 0;
}

void simon(int n)
{
	std::cout << "Three blind mice" << std::endl ;
}

void corben(int b)
{
	std::cout << "See how they run" << std::endl;
}