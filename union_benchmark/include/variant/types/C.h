#ifndef INCLUDE_VARIANT_TYPES_C_H_
#define INCLUDE_VARIANT_TYPES_C_H_

#include "variant/types/GenericType.h"

namespace Variant
{

class C final : public GenericType<static_cast<int>(TypeIndex::D)> {};

}

#endif
