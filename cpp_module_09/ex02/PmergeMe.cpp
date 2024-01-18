#include "PmergeMe.hpp"

void mergeSort(std::vector <unsigned int> &vector, unsigned int start, unsigned int mid,
	unsigned int end, std::vector<unsigned int> temp)
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

void	binarySearchInsertion(std::vector<unsigned int> &large, unsigned int size,
	std::vector<unsigned int> small, unsigned int stray)
{
	for (std::vector<unsigned int>::iterator small_it = small.begin(); small_it != small.end(); ++small_it)
	{
		std::vector<unsigned int>::iterator insert_pos = std::lower_bound(large.begin(), large.end(), *small_it);
		large.insert(insert_pos, *small_it);
	}
	std::vector<unsigned int>::iterator insert_pos = std::lower_bound(large.begin(), large.end(), stray);
	large.insert(insert_pos, stray);
}

void mergeInsertion(std::vector<unsigned int> &vector, unsigned int start, unsigned int end) // need start and end?
{
	std::vector <std::pair <unsigned int, unsigned int> > pairs;
	std::vector <unsigned int> small;
	std::vector <unsigned int> large;
	unsigned int stray;

	if (vector.size() % 2) // check for uneven amount of elements
	{
		stray = vector.back();
		vector.pop_back();
	}
	for (unsigned int i = 0; i < vector.size(); i += 2) // create pairs
	{
		pairs.push_back(std::make_pair(vector[i], vector[i + 1]));
		std::cout << "pair: " << pairs[i / 2].first << ", " << pairs[i / 2].second << std::endl;
	}
	for (unsigned int i = 0; i < pairs.size(); i++) // sort pairs -> first < second
	{
		if (pairs[i].first > pairs[i].second)
			std::swap(pairs[i].first, pairs[i].second);
		// std::cout << "sorted: " << pairs[i].first << ", " << pairs[i].second << std::endl;
		small.push_back(pairs[i].first);
		large.push_back(pairs[i].second);
		// std::cout << "large vector: " << large.back() << std::endl;
	}
	// std::cout << "stray: " << stray << std::endl;
	mergeSplit(large, 0, large.size() - 1); // sort large
	std::cout << "large vector: ";
	for (unsigned int i = 0; i < large.size(); i++)
		std::cout << large[i] << " ";
	std::cout << std::endl;
	std::cout << "small vector: ";
	for (unsigned int i = 0; i < small.size(); i++)
		std::cout << small[i] << " ";
	std::cout << std::endl;
	// BINARY INSERTION
	binarySearchInsertion(large, large.size(), small, stray);
	// copy large to vector
	vector = large;
	// for (std::vector<unsigned int>::iterator it = large.begin(); it != large.end(); it++;)
	// 	vector[i] = large[it];
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
	std::cout << "input: " ;
	for (int i = 0; input[i]; i++)
		std::cout << input[i] << " ";
	std::cout << std::endl;
	{ //deque
		// std::deque <unsigned int> deque;
		// deque.sort();
		// deque.print();
	}
	{ //vector
		std::vector <unsigned int> vector = parseInput(input);
		// SORTING ALGORITHM!!!!
		mergeInsertion(vector, 0, vector.size() - 1);
		std::vector<unsigned int>::iterator it;
		std::cout << "vector: " ;
		for (it = vector.begin(); it != vector.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;

	}
}
