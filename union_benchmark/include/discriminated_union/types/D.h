#ifndef INCLUDE_DISCRIMINATED_UNION_TYPES_D_H_
#define INCLUDE_DISCRIMINATED_UNION_TYPES_D_H_

#include "discriminated_union/types/GenericType.h"

namespace Union
{

class D final : public GenericType<static_cast<int>(TypeIndex::NONE)> {};

}

#endif
