#include <processed_numbers.h>
#include <full_adder.h>
#include <utils.h>

#ifndef SQRT_1
#  ifndef QUAD_5
#    undef SOLUTION
#    define SOLUTION XJOIN(___, XSUM(XJOIN(_, A), XJOIN(_, B), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#  endif
#endif
#ifdef SQRT_1
#  ifndef SQRT_3
#    undef SOLUTION2
#    define SOLUTION2 XJOIN(___, XSUM(XJOIN(_, E), XJOIN(_, F), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#  endif
#endif
#ifdef SQRT_3
#  ifndef SQRT_4
#    undef SOLUTION6
#    define SOLUTION6 XJOIN(___, XSUM(XJOIN(_, M), XJOIN(_, N), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#  endif
#endif
#ifdef SQRT_4
#  ifndef SQRT_5
#    undef SOLUTION6_
#    define SOLUTION6_ XJOIN(___, XSUM(XJOIN(_, M1), XJOIN(_, N1), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#  endif
#endif
#ifdef SQRT_5
#  ifndef SQRT_6
#    undef SOLUTION10
#    define SOLUTION10 XJOIN(___, XSUM(XJOIN(_, U), XJOIN(_, V), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#  endif
#endif
#ifdef SQRT_6
#  ifndef SQRT_7
#    undef SOLUTION10_
#    define SOLUTION10_ XJOIN(___, XSUM(XJOIN(_, U_), XJOIN(_, V_), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#  endif
#endif

#ifdef QUAD_5
#  ifndef QUAD_6
#    undef SOLUTION_Q8
#    define SOLUTION_Q8 XJOIN(___, XSUM(XJOIN(_, A_Q8), XJOIN(_, B_Q8), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#  endif
#endif
