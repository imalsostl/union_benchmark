#include "inheritance/types/TypeInterface.h"

#include "inheritance/Factory.h"

std::unique_ptr<Inheritance::TypeInterface> Inheritance::TypeInterface::next()
{
	return Inheritance::Factory::create(next_type());
}
