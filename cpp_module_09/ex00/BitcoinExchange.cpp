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
	return *this;
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
	// if (file.fail())
	// 	std::cout << "FAIL" << std::endl;
	if (!file)
		std::cout << "FAIL" << std::endl;

	std::string line;
	std::getline(file, line);
	if (file.fail())
		std::cout << "FAIL2" << std::endl;
	size_t delimeter;
	while (getline(file, line))
	{
		// [key],[value] => map[key] = [value]
		delimeter = line.find(',');
		std::string date = line.substr(0, delimeter);
		// std::cout << date << std::endl;
		double rate = std::stod(line.substr(delimeter + 1));
		// std::cout << rate << std::endl;
		exchangeRates[date] = rate;
		// std::cout << exchangeRates[d/ate] << std::endl;
	}
}
