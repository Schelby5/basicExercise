#include <iostream>

typedef unsigned int uint32;

int main()
{
	unsigned int arr[] = { 10, 17, 13, 15 };
	int size = sizeof(arr) / sizeof(uint32);
	int number = 0;

	for (int i = 0; i < size; i++)
	{
		number = arr[i];
		if (number > 1 && number % 2 != 0 && number % 3 != 0 && number % 5 != 0 && number % 7 != 0 && number % 11 != 0)
		{
			std::cout << "Prosti broj je: " << number << std::endl;
			break;
		}
	}

	system("pause");
}