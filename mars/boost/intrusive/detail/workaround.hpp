//////////////////////////////////////////////////////////////////////////////
//
// (C) Copyright Ion Gaztanaga 2005-2013. Distributed under the Boost
// Software License, Version 1.0. (See accompanying file
// LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/interprocess for documentation.
//
//////////////////////////////////////////////////////////////////////////////

#ifndef BOOST_INTRUSIVE_DETAIL_WORKAROUND_HPP
#define BOOST_INTRUSIVE_DETAIL_WORKAROUND_HPP

#ifndef BOOST_CONFIG_HPP
#  include <boost/config.hpp>
#endif

#if defined(BOOST_HAS_PRAGMA_ONCE)
#  pragma once
#endif

#ifndef BOOST_CONFIG_HPP
#include <boost/config.hpp>
#endif

#if    !defined(BOOST_NO_CXX11_RVALUE_REFERENCES) && !defined(BOOST_NO_CXX11_VARIADIC_TEMPLATES)
   #define BOOST_INTRUSIVE_PERFECT_FORWARDING
#endif

//Macros for documentation purposes. For code, expands to the argument
#define BOOST_INTRUSIVE_IMPDEF(TYPE) TYPE
#define BOOST_INTRUSIVE_SEEDOC(TYPE) TYPE
#define BOOST_INTRUSIVE_DOC1ST(TYPE1, TYPE2) TYPE2
#define BOOST_INTRUSIVE_I ,
#define BOOST_INTRUSIVE_DOCIGN(T1) T1


#endif   //#ifndef BOOST_INTRUSIVE_DETAIL_WORKAROUND_HPP
