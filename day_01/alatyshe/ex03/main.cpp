#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int			main(void)
{
	ZombieHorde	*hordesHeap;

	std::cout << CYAN;
	std::cout << "============================================" << std::endl;
	std::cout << RESET;
	
	ZombieHorde	hordesStack(12);

	std::cout << CYAN;
	std::cout << "============================================" << std::endl;
	std::cout << RESET;
	
	hordesHeap = new ZombieHorde(12);

	std::cout << CYAN;
	std::cout << "============================================" << std::endl;
	std::cout << RESET;

	delete hordesHeap;

	std::cout << CYAN;
	std::cout << "============================================" << std::endl;
	std::cout << RESET;
	
	hordesHeap = NULL;
	
	return (0);
}
