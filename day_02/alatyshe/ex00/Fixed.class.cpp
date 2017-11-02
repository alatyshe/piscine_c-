#include "Fixed.class.hpp"

Fixed::Fixed() {
	this->_rawBits = 0;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return ;	
}

void		Fixed::setRawBits( int const raw ) {
	// std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = raw;
}

int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);
}

Fixed& 	Fixed::operator = (const Fixed &original) {

	std::cout << "Assignation operator called";
	std::cout << std::endl;
	if (&original == this)
		return *this;
	this->setRawBits(original.getRawBits());
	return (*this);
}

