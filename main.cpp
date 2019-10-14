//#include <iostream>
//#include "Vehicle.h"
//
//int main()
//{
//	Vehicle car;
//
//	std::cout << "Car has " << car.GetNumberOfWheels() << " wheels!" << std::endl;
//	system("pause");
//}

#include <iostream>

//for (int i = 1; i <= number1; ++i) 
	//{
	//	sum1 += number1 % 10;
	//	number1 = number1 / 10;
	//}

	//for (int j = 1; j <= number2; ++j)
	//{
	//	sum2 += number2 % 10;
	//	number2 = number2 / 10;
	//}

int main()
{
	int number1 = 0;
	int number2 = 0;
	int sum1 = 0;
	int sum2 = 0;
	int broj1 = 0;
	int broj2 = 0;

	std::cout << "Upisi dva pozitivna cijela broja " << std::endl;
	std::cin >> number1 >> number2;

	broj1 = number1;
	broj2 = number2;

	if (number1 > 0 && number2 > 0)
	{
		while (number1 > 0)
		{
			sum1 += number1 % 10;
			number1 /= 10;
		}
		while (number2 > 0)
		{
			sum2 += number2 % 10;
			number2 /= 10;
		}
		if (sum1 == sum2)
		{
			std::cout << "Brojevi " << broj1 << " i " << broj2 << " imaju isti broj znamenki " << sum1 << std::endl;
		}
		else
		{
			std::cout << "Brojevi " << broj1 << " i " << broj2 << " nemaju isti broj znamenki " << std::endl;
		}
	}

	system("pause");
}