#include<iostream>
int main()
{
	const int Lbs_per_stn = 14;
	int lbs;

	std::cout << "Enter your weight in pounds\n";
	std::cin >> lbs;

	int stone = lbs / Lbs_per_stn; // interger stones
	int pounds = lbs % Lbs_per_stn; // excess pounds

	std::cout << lbs << " pounds are " << stone << " stones, and " << pounds << " pound(s).\n";

	std::cin.get();
	std::cin.get();

	return 0;
}