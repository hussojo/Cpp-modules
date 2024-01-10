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

void BitcoinExchange::printResult(const std::string &inputFile)
{
	// validate data

	// 2011-01-03 | 4.2
	std::ifstream file(inputFile);
	if (!file)
		throw std::runtime_error("Error: Could not open input file.");

	std::string line;
	std::getline(file, line);
	size_t delimeter;
	while (getline(file, line))
	{
		// [key],[value] => map[key] = [value]
		delimeter = line.find("|");
		// if there is not | give an error message

		std::string date = line.substr(0, delimeter - 1);
		if (!exchangeRates[date])
		{
			std::cout << "hello there" << std::endl;
			if (validateDate(date) == false);
				throw std::runtime_error("Error: bad input => " + date);
			// find previous date
		}
		double value;
		try
		{
			value = std::stod(line.substr(delimeter + 2));
		}
		catch (const std::invalid_argument& e)
		{
			std::cerr << "Invalid argument: " << e.what() << '\n';
			continue;
		}
		catch (const std::out_of_range& e)
		{
			std::cerr << "Out of Range error: " << e.what() << '\n';
			continue;
		}
		if (value < 0)
			throw std::runtime_error("Error: not a positive number.");
		else if (value > 1000)
			throw std::runtime_error("Error: too large a number.");
		else
			std::cout << date << " => " << value << " = " << 0 << std::endl;
	}

}

void BitcoinExchange::setExchangeRates(const std::string &dataBase, std::map<std::string, double> &exchangeRates)
{
	std::ifstream file(dataBase);
	if (!file)
		throw std::runtime_error("Error: Could not open data file.");

	std::string line;
	std::getline(file, line);
	size_t delimeter;
	while (getline(file, line))
	{
		// [key],[value] => map[key] = [value]
		delimeter = line.find(',');
		std::string date = line.substr(0, delimeter);
		double rate = std::stod(line.substr(delimeter + 1)); // This we can trust!!!!!
		exchangeRates[date] = rate;
	}
	// getline error handling?
}

bool BitcoinExchange::validateDate(const std::string &date)
{
	std::istringstream ss(date);
	std::tm tm = {};
	ss >> std::get_time(&tm, "%Y-%m-%d");

	if (ss.fail())
	{
		// Invalid date
	}
	else
	{
		// Valid date
	}

	// 2011-01-03
	// int year, month, day;

	// size_t dateDelimeter1 = date.find('-');
	// year = std::stoi(date.substr(0, dateDelimeter1)); // stoi throws an error if non-numeric
	// size_t dateDelimeter2 = date.find('-', dateDelimeter1 + 1);
	// month = std::stoi(date.substr(dateDelimeter1 + 1, dateDelimeter2)); // stoi throws an error if non-numeric
	// day = std::stoi(date.substr(dateDelimeter2 + 1)); // stoi throws an error if non-numeric

	// check -
	// check that there is 2 -
	// check is digit
	// check leap year
	// check year > 0
	// check month > 0 && < 13
	// check days in month
	return false;
}


void test(unsigned char c){return std::isdigit(c) || c == '-';}

[](unsigned char c){return std::isdigit(c) || c == '-';}


