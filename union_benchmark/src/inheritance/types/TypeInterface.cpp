#include "inheritance/types/TypeInterface.h"

#include "inheritance/Factory.h"

Inheritance::TypeInterface* Inheritance::TypeInterface::next()
{
	if(!cache)
	{
		cache = Inheritance::Factory::create(next_type());
	}

	return cache.get();
}
