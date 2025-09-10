#include "../include/RPN.hpp"

RPN::RPN() :
	_stack()
{}

RPN::RPN(const RPN &other) :
	_stack(other._stack)
{}

RPN &RPN::operator=(const RPN &other)
{
	if (this != &other)
		_stack = other._stack;
	return (*this);
}

RPN::~RPN()
{}

void	RPN::makeOperation(char op)
{
	if (_stack.size() < 2)
		throw std::runtime_error("Error");

	int	top1 = _stack.top();
	_stack.pop();
	int	top2 = _stack.top();
	_stack.pop();
	int	result;

	switch (op)
	{
		case '+':
			result = top2 + top1;
			break;
		case '-':
			result = top2 - top1;
			break;
		case '*':
			result = top2 * top1;
			break;
		case '/':
			if (top1 == 0)
				throw std::runtime_error("Error");
			result = top2 / top1;
			break;
		default:
			throw std::runtime_error("Error");
	}
	_stack.push(result);
}

size_t RPN::addNumbers(size_t i, const std::string &str)
{
	int length = 0;
	while (str[i + length] && str[i + length] != ' ')
		length++;
	std::string numStr = str.substr(i, length);
	int number = std::atoi(numStr.c_str());
	if (number < 0 || number > 9)
		throw std::runtime_error("Error: Numbers must be digit (0-9).");
	/* if (number < -9 || number > 9)
		throw std::runtime_error("Error: Numbers must be digit between -9 and 9.");
	if (number > 9)
		// throw std::runtime_error("Error: Numbers must be digit < 10."); */
	_stack.push(number);
	return (length - 1);
}

void	RPN::calculate(const char *input)
{
	std::string str(input);
	for (size_t i = 0; i < str.size(); i++)
	{
		if (str[i] == ' ')
			continue;
		else if (str[i] >= '0' && str[i] <= '9'
			&& (str[i + 1] == ' ' || (i == str.size() - 1)))
			_stack.push(str[i] - '0');
		else if (((str[i] >= '0' && str[i] <= '9') || str[i] == '-' || str[i] == '+')
			&& (str[i + 1] >= '0' && str[i + 1] <= '9'))
			i += addNumbers(i, str);
		else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
			makeOperation(str[i]);
		else
			throw std::runtime_error("Error");
	}
	if (_stack.size() != 1)
		throw std::runtime_error("Error");
	std::cout << _stack.top() << std::endl;
}