#ifndef MYCLASS_HPP
# define MYCLASS_HPP

class MyClass
{

	private:

		// if needed a variable int		_value;
		// if neededa fct void fct( std::string const x, ... );

	public:

		MyClass( void );
		MyClass( const MyClass& other );
		MyClass&	operator=( const MyClass& other );
		~MyClass( void );

};

#endif