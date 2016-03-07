#ifndef UNION_BENCHMARK_A_H_
#define UNION_BENCHMARK_A_H_

#include "inheritance/types/GenericType.h"

#include <array>

namespace Inheritance
{

class A final : public GenericType<static_cast<int>(TypeIndex::B)> {};

}

#endif
