#include "ZombieHorde.hpp"
#include "Zombie.hpp"

std::string Zombie::types[5] = {
	"Ticker", "Chum" , "Fanatic", "Slimer", "Stinger"
};

std::string Zombie::names[10] = {
	"Ron", "Mort A. Mortis", "Damn Flanders", "Foos",
	"Jacob’s Stepstool", "Underworld Ted", "Jacon Bloodless",
	"Brain Daddy", "No More Lisa", "Shon"
};

Zombie::Zombie()
{
	std::cout << GREEN;
	std::cout << "Constructor Zombie called" << std::endl;
	this->_type = "NULL";
	this->_name = "NULL";
	std::cout << RESET;
	return ;
}

void		Zombie::setZombieName(std::string name)
{
	this->_name = name;
	return ;
}

void		Zombie::setZombieType(std::string type)
{
	this->_type = type;
	return ;
}

Zombie::~Zombie()
{
	std::cout << RED;
	std::cout << "Destructor Zombie called" << std::endl;
	std::cout << RESET;
	return ;
}

void		Zombie::announce()
{
	std::cout << '<';
	std::cout << this->_name << '(';
	std::cout << this->_type << ')';
	std::cout << "> Braiiiiiiinnnssss...";
	std::cout << std::endl;
}
