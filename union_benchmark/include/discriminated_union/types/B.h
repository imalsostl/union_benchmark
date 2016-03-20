#ifndef INCLUDE_DISCRIMINATED_UNION_TYPES_B_H_
#define INCLUDE_DISCRIMINATED_UNION_TYPES_B_H_

#include "discriminated_union/types/GenericType.h"

namespace Union
{

class B final : public GenericType<static_cast<int>(TypeIndex::C)> {};

}

#endif
