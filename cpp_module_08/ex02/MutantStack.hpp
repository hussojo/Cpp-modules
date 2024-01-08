#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <deque>
#include <stack>

template < typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack < T, Container > {
	public:
		MutantStack();
		MutantStack(const MutantStack &other);
		MutantStack &operator=(const MutantStack &other);
		~MutantStack();

		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;

		iterator begin();
		iterator end();

	private:
} ;

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{
	// std::cout << "Default constructor called" << std::endl;
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack &other)
{
	*this = other;
	return this;
}

template <typename T, typename Container>
MutantStack<T, Container> & MutantStack<T, Container>::operator=(const MutantStack &other)
{
	if (this != &other)
		std::stack<T, Container>::operator=(other);
	return *this;
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
	// std::cout << "Default constructor called" << std::endl;
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin()
{
	return (this->c.begin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end()
{
	return (this->c.end());
}

#endif
