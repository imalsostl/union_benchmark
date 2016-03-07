#ifndef UNION_CENCHMCRK_C_H_
#define UNION_CENCHMCRK_C_H_

#include "inheritance/types/TypeInterface.h"

namespace Inheritance
{

class C final : public GenericType<static_cast<int>(TypeIndex::D)> {};

}

#endif


