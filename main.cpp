#include <iostream>
#include <vector>
#include <string>
#include <math.h>

//logièki operatori
// == - ispitivanje jednakosti
// && - logièki operator AND
// || - logièki operator OR
// ^^ - logièki XOR
// < - operator LESS THAN
// > - operator GREATER THAN
// <= - operator LESS THAN OR EQUAL
// >= - operator GREATER THAN OR EQUAL
// != - different THAN

//namespace exercise

namespace machina
{
	void cout(const char* value)
	{
		std::cout << value << std::endl;;
	}
}

/*
object
|_object
	|_object
		|_object
*/

/* rješi zadatak
1
11
111
1111
11111
111111
1111111
*/

//int sum = 0;
//for (int val = 1; val <= 10; val++)
//{
//	std::cout << "Vrijednost val " << val << std::endl;;
//	sum += val;
//	std::cout << "Vrijednost brojeva " << sum << std::endl;;
//
//}
//std::cout << "Vrijednost brojeva od 1 do 10 je " << sum << std::endl;;

//int Stairs(int max)
//{
//	int sum = 0;
//	int var = 0;
//	int broj = 0;
//	while (var <= max)
//	{
//		
//		sum = broj * 10 + 1;
//		broj = pow(10, var);
//		std::cout << "Vrijednost broja --------- "<<broj << std::endl;;
//		var++;
//		std::cout << var << std::endl;;
//		std::cout << "Vrijednost sume je " << sum << std::endl;;
//		
//	}
//	std::cout << sum << std::endl;;
//	return sum;
//}




void PrintNumbers(int iterator, int count)
{
	if (iterator < count)
	{
		std::cout << iterator << std::endl;;
		++iterator;
		PrintNumbers(iterator, count);
	}
}

void FibonacciArray(int max, int count = 0, int previous = 0, int current = 1)
{
	if (count == 0)
	{
		std::cout << count << " : " << current << std::endl;;
	}
	if (count < max - 1)
	{
		int nextNumber = previous + current;
		std::cout << count + 1 << " : " << nextNumber << std::endl;;
		previous = current;
		++count;
		FibonacciArray(max, count, previous, nextNumber);
	}
}

void PrintMessage()
{
	std::cout << "Vrijednost numbera nije jednaka " << std::endl;;
	std::cout << "Ovo je poruka sa std namespace" << std::endl;;
}

int Sum(int numberOne, int numberTwo)
{
	int result = numberOne + numberTwo;
	std::cout << "Rezultat zbrajanja " << numberOne << " i " << numberTwo << " je " << numberOne + numberTwo << std::endl;;
	return result;
}

int Substract(int numberOne, int numberTwo)
{
	int result = numberOne - numberTwo;
	std::cout << "Rezultat oduzimanja " << numberOne << " i " << numberTwo << " je " << numberOne - numberTwo << std::endl;;
	return result;
}


int Divide(int numberOne, int numberTwo)
{
	if (numberTwo != 0)
	{
		std::cout << "Rezultat dijeljenja " << numberOne << " i " << numberTwo << " je " << numberOne / numberTwo << std::endl;;
		int result = numberOne / numberTwo;
		return result;
	}
	std::cout << "Ne može se dijeliti s nulom " << std::endl;;
	return -1;
}

int Multiply(int numberOne, int numberTwo)
{
	std::cout << "Rezultat množenja " << numberOne << " i " << numberTwo << " je " << numberOne * numberTwo << std::endl;;
	int result = numberOne * numberTwo;
	return result;
}

/*
   0    1   2    3
| 115 | 5 | 6 | 10 |
*/




int main()
{
	//int twoDimensionalArray[3][3] =
	//{	// y os
	//	{1, 5, 7}, //x os
	//	{8, 3, 9},
	//	{2, 4, 6}

	//};

	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j= 0; j < 3; j++)
	//	{
	//		std::cout << "[" << twoDimensionalArray[i][j] << "]";
	//	}
	//	std::cout << std::endl;;
	//}

	//int threeDimensionalArray[3][3][3] =
	//{	
	//	{
	//		{1, 5, 7}, 
	//		{8, 3, 9},
	//		{2, 4, 6}
	//	},
	//	{
	//		{10, 50, 70}, 
	//		{80, 30, 90},
	//		{20, 40, 60}
	//	},
	//	{
	//		{100, 500, 700}, 
	//		{800, 300, 900},
	//		{200, 400, 600}
	//	},

	//};

	//std::cout << threeDimensionalArray[1][2][0] << std::endl;;

	int squareMatrix [4][4] =
	{
		{  9, -2,  8,  2 }, 
		{ -6, -2, 10, -9 },
		{  4,  5,  6,  1 },
		{  5,  3,  4,  9 }
	};

	int leftDiagonal = 0;
	int rightDiagonal = 0;
	int size = 4;
	for (int i = 0; i < 4; i++)
	{
		leftDiagonal += squareMatrix[i][i];
		rightDiagonal += squareMatrix[--size][i]; //size - 1 - i
	}

	/*int rightDiagonal = 0;
	for (int j = 3; j >= 0; j--)
	{
		rightDiagonal += squareMatrix[j][j];
	}*/

	if (leftDiagonal == rightDiagonal)
	{
		std::cout << "Matrica je najljepsa " << std::endl;;
	}
	else
	{
		std::cout << "matrica je loša " << std::endl;;
	}

	machina::cout("Machina output string");
	/*std::cout << twoDimensionalArray[0][2] << std::endl;;*/
	std::cin.get();
}

