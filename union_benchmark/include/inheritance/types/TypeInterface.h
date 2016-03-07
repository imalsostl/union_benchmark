#ifndef UNION_BENCHMARK_TYPEINTERFACE_H_
#define UNION_BENCHMARK_TYPEINTERFACE_H_

#include "inheritance/types/TypeIndex.h"

#include <memory>

namespace Inheritance
{

class TypeInterface
{
public:

	virtual ~TypeInterface() = default;

	virtual TypeIndex next_type() const = 0;

	std::unique_ptr<TypeInterface> next();
};

}

#endif
