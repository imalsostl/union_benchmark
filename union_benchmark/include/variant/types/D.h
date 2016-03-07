#ifndef INCLUDE_VARIANT_TYPES_D_H_
#define INCLUDE_VARIANT_TYPES_D_H_

#include "variant/types/GenericType.h"

namespace Variant
{

class D final : public GenericType<static_cast<int>(TypeIndex::NONE)> {};

}

#endif
