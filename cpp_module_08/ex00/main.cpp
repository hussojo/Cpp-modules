#include "EasyFind.hpp"

int main (void)
{
	try
	{
		std::vector<int> myVec;
		myVec.push_back(1);
		myVec.push_back(2);
		myVec.push_back(3);
		myVec.push_back(4);
		myVec.push_back(5);
		myVec.push_back(6);
		easyfind(myVec, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}