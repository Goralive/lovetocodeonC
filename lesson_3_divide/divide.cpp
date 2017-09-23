//Intergers divede 

#include <iostream>
int main()
{
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout << "Interger division 9/5 = ";
	std::cout << 9 / 5 << "\n" ;
	std::cout << "Floating-point division: 9.0 / 5.0 = ";
	std::cout << 9.0 / 5.0 << "\n";
	std::cout << "Mixed division: 9.0 / 5 = ";
	std::cout << 9.0 / 5 << "\n";
	std::cout << "double constants: le7/9.0 = ";
	std::cout << 1e7 / 9.0 << "\n";
	std::cout << "Float constants: le7f/9.0f = ";
	std::cout << 1.e7f / 9.0f << "\n";


	std::cin.get();

	return 0;
}