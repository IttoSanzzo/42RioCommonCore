#include "RPN.hpp"
#include <fstream>
#include <sstream>
#include <iostream>

RPN::RPN()
{

}

int RPN::setCalculus(std::string &expression)
{
    std::string token;
    std::istringstream iss(expression);

    char op = '+';
    int result = 0;
    int index = 0;
    this->first_opperand = 0;
    this->second_opperand = 0;
    while (iss >> token)
    {
        if (isNumber(token))
        {
            stack.push(atoi(token.c_str()));
        }
        if ((op = isOperator(token)))
        {
            if (this->stack.size() < 2)
            {
                std::cerr << "Error" << std::endl;
                return 0;
            }
            this->first_opperand = stack.top();
            stack.pop();
            if (stack.size() > 0)
                this->second_opperand = stack.top();
            stack.pop();
            result = doOperation(op);
            stack.push(result);
        }
        index++;
    }
    std::cout << result << std::endl;
    return result;
}

int RPN::doOperation(char op)
{
    int a = this->first_opperand;
    int b = this->second_opperand;
    if (op == '+')
        return b + a;
    if (op == '-')
        return b - a;
    if (op == '/')
        return b / a;
    if (op == '*')
        return b * a;
    return 0;
}

const std::stack<int>& RPN::getStack() const
{
    return stack;
}

int RPN::isNumber(std::string a)
{
    for (unsigned int i = 0; i < a.size(); i++)
    {
        if (!isdigit(a[i]))
            return 0;
    }
    return 1;
}

char RPN::isOperator(std::string a)
{
    for (unsigned int i = 0; i < a.size(); i++)
    {
        if (a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/')
            return a[i];
    }
    return 0;
}

int RPN::getResult()
{
    return this->result;
}
