#ifndef INCLUDE_DISCRIMINATED_UNION_TYPES_C_H_
#define INCLUDE_DISCRIMINATED_UNION_TYPES_C_H_

#include "discriminated_union/types/GenericType.h"

namespace Union
{

class C final : public GenericType<static_cast<int>(TypeIndex::D)> {};

}

#endif
