#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>

class BitcoinExchange
{
    public: 
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& src);
        BitcoinExchange &operator = (const BitcoinExchange &src);
        void getExchange(std::ifstream &f);
        void fill_data(const char * path);
        char * file_path;
        int checkValue(double value);
        int checkLine(std::string line);
        int checkKey(std::string key);

    private:
        std::map<std::string, double> database;
};

#endif
