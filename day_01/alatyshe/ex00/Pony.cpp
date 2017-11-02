#include "Pony.hpp"

Pony::Pony(int height, int weight, std::string country)
{
	std::cout << GREEN;
	this->_height = height;
	this->_weight = weight;
	this->_country = country;
	std::cout << "Pony Has Created" << std::endl;
	std::cout << "Height\t: " << height << "cm" << std::endl;
	std::cout << "Weight\t: " << weight << "kg" << std::endl;
	std::cout << "Country\t: " << country << std::endl;
	std::cout << RESET;
	return ;
}

Pony::~Pony()
{
	std::cout << RED;
	std::cout << "[" << this->_country << "] Has DELETED" << std::endl;
	std::cout << RESET;
	return ;
}

void	Pony::getPonyInfo()
{
	std::cout << "Pony Info:" << std::endl;
	std::cout << "Height\t: " << this->_height << "cm" << std::endl;
	std::cout << "Weight\t: " << this->_weight << "kg" << std::endl;
	std::cout << "Country\t: " << this->_country << std::endl << std::endl;
}