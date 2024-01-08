#include "EasyFind.hpp"

int main(void) {
	std::cout << "----------VECTOR----------" << std::endl;
	std::vector<int> vec;
	for (int i = 0; i < 1000; i++) {
		vec.push_back(i);
	}
	try {
		easyfind(vec, 42);
		easyfind(vec, 172);
		// easyfind(vec, 2345);
		// easyfind(vec, -42);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "----------DEQUE----------" << std::endl;
	std::deque<int> deq;
	for (int i = 0; i < 1000; i++) {
		if (i % 2 == 0)
			deq.push_back(i);
		else
			deq.push_front(i);
	}
	try {
		easyfind(deq, 42);
		easyfind(deq, 172);
		// easyfind(deq, 2345);
		// // easyfind(deq, -1);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "----------LIST----------" << std::endl;
	std::list<int> li;
	for (int i = 0; i < 1000; i++) {
		if (i % 3 == 0)
			li.insert(li.end(), i);
		else
			li.insert(li.begin(), i);
	}
	try {
		easyfind(li, 42);
		easyfind(li, 172);
		// easyfind(li, 2345);
		// easyfind(li, -1);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
