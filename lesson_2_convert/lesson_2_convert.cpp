// Transformation from stone to pounds
#include <iostream>
int stonestolb(int);
int main()
{
	//using namespace std;
	int stone;
	std::cout << "Enter the weight in stone: ";
	std::cin >> stone;
	int pounds = stonestolb(stone);
	std::cout << stone << " stone = ";
	std::cout << pounds << " pounds.\n ";
	
	std::cin.get();
	std::cin.get();


	return 0;
	
}
int stonestolb (int sts)
{
	return 14 * sts;
}