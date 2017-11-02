#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

# define RED				"\x1b[31m"
# define GREEN				"\x1b[32m"
# define YELLOW				"\x1b[33m"
# define BLUE				"\x1b[34m"
# define MAGENTA			"\x1b[35m"
# define CYAN				"\x1b[36m"
# define BLACK				"\x1b[37m"
# define RESET				"\x1b[0m"

# include <iostream>
# include <cstring>
# include <string>
# include <sstream>
# include <cmath>

class Fixed
{

private:
	int					_rawBits;
	static int const	_fixed;

public:
	Fixed();
	Fixed(Fixed const &copy);
	Fixed(float const value);
	Fixed(int const value);
	~Fixed();

	//	Getters Setters
	int		getRawBits( void ) const ;
	void	setRawBits( int const raw );

	// reload operators
	Fixed				&operator = (const Fixed &copy);
	Fixed				operator*(Fixed const & copy) const;
	Fixed				operator+(Fixed const & copy) const;
	Fixed				operator-(Fixed const & copy) const;
	Fixed				operator/(Fixed const & copy) const;
	// boolean operators
	bool				operator>(Fixed const & copy) const;
	bool				operator<(Fixed const & copy) const;
	bool				operator>=(Fixed const & copy) const;
	bool				operator<=(Fixed const & copy) const;
	bool				operator==(Fixed const & copy) const;
	bool				operator!=(Fixed const & copy) const;

	Fixed				&operator++(void);
	Fixed				operator++(int);
	Fixed				&operator--(void);
	Fixed				operator--(int);

	// cast from one to another
	float				toFloat(void) const;
	int					toInt(void) const;

	// other
	static Fixed const	&max(Fixed const &first, Fixed const &second);
	static Fixed		&max(Fixed &first, Fixed &second);
	static Fixed const	&min(Fixed const &first, Fixed const &second);
	static Fixed		&min(Fixed &first, Fixed &second);

};

std::ostream	&operator<<(std::ostream& ostr, Fixed const& obj);

#endif