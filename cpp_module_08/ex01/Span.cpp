#include "Span.hpp"

Span::Span(unsigned int n) : _size(n) {}

Span::Span(const Span &other) : _size(other._size) {}

Span &Span::operator=(const Span &other)
{
	_size = other._size;
	return *this;
}

Span::~Span() {}

void Span::addNumber(int i)
{
	if (myVec.size() >= _size)
		throw std::runtime_error("Span is full!");
	myVec.push_back(i);
}

unsigned int Span::shortestSpan()
{
	if (myVec.size() < 2)
		throw std::invalid_argument("Not enough elements in Span (one or less)");
	std::sort(myVec.begin(), myVec.end());
	int shortest = UINT8_MAX;
	for (unsigned int i = 1; i < this->_size; i++)
		shortest = std::min(shortest, myVec[i] - myVec[i - 1]);
	return shortest;
}

unsigned int Span::longestSpan()
{
	if (myVec.size() < 2)
		throw std::invalid_argument("Not enough elements in Span (one or less)");
	std::sort(myVec.begin(), myVec.end());
	return myVec[myVec.size() - 1] - myVec[0];
}

void Span::printMyVec(void)
{
	for (int num : myVec)
		std::cout << num << std::endl;
}

Span::Span() : _size(0) {}
