#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

#include <iostream>

class Sample
{
	public:

		Sample( void );
		~Sample( void );

		void	getFoo( void ) const;
		void	setFoo( int v );

	private:
		int			_foo;

	
};

#endif