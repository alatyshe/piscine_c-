#include "Fixed.class.hpp"

int const Fixed::_fixed = 8;

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

Fixed::Fixed(int const value) {
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = value << Fixed::_fixed;
	return ;
}

Fixed::Fixed(float const value) {
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(value * (1 << Fixed::_fixed));
	return ;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return ;	
}

void			Fixed::setRawBits( int const raw ) {
	this->_rawBits = raw;
}

int				Fixed::getRawBits( void ) const {
	return (this->_rawBits);
}

int				Fixed::toInt (void) const {
    return (this->_rawBits >> Fixed::_fixed);
}

float			Fixed::toFloat (void) const {
    return static_cast<float>(static_cast<float>(this->_rawBits) / (1 << Fixed::_fixed));
}

Fixed& 			Fixed::operator = (const Fixed &original) {

	std::cout << "Assignation operator called";
	std::cout << std::endl;
	if (&original == this)
		return *this;
	this->setRawBits(original.getRawBits());
	return (*this);
}

std::ostream&	operator<<(std::ostream& ostr, Fixed const& obj) {
	ostr << obj.toFloat();
	return (ostr);
}