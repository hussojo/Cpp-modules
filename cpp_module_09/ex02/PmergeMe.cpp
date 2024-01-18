#include "PmergeMe.hpp"

void mergeSort(std::vector <unsigned int> &vector, unsigned int start, unsigned int mid, unsigned int end, std::vector<unsigned int> temp) // vector = A, B = temp
{
	unsigned int i = start;
	unsigned int j = mid + 1;

	while (i <= mid && j <= end)
	{
		if (vector[i] < vector[j])
		{
			temp.push_back(vector[i]);
			i++;
		}
		else
		{
			temp.push_back(vector[j]);
			j++;
		}
	}
	while (i <= mid)
	{
		temp.push_back(vector[i]);
		i++;
	}
	while (j <= end)
	{
		temp.push_back(vector[j]);
		j++;
	}
	for (unsigned int i = start; i <= end; i++)
		vector[i] = temp[i - start];
	for (unsigned int k = 0; k < temp.size(); k++)
		std::cout << "temp: " << temp[k] << std::endl;
}

void mergeSplit(std::vector<unsigned int> &vector, unsigned int start, unsigned int end)
{
	std::vector<unsigned int> temp;

	if (start >= end)
		return ;
	unsigned int mid = (start + end) / 2;
	mergeSplit(vector, start, mid);
	mergeSplit(vector, mid + 1, end);
	mergeSort(vector, start, mid, end, temp);
}

void mergeInsertion(std::vector<unsigned int> &vector, unsigned int start, unsigned int end) // need start and end?
{
	std::vector <std::pair <unsigned int, unsigned int> > pairs;
	std::vector <unsigned int> small;
	std::vector <unsigned int> large;
	unsigned int stray;

	if (vector.size() % 2) // check for uneven amount of elements
		stray = vector.back();
		vector.pop_back();
	for (unsigned int i = 0; i < vector.size(); i += 2) // create pairs
	{
		pairs.push_back(std::make_pair(vector[i], vector[i + 1]));
		// std::cout << "pair: " << pairs[i / 2].first << ", " << pairs[i / 2].second << std::endl;
	}
	for (unsigned int i = 0; i < pairs.size(); i++) // sort pairs -> first < second
	{
		if (pairs[i].first > pairs[i].second)
			std::swap(pairs[i].first, pairs[i].second);
		// std::cout << "sorted: " << pairs[i].first << ", " << pairs[i].second << std::endl;
		small.push_back(pairs[i].first);
		large.push_back(pairs[i].second);
		// std::cout << "lerge vector: " << large.back() << std::endl;
	}
	std::cout << "stray: " << stray << std::endl;
	mergeSplit(large, 0, large.size() - 1);

}

std::vector <unsigned int> parseInput(char **input)
{
	std::vector <unsigned int> vector;
	try
	{
		for (int i = 0; input[i]; i++)
		{
			if (input[i][0] == '-')
			{
				throw std::invalid_argument("Invalid argument");
				exit(1);
			}
			vector.push_back(std::stoi(input[i]));
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		exit(1);
	}
	return vector;
}

void sortAndPrint(char **input)
{
	// for (int i = 0; input[i]; i++)
	// 	std::cout << "input: " << input[i] << std::endl;
	{ //deque
		// std::deque <unsigned int> deque;
		// deque.sort();
		// deque.print();
	}
	{ //vector
		std::vector <unsigned int> vector = parseInput(input);
		// SORTING ALGORITHM!!!!
		mergeInsertion(vector, 0, vector.size() - 1);
		// std::vector<unsigned int>::iterator it;
		// for (it = vector.start(); it != vector.end(); it++)
		// 	std::cout << "vector: " << *it << std::endl;
	}
}
