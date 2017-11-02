#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	// std::cout << "Constructor Weapon called" << std::endl;
	this->_type = str;
	return ;
}

Weapon::~Weapon(void)
{
	// std::cout << "Destructor Weapon called" << std::endl;
	return ;
}

std::string const	Weapon::getType()
{
	return (this->_type);
}

void				Weapon::setType(std::string str)
{
	this->_type = str;
	return ;
}