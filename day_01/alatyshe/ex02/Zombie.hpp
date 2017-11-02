#ifndef ZOMBIE_H
# define ZOMBIE_H

# define RED				"\x1b[31m"
# define GREEN				"\x1b[32m"
# define YELLOW				"\x1b[33m"
# define BLUE				"\x1b[34m"
# define MAGENTA			"\x1b[35m"
# define CYAN				"\x1b[36m"
# define BLACK				"\x1b[37m"
# define RESET				"\x1b[0m"

#include <iostream>
#include <cstring>
#include <string>
#include <ctime>

class Zombie
{

private:
	std::string		_type;
	std::string		_name;

public:
	static std::string		names[10];
	static std::string		types[5];

	Zombie();
	~Zombie();
	void		announce();
	void		setZombieType(std::string type);
	void		setZombieName(std::string name);
};

#endif