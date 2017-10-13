// использование функции sqrt ()
#include <iostream>
#include <cmath>
int main()
{
	//using namespace std;
	
	double area;
	std::cout << "Enter the floor area, in the square feet, of your home: ";
	std::cin >> area;
	double side;
	side = sqrt(area);
	std::cout << "That's te equivalent of a square " << side << " feet to the side.\n" ;
	std::cout << "How fancinating!\n";
	
	system("pause");
	return 0;
}