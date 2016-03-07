#include "benchmark/benchmark.h"

#include "inheritance/Factory.h"

static void BM_Inheritance(benchmark::State& state)
{
	using namespace Inheritance;

	while (state.KeepRunning())
	{
		auto type = Factory::create(TypeIndex::A);

		while (type)
		{
			type = Factory::create(type->next_type());
		}
	}
}

BENCHMARK(BM_Inheritance);

BENCHMARK_MAIN();
