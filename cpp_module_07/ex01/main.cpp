#include "Iter.hpp"

template <typename T>
void printArr(T val)
{
	std::cout << val << std::endl;
}

template <typename T>
void addArr(T val)
{
	val += 1;
	std::cout << val << std::endl;
}

int main()
{
	std::cout << "---------- INT TESTS ----------" << std::endl;
	{
		int arr[] = {1, 2, 3, 4, 5};
		std::cout << "----- printArr:" << std::endl;
		iter(arr, 5, printArr<int>);
		std::cout << "----- addArr:" << std::endl;
		iter(arr, 5, addArr<int>);
	}
	std::cout << "---------- DOUBLE TESTS ----------" << std::endl;
	{
		double arr[] = {9.44, 8.22, 1.15};
		std::cout << "----- printArr:" << std::endl;
		iter(arr, 3, printArr<double>);
		std::cout << "----- addArr:" << std::endl;
		iter(arr, 3, addArr<double>);
	}
	std::cout << "---------- FLOAT TESTS ----------" << std::endl;
	{
		float arr[] = {3.446322f, 5.22221f, 1.15443f, 78.858585f};
		std::cout << "----- printArr:" << std::endl;
		iter(arr, 4, printArr<float>);
		std::cout << "----- addArr:" << std::endl;
		iter(arr, 4, addArr<float>);
	}
	std::cout << "---------- CHAR TESTS ----------" << std::endl;
	{
		char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k'};
		std::cout << "----- printArr:" << std::endl;
		iter(arr, 11, printArr<char>);
		std::cout << "----- addArr:" << std::endl;
		iter(arr, 11, addArr<char>);
	}
	return 0;
}

