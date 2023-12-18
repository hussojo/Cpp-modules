#include "Base.hpp"

//It prints the actual type of the object pointed to by p: "A", "B" or "C".
Base *Base::generate(void)
{
	return nullptr;
}

//It prints the actual type of the object pointed to by p: "A", "B" or "C".
void Base::identify(Base *p)
{
}

//It prints the actual type of the object pointed to by p: "A", "B" or "C".
//Using a pointer inside this function is forbidden.
void Base::identify(Base &p)
{
}
