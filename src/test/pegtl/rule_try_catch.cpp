// Copyright (c) 2014-2021 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/PEGTL/

#include "test.hpp"
#include "verify_seqs.hpp"

namespace TAO_PEGTL_NAMESPACE
{
   template< typename... Rules >
   using test_try_catch_rule = try_catch< must< Rules... > >;

   void unit_test()
   {
#if defined( __cxx_exceptions )
      verify_seqs< try_catch >();
      verify_seqs< test_try_catch_rule >();
#endif
   }

}  // namespace TAO_PEGTL_NAMESPACE

#include "main.hpp"
