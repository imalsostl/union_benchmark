#ifndef UNION_BENCHMARK_A_H_
#define UNION_BENCHMARK_A_H_

#include "inheritance/types/GenericType.h"

namespace Inheritance
{

class A final : public GenericType<static_cast<int>(TypeIndex::B)>
{

private:
	int padding = 4353;
	int padding2 = 3459;
};

}

#endif
