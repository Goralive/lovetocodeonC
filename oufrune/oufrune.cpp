﻿// определение собственной функции
#include <iostream>
void simon (int);
using namespace std;

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