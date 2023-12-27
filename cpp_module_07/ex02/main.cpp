#include "Array.hpp"

#define MAX_VAL 15

int main(int, char**)
{

	std::cout << "-------- creating array of specific size ---------" << std::endl;
	Array<int> numbers(MAX_VAL);
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand() % 50;
		numbers[i] = value;
	}
	for (int i = 0; i < MAX_VAL; i++)
	{
		std::cout << "numbers[" << i << "]: " << numbers[i] << std::endl;
	}
	std::cout << "-------- testing copy assigment constructor---------" << std::endl;
	Array<int> mirror = numbers;
	for (int i = 0; i < MAX_VAL; i++)
	{
		std::cout << "mirror[" << i << "]: " << mirror[i] << std::endl;
	}
	std::cout << "-------- testing copy constructor---------" << std::endl;
	Array<int> table(numbers);
	for (int i = 0; i < MAX_VAL; i++)
	{
		std::cout << "table[" << i << "]: " << table[i] << std::endl;
	}
	try
	{
		std::cout << "-------- creating empty array ---------" << std::endl;
		Array<char> letters;
		std::cout << letters[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "-------- trying to access out of bounds ---------" << std::endl;
		std::cout << numbers[15] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
