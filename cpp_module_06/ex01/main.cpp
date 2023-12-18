#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main(void)
{
	Data num; // creating a data object
	num.val = 27;
	uintptr_t serialize = Serializer::serialize(&num);
	std::cout << &serialize << " Serialized" <<std::endl;
	Data *deserialize = Serializer::deserialize(serialize);
	std::cout << deserialize->val << " Deserialized" << std::endl;
	return (0);
}
