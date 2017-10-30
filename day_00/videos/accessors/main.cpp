#include "Sample.class.hpp"

int			main()
{
	Sample instance;


	instance.getFoo();
	instance.setFoo(10);
	instance.getFoo();
	instance.setFoo(20);
	instance.getFoo();
	// instance._privateBar();
	return 0;
}