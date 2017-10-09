#include <iostream>
int main()
{
	double x1 = 3.5;
	double x2 = 8.5;
	int sum = x1 + x2;
	int post = int(x1) + int(x2);
	int pos = int(x1 + x2);

	std::cout << "x1 + x2 = " << sum << "\n";
	std::cout << "int(x1) + int(x2) = " << post << "\n";
	std::cout << "int(x1 + x2) = " << post << "\n";

	std::cin.get();
	return 0;
}