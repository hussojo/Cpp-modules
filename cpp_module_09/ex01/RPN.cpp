#include "RPN.hpp"

float charToFloat(char c)
{
	return static_cast <float> (c - '0');
}

float operate(int a, int b, char c)
{
	if (c == '+')
		return (a + b);
	if (c == '-')
		return (b - a);
	if (c == '/')
		return (b / a);
	if (c == '*')
		return (a * b);
	else
		throw std::runtime_error("Error");
}

bool isOperator(char c)
{
	if (c == '+' || c == '-' || c == '/' || c == '*')
		return true;
	return false;
}

bool isOperand(char c)
{
	if (isdigit(c))
		return true;
	return false;
}

void printRpn(std::string input)
{
	int a, b;
	float res;
	std::stack<float> operands;
	std::string::iterator it;

	for (it = input.begin(); it < input.end(); it++)
	{
		if (isOperator(*it) == true && operands.size() >= 2) //"+", "-", "/", "*"
		{
			a = operands.top();
			operands.pop();
			b = operands.top();
			operands.pop();
			res = operate(a, b, *it);
			operands.push(res);
		}
		else if (isOperand(*it))
		{
			operands.push(charToFloat(*it));
		}
		else if (*it != ' ')
			throw std::runtime_error("Error");
	}
	res = operands.top();
	std::cout << res << std::endl;
}
 // The person being evaluated must explain why they chose to use this container and not another?
