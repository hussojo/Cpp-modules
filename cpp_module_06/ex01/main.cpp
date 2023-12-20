#include "Serializer.hpp"

int main(void)
{
	Data num; // creating a data object
	num.val = 42;
	uintptr_t serialize = Serializer::serialize(&num);
	std::cout << &serialize << " Serialized" <<std::endl;
	Data *deserialize = Serializer::deserialize(serialize);
	std::cout << deserialize->val << " Deserialized" << std::endl;
	return (0);
}
