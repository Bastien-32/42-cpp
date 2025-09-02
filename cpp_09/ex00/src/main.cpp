
#include "../include/BitcoinExchange.hpp"



int	main(int argc, char **argv)
{
	if (argc != 2 || std::string(argv[1]).empty())
	{
		std::cerr << "Usage : btc [file with values].txt" << std::endl;
		return (1);
	}

	try
	{
		BitcoinExchange	crypto;
		crypto.printDB();														// a supp avant rendu
		crypto.transformInput(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	
	return (0);
}