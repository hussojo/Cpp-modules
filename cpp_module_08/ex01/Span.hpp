#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <list>
#include <deque>
#include <iterator>
#include <string>
#include <iostream>
#include <exception>
#include <algorithm>
#include <climits>
#include <ctime>

class Span {
	public:
		Span(unsigned int n);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();

		void addNumber(int i);
		template <typename Iterator>
		void addNumbers(Iterator begin, Iterator end);

		unsigned int shortestSpan();
		unsigned int longestSpan();

		void printMyVec(void);

	private:
		Span();
		unsigned int _size;
		std::vector<int> myVec;
} ;

template <typename Iterator>
void Span::addNumbers( Iterator begin, Iterator end)
{
	if ((std::distance(begin, end)) >= _size)
		throw std::runtime_error("Span is too small!");
	this->myVec.insert(this->myVec.begin(), begin, end);
}

#endif
