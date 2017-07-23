// преобразования стоуны в фунты
#include <iostream>
int stonestolb(int);
int main()
{
	using namespace std;
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = stonestolb(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds. " << endl;
	system("pause");
	return 0;
	
}
int stonestolb (int sts)
{
	return 14 * sts;
}