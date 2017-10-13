#include <iostream>

int main()
{
	int a = 8 * 9 + 2;
	int b = 6 * 3 / 4;
	int c = 3 / 4 * 6;
	double d = 6.0 * 3 / 4;
	int e = 15 % 4;

	std::cout << "Here are the results:\n 8 * 9 + 2 = " << a ;
	std::cout <<"\n 8 * 9 + 2 = " << b << "\n";
	std::cout << " 6 * 3 / 4 = " << c << "\n";
	std::cout << " 6.0 * 3 / 4 = " << d << "\n";
	std::cout << " 15 % 4 = " << e << "\n";
	std::cin.get();

}