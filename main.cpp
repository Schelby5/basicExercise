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

int main()
{
	int i = 1;
	for (; ; i++)
	{
		bool ivanovaCigareta = true;
		for (int j = 1; j <= 4; ++j)
		{
			if (i % j != 0)
			{
				ivanovaCigareta = false;
				break;
			}
		}
		if (ivanovaCigareta == true)
		{
			std::cout << i << std::endl;
			break;
		}
	}
}