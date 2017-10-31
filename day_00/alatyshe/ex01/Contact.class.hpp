#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <cstring>
#include <string>

class Contact
{
public:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_adress;
	std::string email_adress;
	std::string phone_number;
	std::string birthday_day;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;

	Contact();
	~Contact();
	static int	getTotalContants(void);
	void 		counterInr();

private:
	static int _totalNbrs;
};

#endif