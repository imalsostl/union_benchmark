#ifndef INCLUDE_VARIANT_TYPES_VARIANTTYPE_H_
#define INCLUDE_VARIANT_TYPES_VARIANTTYPE_H_

#include "variant/types/A.h"
#include "variant/types/B.h"
#include "variant/types/C.h"
#include "variant/types/D.h"

#include <boost/variant.hpp>

namespace Variant
{

using VariantType = boost::variant<boost::blank, A, B, C, D>;

class get_next_type : public boost::static_visitor<TypeIndex>
{
public:

	template <typename T>
    auto operator()(const T& i) const
    {
       return i.next_type();
    }

};

template <>
auto get_next_type::operator()(const boost::blank& i) const
{
	(void)i;
	return TypeIndex::NONE;
}

}

#endif
