//==============================================================================
//         Copyright 2003 - 2011   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2011   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef NT2_CONSTANT_CONSTANTS_SEVEN_HPP_INCLUDED
#define NT2_CONSTANT_CONSTANTS_SEVEN_HPP_INCLUDED

#include <boost/simd/constant/include/constants/seven.hpp>
#include <nt2/include/functor.hpp>

namespace nt2
{
  namespace tag
  {
    #ifdef DOXYGEN_ONLY
    /*! \brief Same as \classref{boost::simd::tag::Seven_} **/
    struct seven_ {};
    #endif
    using boost::simd::tag::Seven;
  }

  #ifdef DOXYGEN_ONLY
  /*! \brief Same as \funcref{boost::simd::Seven} **/
  template<class... Args>
  details::unspecified seven(Args&&... args);
  #endif
  using boost::simd::Seven;
}

#include <nt2/constant/common.hpp>

#endif
