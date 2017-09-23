﻿#include <iostream>
int main()
{
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield); //  fixed formatting 
	float tub = 10.0 / 3.0;
	double mint = 10.0 / 3.0;
	const float million = 1.0e6;
	
	std::cout << "tub = " << tub;
	std::cout << ", a million tubs = " << million * tub << std::endl;
	std::cout << "And ten million tubs = " << 10 * million * tub << std::endl;
	
	std::cout << "mint = " << mint << " and a million mints = ";
	std::cout << million * mint << std::endl;

	std::cin.get();
	
	return 0;
}