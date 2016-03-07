#ifndef UNION_BENCHMARK_GENERICTYPE_H_
#define UNION_BENCHMARK_GENERICTYPE_H_

#include "inheritance/types/TypeInterface.h"

namespace Inheritance
{

template <int T>
class GenericType : public TypeInterface
{
public:

	static const auto NextIndex = T;

	TypeIndex next_type() const override
	{
		return static_cast<TypeIndex>(NextIndex);
	}
};

}

#endif
