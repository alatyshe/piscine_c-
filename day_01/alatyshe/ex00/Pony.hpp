#ifndef PONY_H
# define PONY_H

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

class Pony
{
private:
	int			_height;
	int			_weight;
	std::string _country;

public:
	Pony(int height, int weight, std::string country);
	~Pony();
	void	getPonyInfo();
};

#endif