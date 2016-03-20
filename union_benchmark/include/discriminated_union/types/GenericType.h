#ifndef INCLUDE_DISCRIMINATED_UNION_TYPES_GENERICTYPE_H_
#define INCLUDE_DISCRIMINATED_UNION_TYPES_GENERICTYPE_H_

#include "TypeIndex.h"

namespace Union
{

template <int T>
class GenericType
{
public:

	static const auto NextIndex = T;

	TypeIndex next_type() const
	{
		return static_cast<TypeIndex>(NextIndex);
	}
};

}

#endif
