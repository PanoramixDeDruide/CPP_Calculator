#include <processed_numbers.h>
#include <full_adder.h>
#include <utils.h>

#ifndef SQRT_1
#  ifndef QUAD_6
#    undef SOLUTION
#    define SOLUTION XJOIN(___, XADD_CARRY(XJOIN(_, A), XJOIN(_, B), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#  endif
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
#  ifndef SQRT_6
#    undef SOLUTION10
#    define SOLUTION10 XJOIN(___, XADD_CARRY(XJOIN(_, U), XJOIN(_, V), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#  endif
#endif
#ifdef SQRT_6
#  ifndef SQRT_7
#    undef SOLUTION10__
#    define SOLUTION10__ XJOIN(___, XADD_CARRY(XJOIN(_, U__), XJOIN(_, V__), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#  endif
#endif
#ifdef SQRT_7
#  ifndef SQRT_8
#    undef SOLUTION10___
#    define SOLUTION10___ XJOIN(___, XADD_CARRY(XJOIN(_, U___), XJOIN(_, V___), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#  endif
#endif
#ifdef SQRT_8
#  ifndef SQRT_9
#    undef SOLUTION10____
#    define SOLUTION10____ XJOIN(___, XADD_CARRY(XJOIN(_, U____), XJOIN(_, V____), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#  endif
#endif

#ifdef QUAD_7
#  ifndef QUAD_8
#    undef SOLUTION_Q13
#    define SOLUTION_Q13 XJOIN(___, XADD_CARRY(XJOIN(_, A_Q13), XJOIN(_, B_Q13), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#  endif
#endif

