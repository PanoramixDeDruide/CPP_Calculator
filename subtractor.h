#include <processed_numbers.h>
#include <full_adder.h>
#include <utils.h>

#ifndef SQRT_1
  #undef SOLUTION
  #define SOLUTION XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, A), XJOIN(__, B), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#endif
#ifdef SQRT_1
  #ifndef SQRT_4
    #undef SOLUTION4
    #define SOLUTION4 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, I), XJOIN(__, J), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif
#ifdef SQRT_4
  #ifndef SQRT_5
    #undef SOLUTION8
    #define SOLUTION8 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, Q), XJOIN(__, R), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif
#ifdef SQRT_5
  #ifndef SQRT_6
    #undef SOLUTION10
    #define SOLUTION10 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, Y), XJOIN(__, Z), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif
#ifdef SQRT_6
  #ifndef SQRT_7
    #undef SOLUTION12
    #define SOLUTION12 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, Y1), XJOIN(__, Z1), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif
#ifdef SQRT_7
  #ifndef SQRT_8
    #undef SOLUTION14
    #define SOLUTION14 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, Y2), XJOIN(__, Z2), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif
