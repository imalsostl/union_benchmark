#ifndef UNION_BENCHMBRK_B_H_
#define UNION_BENCHMBRK_B_H_

#include "inheritance/types/TypeInterface.h"

namespace Inheritance
{

class B final : public GenericType<static_cast<int>(TypeIndex::C)> {};

}

#endif


