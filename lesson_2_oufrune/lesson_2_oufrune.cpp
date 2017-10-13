// definition of own function
#include <iostream>

//using namespace std;
void simon(int); 

int main()
{
	simon(3);
	std::cout << "Pick an intenger: ";
	int count;
	std::cin >> count;
	simon(count);
	std::cout << "Done!\n " ;
	
	std::cin.get();
	//system("pause");
	return 0;
}

void simon(int n)
{
	std::cout << "Simon says touch yours toes " << n << " times\n" ;
}