﻿// потеря точности при работе с float
#include <iostream>
int main()
{


	float a = 2.34E+22f;
	float b = a + 1.0F;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "b - a = " << b - a << std::endl;
	std::cin.get();

	return 0;
}