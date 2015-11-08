//==============================================================================
//         Copyright 2003 - 2011   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2011   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef NT2_CONSTANT_CONSTANTS_LOGSQRT2PI_HPP_INCLUDED
#define NT2_CONSTANT_CONSTANTS_LOGSQRT2PI_HPP_INCLUDED

#include <boost/simd/constant/include/constants/logsqrt2pi.hpp>
#include <nt2/include/functor.hpp>

namespace nt2
{
  namespace tag
  {
    #ifdef DOXYGEN_ONLY
    /*! \brief Same as \classref{boost::simd::tag::Logsqrt2pi_} **/
    struct logsqrt2pi_ {};
    #endif
    using boost::simd::tag::Logsqrt2pi;
  }

  #ifdef DOXYGEN_ONLY
  /*! \brief Same as \funcref{boost::simd::Logsqrt2pi} **/
  template<class... Args>
  details::unspecified logsqrt2pi(Args&&... args);
  #endif
  using boost::simd::Logsqrt2pi;
}

#include <nt2/constant/common.hpp>

#endif
