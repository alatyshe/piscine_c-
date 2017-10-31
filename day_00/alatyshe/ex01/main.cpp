#include "Contact.class.hpp"

void				print_full_info(Contact contacts)
{
	std::cout << "First Name : ";
	std::cout << contacts.first_name << std::endl;

	std::cout << "Last Name : ";
	std::cout << contacts.last_name << std::endl;

	std::cout << "Nickname : ";
	std::cout << contacts.nickname << std::endl;

	std::cout << "Login : ";
	std::cout << contacts.login << std::endl;

	std::cout << "Postal Address : ";
	std::cout << contacts.postal_adress << std::endl;

	std::cout << "Email Address : ";
	std::cout << contacts.email_adress << std::endl;

	std::cout << "Phone Number : ";
	std::cout << contacts.phone_number << std::endl;

	std::cout << "Birthday Date : ";
	std::cout << contacts.birthday_day << std::endl;

	std::cout << "Favorite Meal : ";
	std::cout << contacts.favorite_meal << std::endl;

	std::cout << "Underwear Color : ";
	std::cout << contacts.underwear_color << std::endl;

	std::cout << "Darkest Secret : ";
	std::cout << contacts.darkest_secret << std::endl;
}

void				add_func(Contact *contacts, int num)
{
	std::cout << "First Name : ";
	std::cin >> contacts[num].first_name;
	if (std::cin.eof())
		return ;
	std::cout << "Last Name : ";
	std::cin >> contacts[num].last_name;
	if (std::cin.eof())
		return ;
	std::cout << "Nickname : ";
	std::cin >> contacts[num].nickname;
	if (std::cin.eof())
		return ;
	std::cout << "Login : ";
	std::cin >> contacts[num].login;
	if (std::cin.eof())
		return ;
	std::cout << "Postal Address : ";
	std::cin >> contacts[num].postal_adress;
	if (std::cin.eof())
		return ;
	std::cout << "Email Address : ";
	std::cin >> contacts[num].email_adress;
	if (std::cin.eof())
		return ;
	std::cout << "Phone Number : ";
	std::cin >> contacts[num].phone_number;
	if (std::cin.eof())
		return ;
	std::cout << "Birthday Date : ";
	std::cin >> contacts[num].birthday_day;
	if (std::cin.eof())
		return ;
	std::cout << "Favorite Meal : ";
	std::cin >> contacts[num].favorite_meal;
	if (std::cin.eof())
		return ;
	std::cout << "Underwear Color : ";
	std::cin >> contacts[num].underwear_color;
	if (std::cin.eof())
		return ;
	std::cout << "Darkest Secret : ";
	std::cin >> contacts[num].darkest_secret;
	if (std::cin.eof())
		return ;
	contacts->counterInr();
}

void				print_ten_symbols(std::string string)
{
	if (string.length() > 9)
	{
		std::cout.width(9);
		std::cout << std::right << string.substr(0,9) << ".|";
	}
	else
	{
		std::cout.width(10);
		std::cout << std::right << string << '|';
	}
}

void				print_contacts_func(Contact *contacts, int num)
{
	std::cout.width(10);
	std::cout << std::right << "index" << '|';
	std::cout.width(10);
	std::cout << std::right << "first name" << '|';
	std::cout.width(10);
	std::cout << std::right << "last name" << '|';
	std::cout.width(10);
	std::cout << std::right << "nickname" << '|' << std::endl;
	for (int i = 0; i < num; i++)
	{
		std::cout.width(10); std::cout << std::right << i + 1 << '|';
		print_ten_symbols(contacts[i].first_name);
		print_ten_symbols(contacts[i].last_name);
		print_ten_symbols(contacts[i].nickname);
		std::cout << std::endl;
	}
}

void				search_func(Contact *contacts, int num)
{
	int				found;
	std::string		str;

	print_contacts_func(contacts, num);
	std::cout << "Enter index : ";
	std::cin >> str;
	if (std::cin.eof())
	{
		std::cout << "BYE-BYE!" << std::endl;
		exit (0);
	}
	found = str.find_first_not_of("1234567890");
	if (found == (int)std::string::npos)
	{
		if (str.length() < 3 && std::stoi(str) - 1 <= Contact::getTotalContants())
		{
			print_full_info(contacts[std::stoi(str) - 1]);
			return ;
		}
	}
	std::cout << "Sorry invalid number" << std::endl;
}

int					main(void)
{
	std::string		str;
	Contact			contacts[8];

	std::cout << "------ My Awesome PhoneBook ------" << std::endl << std::endl;
	while (!std::cin.eof())
	{
		std::cout << "Usage: ADD, EXIT, SEARCH" << std::endl;
		std::cin >> str;
		if (str == "EXIT")
			break ;
		else if (str == "ADD" && Contact::getTotalContants() < 8)
			add_func(contacts, Contact::getTotalContants());
		else if (str == "SEARCH")
			search_func(contacts, Contact::getTotalContants());
		else if (Contact::getTotalContants() >= 8)
			std::cout << "Oooops, TOO MUCH CONTACTS!" << std::endl;
	}
	std::cout << "BYE-BYE!" << std::endl;
	return 0;
}
