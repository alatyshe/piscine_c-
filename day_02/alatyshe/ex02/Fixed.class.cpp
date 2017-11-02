#include "Fixed.class.hpp"

int const Fixed::_fixed = 8;

Fixed::Fixed() {
	this->_rawBits = 0;
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &copy) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Fixed::Fixed(int const value) {
	// std::cout << "Int constructor called" << std::endl;
	this->_rawBits = value << Fixed::_fixed;
	return ;
}

Fixed::Fixed(float const value) {
	// std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(value * (1 << Fixed::_fixed));
	return ;
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
	return ;	
}

void				Fixed::setRawBits( int const raw ) {
	this->_rawBits = raw;
}

int					Fixed::getRawBits( void ) const {
	return (this->_rawBits);
}

int                 Fixed::toInt (void) const {
    return (this->_rawBits >> Fixed::_fixed);
}

float                Fixed::toFloat (void) const {
    return static_cast<float>(static_cast<float>(this->_rawBits) / (1 << Fixed::_fixed));
}


bool				Fixed::operator>(Fixed const & copy) const {
	return (this->_rawBits > copy.getRawBits());
}
bool				Fixed::operator<(Fixed const & copy) const {
	return (this->_rawBits < copy.getRawBits());
}
bool				Fixed::operator>=(Fixed const & copy) const {
	return (this->_rawBits >= copy.getRawBits());
}
bool				Fixed::operator<=(Fixed const & copy) const {
	return (this->_rawBits <= copy.getRawBits());
}
bool				Fixed::operator==(Fixed const & copy) const {
	return (this->_rawBits == copy.getRawBits());
}
bool				Fixed::operator!=(Fixed const & copy) const {
	return (this->_rawBits != copy.getRawBits());
}


Fixed			&Fixed::operator++(void){
	this->_rawBits++;
	return (*this);
}

Fixed			Fixed::operator++(int) {
	Fixed	result(*this);
	this->_rawBits++;
	return (result);
}

Fixed			&Fixed::operator--(void){
	this->_rawBits--;
	return (*this);
}
Fixed			Fixed::operator--(int) {
	Fixed	result(*this);
	this->_rawBits--;
	return (result);
}


Fixed&				Fixed::operator = (const Fixed &copy) {
	if (&copy == this)
		return *this;
	this->setRawBits(copy.getRawBits());
	return (*this);
}

Fixed				Fixed::operator*(Fixed const & copy) const {
	Fixed *res = new Fixed(this->toFloat() * copy.toFloat());
	return (*res);
}

Fixed				Fixed::operator + (const Fixed &copy) const {
	Fixed *res = new Fixed(this->toFloat() + copy.toFloat());
	return (*res);
}

Fixed				Fixed::operator - (const Fixed &copy) const {
	Fixed *res = new Fixed(this->toFloat() - copy.toFloat());
	return (*res);
}

Fixed				Fixed::operator / (const Fixed &copy) const {
	Fixed *res = new Fixed(this->toFloat() / copy.toFloat());
	return (*res);
}
std::ostream		&operator<<(std::ostream& ostr, Fixed const& obj) {
	ostr << obj.toFloat();
	return (ostr);
}

Fixed const		&Fixed::max(Fixed const &first, Fixed const &second)
{
	if (first.getRawBits() > second.getRawBits())
		return (first);
	return (second);
}

Fixed			&Fixed::max(Fixed &first, Fixed &second)
{
	if (first.getRawBits() > second.getRawBits())
		return (first);
	return (second);
}

Fixed const		&Fixed::min(Fixed const &first, Fixed const &second)
{
	if (first.getRawBits() < second.getRawBits())
		return (first);
	return (second);
}

Fixed			&Fixed::min(Fixed &first, Fixed &second)
{
	if (first.getRawBits() < second.getRawBits())
		return (first);
	return (second);
}
