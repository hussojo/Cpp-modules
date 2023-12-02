#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &other) : AMateria(other)
{
	*this = other;
}

Cure &Cure::operator=(const Cure &other)
{

	return *this;
}
