#include "ZombieEvent.hpp"
#include "Zombie.hpp"

void			randomChump(void)
{
	ZombieEvent		zombieEvent;
	Zombie			*zombie;

	zombieEvent.setZombieType(Zombie::types[rand() % 5]);
	zombie = zombieEvent.newZombie(Zombie::names[rand() % 10]);
	zombie->announce();
	delete zombie;
	return ;
}

int			main(void)
{
	ZombieEvent		zombieEvent;
	Zombie			*zombie;

	for (int i = 0; i < 12; ++i)
	{
		srand(time(0) - i * 3);
		randomChump();
	}
	std::cout << "============================================" << std::endl;

	std::cout << RED;
	std::cout << "============================================" << std::endl;
	std::cout << RESET;
	zombieEvent.setZombieType("Slimer");
	zombie = zombieEvent.newZombie("Ron");
	zombie->announce();
	delete zombie;
	std::cout << "============================================" << std::endl;
		
	std::cout << RED;
	std::cout << "============================================" << std::endl;
	std::cout << RESET;
	zombie = zombieEvent.newZombie("Damn Flanders");
	zombie->announce();
 	delete zombie;
 	std::cout << "============================================" << std::endl;
	
	std::cout << RED;
	std::cout << "============================================" << std::endl;
	std::cout << RESET;
	zombieEvent.setZombieType("Fanatic");
	zombie = zombieEvent.newZombie("Dvynokur");
	zombie->announce();
	delete zombie;
	std::cout << "============================================" << std::endl;

	while (1);
	return (0);
}
