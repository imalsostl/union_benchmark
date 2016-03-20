#ifndef UNION_BENCHMARK_TYPEINTERFACE_H_
#define UNION_BENCHMARK_TYPEINTERFACE_H_

#include "TypeIndex.h"

#include <memory>

namespace Inheritance
{

class TypeInterface
{
public:

	virtual ~TypeInterface() = default;

	virtual TypeIndex next_type() const = 0;

	TypeInterface* next();

private:
	mutable std::unique_ptr<TypeInterface> cache;
};

}

#endif
