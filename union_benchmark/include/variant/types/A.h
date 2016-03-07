#ifndef INCLUDE_VARIANT_TYPES_A_H_
#define INCLUDE_VARIANT_TYPES_A_H_

#include "variant/types/GenericType.h"

namespace Variant
{

class A final : public GenericType<static_cast<int>(TypeIndex::B)> {};

}

#endif
