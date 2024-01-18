#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <exception>
#include <algorithm>
#include <utility>
#include <chrono>
#include <iomanip>

template <template <typename...> class Container>
void mergeSort(Container <unsigned int> &container, unsigned int start, unsigned int mid,
	unsigned int end, Container<unsigned int> temp);
template <template <typename...> class Container>
void mergeSplit(Container<unsigned int> &container, unsigned int start, unsigned int end);
template <template <typename...> class Container>
void	binarySearchInsertion(Container<unsigned int> &large,	Container<unsigned int> small, unsigned int stray);
template <template <typename...> class Container>
void mergeInsertion(Container<unsigned int> &container);
template <template <typename...> class Container> Container<unsigned int> parseInput(char **input);
template <template <typename ...> class Container> void print(Container<unsigned int> container);
void sortAndPrint(char **input);

#endif
