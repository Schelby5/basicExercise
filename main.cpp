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
#include <string>

/* napisati funkciju koaj primi jedan pozitivan broj,
u slucaju da je broj djeljiv sa 3 neka vrati fizz
u slucaju da je broj djeljiv sa 5 neka vrati buzz
u slucaju da je broj djeljiv sa 3 i 5 neka vrati fizz-buzz
u slucaju da nije djeljiv sa nijednim neka vrati " " (prazan string)*/

std::string myFoo(const int& i)
{
	if (i % 3 == 0)
	{
		if (i % 5 == 0)
		{
			return "fizz-buzz";
		}
		return "fizz";
	}
	if (i % 5 == 0)
	{
		return "buzz";
	}
	return " ";
}

void  function(int number)
{
	if (number % 3 == 0 && number % 5 == 0)
	{
		std::cout << "fizz-buzz" << std::endl;
	}
	else if (number % 3 == 0)
	{
		std::cout << "fizz" << std::endl;
	}
	else if (number % 5 == 0)
	{
		std::cout << "buzz" << std::endl;
	}
	else
	{
		std::cout << " " << std::endl;
	}
}

int main()
{
	/*function(6);*/
	int i = 0;
	std::cin >> i;
	std::cout << myFoo(i) << std::endl;
	system("pause");
}