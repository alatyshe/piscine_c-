#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	std::cout << "Constructor ZombieHorde called" << std::endl;
	this->_zombies = new Zombie[N];
	this->_N = N;
	for (int i = 0; i < N; ++i)
	{
		this->_zombies[i].setZombieName(Zombie::names[rand() % 10]);
		this->_zombies[i].setZombieType(Zombie::types[rand() % 5]);
		this->_zombies[i].announce();
	}
	return ;
}

ZombieHorde::~ZombieHorde()
{
	std::cout << RED;
	std::cout << "Destructor ZombieHorde called" << std::endl;
	std::cout << RESET;
	
	delete [] this->_zombies;
	return ;
}
