#include "PmergeMe.hpp"

template <template <typename...> class Container>
void mergeSort(Container <unsigned int> &container, unsigned int start, unsigned int mid,
	unsigned int end, Container<unsigned int> temp)
{
	unsigned int i = start;
	unsigned int j = mid + 1;

	while (i <= mid && j <= end)
	{
		if (container[i] < container[j])
		{
			temp.push_back(container[i]);
			i++;
		}
		else
		{
			temp.push_back(container[j]);
			j++;
		}
	}
	while (i <= mid)
	{
		temp.push_back(container[i]);
		i++;
	}
	while (j <= end)
	{
		temp.push_back(container[j]);
		j++;
	}
	for (unsigned int i = start; i <= end; i++)
		container[i] = temp[i - start];
}

template <template <typename...> class Container>
void mergeSplit(Container<unsigned int> &container, unsigned int start, unsigned int end)
{
	Container<unsigned int> temp;

	if (start >= end)
		return ;
	unsigned int mid = (start + end) / 2;
	mergeSplit(container, start, mid);
	mergeSplit(container, mid + 1, end);
	mergeSort(container, start, mid, end, temp);
}

template <template <typename...> class Container>
void	binarySearchInsertion(Container<unsigned int> &large,	Container<unsigned int> small, unsigned int stray)
{
	for (typename Container<unsigned int>::iterator small_it = small.begin(); small_it != small.end(); ++small_it)
	{
		typename Container<unsigned int>::iterator insert_pos = std::lower_bound(large.begin(), large.end(), *small_it);
		large.insert(insert_pos, *small_it);
	}
	typename Container<unsigned int>::iterator insert_pos = std::lower_bound(large.begin(), large.end(), stray);
	large.insert(insert_pos, stray);
}

template <template <typename...> class Container>
void mergeInsertion(Container<unsigned int> &container)
{
	Container <std::pair <unsigned int, unsigned int> > pairs;
	Container <unsigned int> small;
	Container <unsigned int> large;
	unsigned int stray;

	if (container.size() % 2) // check for uneven amount of elements
	{
		stray = container.back();
		container.pop_back();
	}
	for (unsigned int i = 0; i < container.size(); i += 2) // create pairs
	{
		pairs.push_back(std::make_pair(container[i], container[i + 1]));
	}
	for (unsigned int i = 0; i < pairs.size(); i++) // sort pairs -> first < second
	{
		if (pairs[i].first > pairs[i].second)
			std::swap(pairs[i].first, pairs[i].second);
		small.push_back(pairs[i].first);
		large.push_back(pairs[i].second);
	}
	mergeSplit(large, 0, large.size() - 1); // sort large
	std::cout << std::endl;
	// BINARY INSERTION
	binarySearchInsertion(large, small, stray);
	container = large;
}

template <template <typename...> class Container>
Container<unsigned int> parseInput(char **input)
{
	Container<unsigned int> container;
	try
	{
		for (int i = 0; input[i]; i++)
		{
			if (input[i][0] == '-')
			{
				throw std::invalid_argument("Invalid argument");
				exit(1);
			}
			container.push_back(std::stoi(input[i]));
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		exit(1);
	}
	if (container.size() <= 1)
		throw std::runtime_error("Not enough arguments");
	return container;
}

void sortAndPrint(char **input)
{
	// std::cout << "input: " ;
	// for (int i = 0; input[i]; i++)
	// 	std::cout << input[i] << " ";
	// std::cout << std::endl;
	{ //vector
		std::vector <unsigned int> vector = parseInput<std::vector>(input);
		std::vector<unsigned int>::iterator it;
		std::cout << "Vector Before: " ;
		for (it = vector.begin(); it != vector.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
		mergeInsertion(vector);
		std::cout << "Vector After: \t" ;
		for (it = vector.begin(); it != vector.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;

	}
	{ //deque
		std::deque <unsigned int> deque = parseInput<std::deque>(input);
		std::deque<unsigned int>::iterator it;
		std::cout << "Deque Before: " ;
		for (it = deque.begin(); it != deque.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
		mergeInsertion(deque);
		std::cout << "Deque After: \t" ;
		for (it = deque.begin(); it != deque.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
	}
}

