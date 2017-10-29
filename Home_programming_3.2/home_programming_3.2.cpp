/* p.129
 Create small programme which asks your high in foot and inches and weight in pounds
 Programme must calculate body mass index BMI*/

#include <iostream>
int main()
{
	int pounds;
	double foot;
	
	std::cout << "Enter your weight in pounds\n";
	std::cin >> pounds;
	std::cout << "Enter your height in foot and inches\n";
	std::cin >> foot;
	double meters = (foot * 12) * 0.0254;
	double kilo = pounds / 2.2;
	std::cout << "Kilo = " << kilo << "\n";
	std::cout << "Meters = " << meters << "\n";
	std::cout << "Here is your Body mass index: \n" << kilo / std::pow(meters,2) ;
	
	std::cin.get();
	std::cin.get();
	

	return 0;
}