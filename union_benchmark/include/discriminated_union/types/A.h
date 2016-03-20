#ifndef INCLUDE_DISCRIMINATED_UNION_TYPES_A_H_
#define INCLUDE_DISCRIMINATED_UNION_TYPES_A_H_

#include "discriminated_union/types/GenericType.h"

namespace Union
{

class A final : public GenericType<static_cast<int>(TypeIndex::B)> {};

}

#endif
