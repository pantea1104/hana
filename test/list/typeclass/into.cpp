/*
@copyright Louis Dionne 2014
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 */

#include <boost/hana/list.hpp>

#include <boost/hana/detail/static_assert.hpp>
#include <boost/hana/integral.hpp>

#include "minimal.hpp"
using namespace boost::hana;


int main() {
    BOOST_HANA_STATIC_ASSERT(into<MinimalList>() == ilist<>);
    BOOST_HANA_STATIC_ASSERT(into<MinimalList>(int_<0>) == ilist<0>);
    BOOST_HANA_STATIC_ASSERT(into<MinimalList>(int_<0>, int_<1>) == ilist<0, 1>);
    BOOST_HANA_STATIC_ASSERT(into<MinimalList>(int_<0>, int_<1>, int_<2>) == ilist<0, 1, 2>);
    BOOST_HANA_STATIC_ASSERT(into<MinimalList>(int_<0>, int_<1>, int_<2>, int_<3>) == ilist<0, 1, 2, 3>);
}
