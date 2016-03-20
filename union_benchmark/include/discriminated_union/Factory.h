#ifndef INCLUDE_DISCRIMINATED_UNION_FACTORY_H_
#define INCLUDE_DISCRIMINATED_UNION_FACTORY_H_

#include "discriminated_union/types/UnionType.h"

namespace Union
{

class Factory
{
public:
	static UnionType create(TypeIndex i)
	{
		UnionType value;

		switch(i)
		{
		case TypeIndex::A:
		{
			value.i = TypeIndex::A;
			value.a = A();
			break;
		}
		case TypeIndex::B:
		{
			value.i = TypeIndex::B;
			value.b = B();
			break;
		}
		case TypeIndex::C:
		{
			value.i = TypeIndex::C;
			value.c = C();
			break;
		}
		case TypeIndex::D:
		{
			value.i = TypeIndex::D;
			value.d = D();
			break;
		}
		default:
		{
			value.i = TypeIndex::NONE;
			value.none = boost::blank{};
		}
		}

		return value;
	}
};

}

#endif
