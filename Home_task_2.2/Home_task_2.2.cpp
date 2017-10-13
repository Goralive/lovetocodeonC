// page 84

#include <iostream>
int farlong(int);
int meter(int);
int main()
{	
	
	int yard;
	std::cout << "Enter the farlong for convert: ";
	std::cin >> yard;
	int meters = farlong(yard);
	int meterios = meter(yard);
	std::cout << "Was entered = " << yard << " fallong, ";
	std::cout << "that is " << meters << " yards" << std::endl;
	std::cout << "or " << meterios << " meters" << std::endl;
	std::cin.get();
	std::cin.get();
	return 0;
}

int farlong(int sts)
{
	return 220 * sts;
}
int meter (int mtr)
{
	return 201168 * mtr;
}



