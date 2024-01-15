#include <iostream>
#include <stack>
#include <cctype>
#include <climits>

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
			std::cout << "a = " << a << std::endl;
			operands.pop();
			b = operands.top();
			std::cout << "b = " << a << std::endl;
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
	std::cout << "result is: " << res << std::endl;
}

int main(int ac, char **av)
{
	if (ac != 2)
		std::cerr << "Usage: ./RPN \"inverted Polish mathematical expression\"" << std::endl;
	try
	{
		printRpn(av[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
