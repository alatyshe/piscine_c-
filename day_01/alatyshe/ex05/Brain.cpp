#include "Human.hpp"
#include "Brain.hpp"

Brain::Brain(void)
{
	std::ostringstream res;
	void *address;

	std::cout << "Constructor Brain called" << std::endl;
	address = static_cast<void *>(this);
	res << address;
	this->_address = res.str();
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Destructor Brain called" << std::endl;
	return ;
}

std::string 		Brain::identify(void) const
{
	return (this->_address);
}