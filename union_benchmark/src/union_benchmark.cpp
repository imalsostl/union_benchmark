#include "benchmark/benchmark.h"

#include "inheritance/Factory.h"
#include "variant/Factory.h"

#include <iostream>

static void BM_Inheritance(benchmark::State& state)
{
	using namespace Inheritance;

	while (state.KeepRunning())
	{
		auto type = Factory::create(TypeIndex::A);

		while (type)
		{
			//std::cout << static_cast<int>(type->next_type()) << "\n";
			type = Factory::create(type->next_type());
		}
	}
}

BENCHMARK(BM_Inheritance);

static void BM_Variant(benchmark::State& state)
{
	using namespace Variant;

	while (state.KeepRunning())
	{
		auto type = Factory::create(TypeIndex::A);

		while (type.which() != 0)
		{
			//std::cout << type.which() << "\n";
			benchmark::DoNotOptimize(type = Factory::create(boost::apply_visitor(get_next_type(), type)));
		}
	}
}

BENCHMARK(BM_Variant);

BENCHMARK_MAIN();
