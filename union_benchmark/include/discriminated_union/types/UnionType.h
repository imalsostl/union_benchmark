#ifndef INCLUDE_DISCRIMINATED_UNION_TYPES_UNIONTYPE_H_
#define INCLUDE_DISCRIMINATED_UNION_TYPES_UNIONTYPE_H_

#include "discriminated_union/types/A.h"
#include "discriminated_union/types/B.h"
#include "discriminated_union/types/C.h"
#include "discriminated_union/types/D.h"

#include <boost/blank.hpp>

namespace Union
{

struct UnionType
{
	TypeIndex i;

	union
	{
		boost::blank none;
		A a;
		B b;
		C c;
		D d;
	};
};

TypeIndex get_next_type(const UnionType& unionType)
{
	switch(unionType.i)
	{
	case TypeIndex::A:
		return unionType.a.next_type();
	case TypeIndex::B:
			return unionType.b.next_type();
	case TypeIndex::C:
			return unionType.c.next_type();
	case TypeIndex::D:
			return unionType.d.next_type();
	default:
			return TypeIndex::NONE;
	}
}

}

#endif
