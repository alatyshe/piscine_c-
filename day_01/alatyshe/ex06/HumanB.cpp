#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string str): _name(str)
{
	this->_weapon = NULL;
	// std::cout << "Constructor HumanA called" << std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	// std::cout << "Destructor HumanA called" << std::endl;
	return ;
}

void		HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return ;
}

void		HumanB::attack(void)
{
	if (this->_weapon)
	{
		std::cout << this->_name;
		std::cout << " attacks with his ";
		std::cout << this->_weapon->getType();
		std::cout << std::endl;
	}
	else
	{
		std::cout << "No weapon equipped!";
		std::cout << std::endl;
	}
}
