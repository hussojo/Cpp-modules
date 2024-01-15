#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <cctype>
#include <climits>
#include <exception>

float operate(int a, int b, char c);
bool isOperator(char c);
bool isOperand(char c);
float charToFloat(char c);
void printRpn(std::string input);

#endif
