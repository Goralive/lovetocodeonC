// определение собственной функции
#include <iostream>

using namespace std;
void simon(int); 

int main()
{
	simon(3);
	cout << "Pick an intenger: ";
	int count;
	cin >> count;
	simon(count);
	cout << "Done! " << endl;
	system("pause");
	return 0;
}

void simon(int n)
{
	cout << "Simon says touch yours toes " << n << " times" << endl;
}