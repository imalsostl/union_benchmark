#ifndef UNION_BENCHMARK_FACTORY_H_
#define UNION_BENCHMARK_FACTORY_H_

#include "inheritance/types/A.h"
#include "inheritance/types/B.h"
#include "inheritance/types/C.h"
#include "inheritance/types/D.h"
#include "inheritance/types/TypeIndex.h"

#include <cassert>
#include <memory>

namespace Inheritance
{

class Factory
{
public:
	static std::unique_ptr<TypeInterface> create(TypeIndex i)
	{
		switch (i)
		{
		case TypeIndex::A:
			return std::make_unique<A>();

		case TypeIndex::B:
			return std::make_unique<B>();

		case TypeIndex::C:
			return std::make_unique<C>();

		case TypeIndex::D:
			return std::make_unique<D>();
		default:
			return nullptr;
		}
	}
};

}

#endif
