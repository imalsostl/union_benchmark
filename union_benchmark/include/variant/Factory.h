#ifndef INCLUDE_VARIANT_FACTORY_H_
#define INCLUDE_VARIANT_FACTORY_H_

#include "variant/types/VariantType.h"

namespace Variant
{

class Factory
{
public:
	static VariantType create(TypeIndex i)
	{
		switch(i)
		{
		case TypeIndex::A:
			return VariantType(A());
		case TypeIndex::B:
			return VariantType(B());
		case TypeIndex::C:
			return VariantType(C());
		case TypeIndex::D:
			return VariantType(D());
		default:
			return VariantType();
		}
	}
};

}

#endif
