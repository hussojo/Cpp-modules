#include "BitcoinExchange.hpp"


int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./btc input_file" << std::endl;
		return (1);
	}

	std::string db = "data.csv";
	std::string input_file = av[1];
	BitcoinExchange btc(db);
	btc.printResult(input_file);

	return (0);
}
