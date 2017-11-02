#include "Pony.hpp"

void		ponyOnTheStack(int height, int weight, std::string country)
{
	std::cout << "===========================================================" << std::endl;
	std::cout << "ponyOnTheStack FUNCTION HAS JOINED" << std::endl << std::endl;
	Pony PonyOnStack = Pony(80, 150, "PonyOnStack"); // <-- allocates a Pony object on the stack

	std::cout << "ponyOnTheStack FUNCTION HAS LEAVED" << std::endl;
	return ;
}


void		ponyOnTheHeap(int height, int weight, std::string country)
{
	std::cout << "===========================================================" << std::endl;
	std::cout << "ponyOnTheHeap FUNCTION HAS JOINED" << std::endl << std::endl;
	Pony *PonyOnHeap = new Pony(85, 140, "PonyOnHeap"); // <-- allocates a Pony object on the heap

	delete PonyOnHeap;
	std::cout <<  "ponyOnTheHeap FUNCTION HAS LEAVED" << std::endl;

	return ;
}

int				main( void )
{
	ponyOnTheStack(140, 75, "PonyOnStack");

	ponyOnTheHeap(150, 85, "PonyOnHeap");

	return (0);
}
