#include <processed_numbers.h>
#include <full_adder.h>
#include <utils.h>

#ifndef SQRT_1
#  undef SOLUTION
#  define SOLUTION XJOIN(___, XADD_CARRY(XJOIN(_, A), XJOIN(_, B), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#endif
#ifdef SQRT_1
#  ifndef SQRT_3
#    undef SOLUTION2
#    define SOLUTION2 XJOIN(___, XADD_CARRY(XJOIN(_, E), XJOIN(_, F), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#  endif
#endif
#ifdef SQRT_3
#  ifndef SQRT_5
#    undef SOLUTION6
#    define SOLUTION6 XJOIN(___, XADD_CARRY(XJOIN(_, M), XJOIN(_, N), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#  endif
#endif
#ifdef SQRT_5
#  ifndef SQRT_7
#    undef SOLUTION10
#    define SOLUTION10 XJOIN(___, XADD_CARRY(XJOIN(_, U), XJOIN(_, V), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#  endif
#endif
