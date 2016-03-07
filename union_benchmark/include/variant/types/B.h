#ifndef INCLUDE_VARIANT_TYPES_B_H_
#define INCLUDE_VARIANT_TYPES_B_H_

#include "variant/types/GenericType.h"

namespace Variant
{

class B final : public GenericType<static_cast<int>(TypeIndex::C)> {};

}

#endif
