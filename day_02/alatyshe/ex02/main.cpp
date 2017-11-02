#include <iostream>
#include "Fixed.class.hpp"

int main( void ) {
	Fixed a;
	Fixed copy;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed( 5.05f ) * Fixed( 2 ) );


	std::cout << "check " << a << "  <  " << b << "\t: ";
	std::cout <<  (a < b) << std::endl;
	
	std::cout << "check " << a << "  >  " << b << "\t: ";
	std::cout << (a > b) << std::endl;

	std::cout << "check " << a << "  ==  " << b << "\t: ";
	std::cout << (a == b) << std::endl;

	std::cout << "check " << a << "  >=  " << b << "\t: ";
	std::cout << (a >= b) << std::endl;

	std::cout << "check " << a << "  <=  " << b << "\t: ";
	std::cout << (a <= b) << std::endl;

	std::cout << "check " << a << "  !=  " << b << "\t: ";
	std::cout << (a != b) << std::endl;

	std::cout << "=======================================================" << std::endl;
	std::cout << "check " << b << "  <  " << c << "\t: ";
	std::cout <<  (b < c) << std::endl;
	
	std::cout << "check " << b << "  >  " << c << "\t: ";
	std::cout << (b > c) << std::endl;

	std::cout << "check " << b << " ==  " << c << "\t: ";
	std::cout << (b == c) << std::endl;

	std::cout << "check " << b << " >=  " << c << "\t: ";
	std::cout << (b >= c) << std::endl;

	std::cout << "check " << b << " <=  " << c << "\t: ";
	std::cout << (b <= c) << std::endl;

	std::cout << "check " << b << " !=  " << c << "\t: ";
	std::cout << (b != c) << std::endl;
	std::cout << "=======================================================" << std::endl;


	std::cout << "check " << b << " +  " << c << "\t = ";
	std::cout << (b + c) << std::endl;

	std::cout << "check " << a << " +  " << c << "\t = ";
	std::cout << (a + c) << std::endl;
	std::cout << "=======================================================" << std::endl;

	std::cout << "check " << b << " -  " << c << "\t = ";
	std::cout << (b - c) << std::endl;

	std::cout << "check " << a << " -  " << c << "\t = ";
	std::cout << (a - c) << std::endl;
	std::cout << "=======================================================" << std::endl;

	std::cout << "check " << b << " /  " << c << "\t = ";
	std::cout << (b / c) << std::endl;

	std::cout << "check " << a << " /  " << c << "\t = ";
	std::cout << (a / c) << std::endl;
	std::cout << "=======================================================" << std::endl;

	std::cout << "check (" << copy << " =  " << b << ")\t = ";
	std::cout << (copy = b) << std::endl;

	std::cout << "check (" << copy << " =  " << a << ")\t = ";
	std::cout << (copy = a) << std::endl;
	std::cout << "=======================================================" << std::endl;

	std::cout << "=======================================================" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "=======================================================" << std::endl;
	std::cout << "=======================================================" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "=======================================================" << std::endl;
	std::cout << "=======================================================" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "--a = " << --a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "=======================================================" << std::endl;
	std::cout << "=======================================================" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "=======================================================" << std::endl;
	
	
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::max( b, a ) << std::endl;
	std::cout << Fixed::min( b, a ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;

	return 0;
}