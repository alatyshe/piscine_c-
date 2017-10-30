#include "Sample.class.hpp"

Sample::Sample( void )
{
	std::cout << "Constructor called" << std::endl;

	//this->publicFoo = 0;
	//std::cout << "this->publicFoo : " << this->publicFoo << std::endl;
	//this->_privateFoo = 0;
	//std::cout << "this->_privateFoo : " << this->_privateFoo << std::endl;

	//this->publicBar();
	//this->_privateBar();
	return ;
}


Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}


void		Sample::getFoo( void ) const
{
	std::cout << "this->_foo : " << this->_foo << std::endl;
	return ;
}

void		Sample::setFoo( int	v )
{
	if ( v >= 0)
		this->_foo = v;
	return ;
}