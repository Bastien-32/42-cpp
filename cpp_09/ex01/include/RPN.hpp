#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <stdexcept>
#include <cstdlib>

class RPN
{
	private:

		std::stack<int>	_stack;

		void	makeOperation(char op);
		size_t	addNumbers(size_t i, const std::string &str);


	public:

		RPN();
		RPN(const RPN &other);
		RPN &operator=(const RPN &other);
		~RPN();

		void	calculate(const char *input);

};

#endif