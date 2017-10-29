//p. 129 Programm which ask latitude in degree, minutes and seconds, after that shows latitude in decimal format 
#include <iostream>
int main()
{
	int degree;
	int minutes;
	int seconds;
	double latitude;
	
	
	std::cout << "Enter a latitude in degrees, minutes, and seconds:\n";
	std::cout << "First, enter the degrees: ";
	std::cin >> degree;

	std::cout << "Next, enter the minutes of arc: ";
	std::cin >> minutes;

	std::cout << "Finally, enter the second of arc: ";
	std::cin >> seconds;

// Finish it!!!!	latitude = 

	std::cout << degree << " degrees, " << minutes << " minutes," << seconds << " seconds = " << latitude << " degrees";

	

	std::cin.get();
	std::cin.get();

	return 0;
}