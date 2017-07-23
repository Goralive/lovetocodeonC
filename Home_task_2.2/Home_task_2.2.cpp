// page 84

#include <iostream>
int farlong(int);
int meter(int);
int main()
{	
	using namespace std;
	int yard;
	cout << "Enter the farlong for convert: ";
	cin >> yard;
	int meters = farlong(yard);
	int meterios = meter(yard);
	cout << "Was entered = " << yard << " fallong, ";
	cout << "that is " << meters << " yards" << endl;
	cout << "or " << meterios << " meters" << endl;
	system("pause");
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



