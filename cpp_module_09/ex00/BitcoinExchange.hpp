#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream> // tsekka naa
#include <string>
#include <sstream>
#include <fstream>
#include <map>
#include <exception>

class BitcoinExchange {
	public:
		BitcoinExchange(const std::string &dataBase);
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
		~BitcoinExchange();

		void printResult(const std::string &inputFile);

	private:
		// BitcoinExchange();
		std::map <std::string, double> exchangeRates;
		void setExchangeRates(const std::string &dataBase, std::map <std::string, double> &exchangeRates);
		bool validateDate(const std::string &date);
} ;

#endif
