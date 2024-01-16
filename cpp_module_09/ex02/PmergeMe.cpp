#include "PmergeMe.hpp"

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
		std::cout << "pair: " << pairs[i / 2].first << ", " << pairs[i / 2].second << std::endl;
	}
	for (unsigned int i = 0; i < pairs.size(); i++) // sort pairs
	{
		if (pairs[i].first > pairs[i].second)
			std::swap(pairs[i].first, pairs[i].second);
		std::cout << "sorted: " << pairs[i].first << ", " << pairs[i].second << std::endl;
	}
	std::cout << "stray: " << stray << std::endl;

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
		// for (it = vector.begin(); it != vector.end(); it++)
		// 	std::cout << "vector: " << *it << std::endl;
	}
}
