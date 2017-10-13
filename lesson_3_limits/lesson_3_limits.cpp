#include <iostream>
#include <climits>
int main () 
{ 
	int n_int = INT_MAX;  // limits for each type? 
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	//long n_llong = LLONG_MAX;

	std::cout << "int is " << sizeof n_int << " bytes." << std :: endl;  // size of each type.
	std::cout << "short is " << sizeof n_short << " bytes." << std::endl;
	std::cout << "Long is " << sizeof n_long << " bytes." << std::endl;
	//std::cout << "Long long is " << sizeof n_long << " bytes." << std::endl;
	std::cout << std::endl;
	std::cout << "Max values: " << std::endl;  // max values
	std::cout << "int: " << n_int << std::endl;
	std::cout << "short " << n_short << std::endl;
	std::cout << "Long: " << n_long << std::endl;
	//std::cout << "Long Long: " << n_llong << std::endl;
	std::cout << std::endl;
	std::cout << "Minimum int value = " << INT_MIN << std::endl;
	std::cout << "Bits per byte =  " << CHAR_BIT << std::endl;
	
	
	std::cin.get();
	
	return 0;
}