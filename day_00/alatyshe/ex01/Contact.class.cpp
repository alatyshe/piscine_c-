#include "Contact.class.hpp"

			Contact::Contact()
{
	return ;
}


			Contact::~Contact(void)
{
	Contact::_totalNbrs--;
	return ;
}

int			Contact::getTotalContants()
{
	return Contact::_totalNbrs;
}

void		Contact::counterInr()
{
	Contact::_totalNbrs += 1;
}

int		Contact::_totalNbrs = 0;