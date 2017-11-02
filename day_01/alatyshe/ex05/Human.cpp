#include "Human.hpp"
#include "Brain.hpp"

Human::Human(void)
{
	std::cout << "Constructor Human called" << std::endl;
	return ;
}

Human::~Human(void)
{
	std::cout << "Destructor Human called" << std::endl;
	return ;
}

std::string 		Human::identify(void) const
{
	return (this->_brain.identify());
}

Brain const			&Human::getBrain(void) const
{
	return (this->_brain);
}