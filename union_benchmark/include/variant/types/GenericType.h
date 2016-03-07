#ifndef INCLUDE_VARIANT_GENERICTYPE_H_
#define INCLUDE_VARIANT_GENERICTYPE_H_

namespace Variant
{

template <int T>
class GenericType
{
public:

	static const auto NextIndex = T;

	TypeIndex next_type() const
	{
		return static_cast<TypeIndex>(NextIndex);
	}
};

}

#endif
