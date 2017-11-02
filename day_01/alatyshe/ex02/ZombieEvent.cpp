#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	std::cout << GREEN;
	std::cout << "Constructor ZombieEvent called" << std::endl;
	this->_type = "NULL";
	std::cout << RESET;
	return ;
}

ZombieEvent::~ZombieEvent()
{
	std::cout << RED;
	std::cout << "Destructor ZombieEvent called" << std::endl;
	std::cout << RESET;
	return ;
}

void			ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
	return ;
}

Zombie*			ZombieEvent::newZombie(std::string name)
{
	Zombie		*result;

	result = new Zombie();
	result->setZombieType(this->_type);
	result->setZombieName(name);
	return (result);
}
