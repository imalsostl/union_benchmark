#include "benchmark/benchmark.h"

#include "discriminated_union/Factory.h"
#include "inheritance/Factory.h"
#include "variant/Factory.h"

#include <iostream>

static void BM_Union(benchmark::State& state)
{
	while (state.KeepRunning())
	{
		auto type = Union::Factory::create(TypeIndex::A);
		auto next = Union::get_next_type(type);

		while (next != TypeIndex::NONE)
		{
			//std::cout << static_cast<int>(type.i) << "\n";
			type = Union::Factory::create(next);
			next = Union::get_next_type(type);
		}
	}
}

BENCHMARK(BM_Union);

static void BM_Inheritance(benchmark::State& state)
{
	while (state.KeepRunning())
	{
		auto type = Inheritance::Factory::create(TypeIndex::A);
		auto next = type.get();

		do
		{
			//std::cout << static_cast<int>(type->next_type()) << "\n";
			next = next->next();
		} while (next);
	}
}

BENCHMARK(BM_Inheritance);

static void BM_Variant(benchmark::State& state)
{
	while (state.KeepRunning())
	{
		auto type = Variant::Factory::create(TypeIndex::A);

		while (type.which() != 0)
		{
			//std::cout << type.which() << "\n";
			type = Variant::Factory::create(boost::apply_visitor(Variant::get_next_type(), type));
		}
	}
}

BENCHMARK(BM_Variant);

BENCHMARK_MAIN();
