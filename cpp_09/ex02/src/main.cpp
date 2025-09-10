#include "../include/PmergeMe.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cerr << "Error" << std::endl;
		return (1);
	}

	PmergeMe pmergeMe;
	try
	{
		std::cout << "Parsing input..." << std::endl;
		pmergeMe.parse(argv, argc);
		std::cout << "Display container before..." << std::endl;
		pmergeMe.displayContainer(pmergeMe.getVector());
		pmergeMe.displayContainer(pmergeMe.getDeque());
		pmergeMe.sortVector();
/* 		pmergeMe.sortDeque();*/
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}