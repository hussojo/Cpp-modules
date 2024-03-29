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
void	binarySearchInsertion(Container<unsigned int> &large, Container<unsigned int> small, int stray)
{
	for (typename Container<unsigned int>::iterator small_it = small.begin(); small_it != small.end(); ++small_it)
	{
		typename Container<unsigned int>::iterator insert_pos = std::lower_bound(large.begin(), large.end(), *small_it);
		large.insert(insert_pos, *small_it);
	}
	if (stray != -1)
	{
		typename Container<unsigned int>::iterator insert_pos = std::lower_bound(large.begin(), large.end(), stray);
		large.insert(insert_pos, stray);
	}
}

template <template <typename...> class Container>
void mergeInsertion(Container<unsigned int> &container)
{
	Container <std::pair <unsigned int, unsigned int> > pairs;
	Container <unsigned int> small;
	Container <unsigned int> large;
	int stray = -1;

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
		std::cerr << e.what() << std::endl;
		exit(1);
	}
	if (container.size() <= 1)
		throw std::runtime_error("Not enough arguments");
	return container;
}

template <template <typename...> class Container>
void print(Container<unsigned int> container)
{
	for (typename Container<unsigned int>::iterator it = container.begin(); it != container.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void sortAndPrint(char **input)
{
	{ //vector
		std::vector <unsigned int> vector = parseInput<std::vector>(input);
		std::cout << "Before: " << std::flush;
		print(vector);
		std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();
		std::vector<unsigned int>::iterator it;
		mergeInsertion(vector);
		std::chrono::high_resolution_clock::time_point stop = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> time_span = std::chrono::duration_cast<std::chrono::duration<double> >(stop - start);
		std::cout << "After: \t" << std::flush;
		print(vector);
		std::cout << "Time to process a range of " << vector.size() << " elements with std::vector: "
			<< std::fixed << std::setprecision(6) << time_span.count() << " seconds" << std::endl;
	}
	{ //deque
		std::deque <unsigned int> deque = parseInput<std::deque>(input);
		std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();
		std::deque<unsigned int>::iterator it;
		mergeInsertion(deque);
		std::chrono::high_resolution_clock::time_point stop = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> time_span = std::chrono::duration_cast<std::chrono::duration<double> >(stop - start);
		std::cout << "Time to process a range of " << deque.size() << " elements with std::deque: "
			<< std::fixed << std::setprecision(6) << time_span.count() << " seconds" << std::endl;
	}
}

