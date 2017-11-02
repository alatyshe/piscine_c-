#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string str, Weapon &weapon): _name(str)
{
	this->_weapon = &weapon;
	// std::cout << "Constructor HumanA called" << std::endl;
	return ;
}

HumanA::~HumanA(void)
{
	// std::cout << "Destructor HumanA called" << std::endl;
	return ;
}

void		HumanA::attack(void)
{
	std::cout << this->_name;
	std::cout << " attacks with his ";
	std::cout << this->_weapon->getType();
	std::cout << std::endl;

	return ;
}
