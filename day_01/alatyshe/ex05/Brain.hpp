#ifndef BRAIN_H
# define BRAIN_H

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
#include <sstream>

class Brain
{
private:
	std::string			_address;
public:
	Brain();
	~Brain();
	std::string identify() const;
};

#endif