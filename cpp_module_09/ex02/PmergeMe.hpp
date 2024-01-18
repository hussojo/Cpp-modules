#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <exception>
#include <algorithm>
#include <utility>

void mergeSort(std::vector <unsigned int> &vector, unsigned int start, unsigned int mid, unsigned int end, std::vector<unsigned int> temp);
void mergeSplit(std::vector<unsigned int> &large, unsigned int start, unsigned int end);
void binarySearchInsertion(std::vector<unsigned int> &large, unsigned int size, std::vector<unsigned int> small);
void mergeInsertion(std::vector<unsigned int> &vector, unsigned int start, unsigned int end);
void sortAndPrint(char ** input);

/*
- two containers, deque and vector
- templated sorting algorithm
*/

#endif
