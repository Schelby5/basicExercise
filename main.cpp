#include <iostream>
#include <vector>
#include <string>

class Vector3
{
public:
	Vector3()
	{
		x = 0;
		y = 0;
		z = 0;
	}

	Vector3(int xPos, int yPos, int zPos)
	{
		x = xPos;
		y = yPos;
		z = zPos;
		floatingMember = 33.33f;
	}
	int x, y, z;

	~Vector3()
	{
		std::cout << "Unistio sam se!" << std::endl;
	}

	Vector3 operator+(Vector3 second)
	{
		Vector3 result;
		result.x = x + second.x;
		result.y = y + second.y;
		result.z = z + second.z;
		return result;
	}

	Vector3 operator-(Vector3 third)
	{
		Vector3 result2;
		result2.x = x - third.x;
		result2.y = y - third.y;
		result2.z = z - third.z;
		return result2;
	}

	Vector3 operator*(Vector3 fourth)
	{
		Vector3 result3;
		result3.x = x * fourth.x;
		result3.y = y * fourth.y;
		result3.z = z * fourth.z;
		return result3;
	}
	Vector3 operator/(Vector3 fifth)
	{
		Vector3 result4;
		result4.x = x / fifth.x;
		result4.y = y / fifth.y;
		result4.z = z / fifth.z;
		return result4;
	}

	bool operator==(Vector3 second)
	{
		if (x == second.x && y == second.y && z == second.z)
		{
			return true;
		}
		return false;
	}

	bool operator!=(Vector3 second)
	{
		if (x == second.x && y == second.y && z == second.z)
		{
			return false;
		}
		return true;
	}

	int SumOfCoordinates()
	{
		return x + y + z;
	}

	void Print()
	{
		std::cout << "[" << x << ", " << y << ", " << z << "]" << std::endl;
	}

	float GetFloatingMember()
	{
		return floatingMember;
	}
	//DZ:
	//Overloadat operators ++, --, *=, /=
	//overloadat cout i cin, operator << i operator >>

	friend std::ostream & operator << (std::ostream &output, const Vector3 &value)
	{
		output << "[" << value.x << ", " << value.y << ", " << value.z << "]";
		return output;
	}

	friend std::istream & operator >> (std::istream &input, Vector3 &value)
	{
		bool error = false;
		while (error != true)
		{
			std::cout << "Enter value X: ";
			if (!(input >> value.x))
			{
				error = false;
			}
			else
			{
				error = true;
			}
			std::cout << std::endl;
			//error = input.bad();
			input.clear();
			input.ignore(10000, '\n');
			//input.ignore(std::numeric_limits < std::streamsize>::max, '\n');
		}

		bool error2 = false;
		while (error2 != true)
		{
			std::cout << "Enter value Y: ";
			if (!(input >> value.y))
			{
				error2 = false;
			}
			else
			{
				error2 = true;
			}
			std::cout << std::endl;
			//error = input.bad();
			input.clear();
			input.ignore(10000, '\n');
			//input.ignore(std::numeric_limits < std::streamsize>::max, '\n');
		}

		bool error3 = false;
		while (error3 != true)
		{
			std::cout << "Enter value Z: ";
			if (!(input >> value.z))
			{
				error3 = false;
			}
			else
			{
				error3 = true;
			}
			std::cout << std::endl;
			//error = input.bad();
			input.clear();
			input.ignore(10000, '\n');
			//input.ignore(std::numeric_limits < std::streamsize>::max, '\n');
		}

		return input;
		/*input >> value.x >> value.y >> value.z;*/
	}

private:
	float floatingMember;
};


void iterate(int *arr) //ovdje int odreðuje da se poveæa za 4 bytea
{
	for (int i = 0; i < 3; i++)
	{
		std::cout << *arr << std::endl;
		arr++;
	}
	//std::cout << i << std::endl; - i is out of scope and no longer exists!
}

int main()
{
	int number = 10;
	int number2 = 3;
	int* ref = &number;
	int** doubleRef = &ref;

	float fNumber = 10.5f;
	float* fRef = &fNumber;
	*ref = 30;
	int& refference = number; //zapisana samo adresa od našeg numbera
	refference = number2;


	int* ptr = &number;
	std::cout << *ptr << std::endl;

	ptr = &number2;
	std::cout << *ptr << std::endl;

	Vector3 person = Vector3(10, 20, 30);
	std::cout << "Sum of person coordinates: " << person.SumOfCoordinates() << std::endl;
	std::cout << "Person's coordinate x: " << person.x << std::endl;
	std::cout << "Person's coordinate y: " << person.y << std::endl;
	std::cout << "Person's coordinate z: " << person.z << std::endl;

	std::cout << "Person's floatingMember value is: " << person.GetFloatingMember() << std::endl;


	void* personPtr = &person;

	std::cout << ref << std::endl;
	std::cout << ptr << std::endl;
	std::cout << *ref << std::endl;

	int arr[] = { 1, 7, 3 };
	iterate(arr);
	std::cout << "Double reference: " << std::endl;
	std::cout << "Double reference address: " << doubleRef << std::endl;
	std::cout << "Double reference value: " << *doubleRef << std::endl;
	std::cout << "Reference address: " << ref << std::endl;
	std::cout << "Referenece value: " << *ref << std::endl;
	std::cout << "Double reference refference value: " << **doubleRef << std::endl;

	{
		Vector3 position = Vector3(1, 2, 3);
	}
	std::cout << "Position vector je van scopea!" << std::endl;

	Vector3 playerPosition = Vector3(35, 28, 13);
	Vector3 playerTwoPosition = Vector3(100, 100, 100);

	Vector3 sum = playerPosition + playerTwoPosition;
	std::cout << "vrijednost sum vectora je: ";
	sum.Print();
	std::cout << std::endl;


	Vector3 substract = playerPosition - playerTwoPosition;
	std::cout << "vrijednost substract vectora je: ";
	substract.Print();
	std::cout << std::endl;


	Vector3 multiply = playerPosition * playerTwoPosition;
	std::cout << "vrijednost multiply vectora je: ";
	multiply.Print();
	std::cout << std::endl;

	Vector3 divide = playerPosition / playerTwoPosition;
	std::cout << "vrijednost divide vectora je: ";
	divide.Print();
	std::cout << std::endl;

	//Vector3 different = playerPosition == playerTwoPosition;
	//if(playerPosition == playerTwoPosition)
	//{
	//}
	//std::cout << "vrijednost razlicito je vectora je: ";
	//different.Print();
	//std::cout << std::endl;

	//Vector3 same = playerPosition != playerTwoPosition;
	//std::cout << "vrijednost razlicito je vectora je: ";
	//same.Print();
	//std::cout << std::endl;

	std::cin >> sum;
	std::cout << sum << std::endl; //omoguæiti æe da proradi ovaj kod

	system("pause");
}