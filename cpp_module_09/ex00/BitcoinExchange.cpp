#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string &dataBase) // "data.csv"
{
	setExchangeRates(dataBase, exchangeRates);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	// TODO: insert return statement here
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::printResult(const std::string &input)
{

}

void BitcoinExchange::setExchangeRates(const std::string dataBase, std::map<std::string, double> &exchangeRates)
{
	std::ifstream file(dataBase);
	try { file.open(dataBase); } catch (std::exception &e)
		{ std::cout << "Error: failed to read data.csv" << std::endl; }

	std::string line;
	getline(file, line);
	size_t delimeter;
	while (getline(file, line))
	{
		// [key],[value] => map[key] = [value]
		delimeter = line.find(',');
		std::string date = line.substr(0, delimeter);
		std::cout << date << std::endl;
	}
}
