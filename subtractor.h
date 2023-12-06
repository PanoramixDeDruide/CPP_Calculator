#include <processed_numbers.h>
#include <full_adder.h>
#include <utils.h>

#ifndef SQRT_1
  #ifndef QUAD_4
    #undef SOLUTION
    #define SOLUTION XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, A), XJOIN(__, B), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif
#ifdef SQRT_1
  #ifndef SQRT_4
    #undef SOLUTION4_Q0
    #define SOLUTION4_Q0 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, I), XJOIN(__, J), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
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

#ifdef QUAD_4
  #ifndef QUAD_5
    #undef SOLUTION_Q4
    #define SOLUTION_Q4 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, A_Q4), XJOIN(__, B_Q4), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif
#ifdef QUAD_5
  #ifndef QUAD_6
    #undef SOLUTION_Q5
    #define SOLUTION_Q5 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, A_Q5), XJOIN(__, B_Q5), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif
#ifdef QUAD_6
  #ifndef QUAD_7
    #undef SOLUTION_Q9
    #define SOLUTION_Q9 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, A_Q9), XJOIN(__, B_Q9), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif
#ifdef QUAD_7
  #ifndef QUAD_8
    #undef SOLUTION_Q10
    #define SOLUTION_Q10 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, A_Q10), XJOIN(__, B_Q10), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif
#ifdef SQRT_1_Q1
  #ifndef SQRT_4_Q1
    #undef SOLUTION4_Q1
    #define SOLUTION4_Q1 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, I_Q1), XJOIN(__, J_Q1), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif
#ifdef SQRT_4_Q1
  #ifndef SQRT_5_Q1
    #undef SOLUTION8_Q1
    #define SOLUTION8_Q1 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, Q_Q1), XJOIN(__, R_Q1), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif
#ifdef SQRT_5_Q1
  #ifndef SQRT_6_Q1
    #undef SOLUTION10_Q1
    #define SOLUTION10_Q1 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, Y_Q1), XJOIN(__, Z_Q1), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif
#ifdef SQRT_6_Q1
  #ifndef SQRT_7_Q1
    #undef SOLUTION12_Q1
    #define SOLUTION12_Q1 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, Y1_Q1), XJOIN(__, Z1_Q1), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif
#ifdef SQRT_7_Q1
  #ifndef SQRT_8_Q1
    #undef SOLUTION14_Q1
    #define SOLUTION14_Q1 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, Y2_Q1), XJOIN(__, Z2_Q1), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif

#ifdef SQRT_1_Q2
  #ifndef SQRT_4_Q2
    #undef SOLUTION4_Q2
    #define SOLUTION4_Q2 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, I_Q2), XJOIN(__, J_Q2), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif
#ifdef SQRT_4_Q2
  #ifndef SQRT_5_Q2
    #undef SOLUTION8_Q2
    #define SOLUTION8_Q2 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, Q_Q2), XJOIN(__, R_Q2), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif
#ifdef SQRT_5_Q2
  #ifndef SQRT_6_Q2
    #undef SOLUTION10_Q2
    #define SOLUTION10_Q2 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, Y_Q2), XJOIN(__, Z_Q2), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif
#ifdef SQRT_6_Q2
  #ifndef SQRT_7_Q2
    #undef SOLUTION12_Q2
    #define SOLUTION12_Q2 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, Y1_Q2), XJOIN(__, Z1_Q2), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif
#ifdef SQRT_7_Q2
  #ifndef SQRT_8_Q2
    #undef SOLUTION14_Q2
    #define SOLUTION14_Q2 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, Y2_Q2), XJOIN(__, Z2_Q2), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif

#ifdef SQRT_1_Q3
  #ifndef SQRT_4_Q3
    #undef SOLUTION4_Q3
    #define SOLUTION4_Q3 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, I_Q3), XJOIN(__, J_Q3), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif
#ifdef SQRT_4_Q3
  #ifndef SQRT_5_Q3
    #undef SOLUTION8_Q3
    #define SOLUTION8_Q3 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, Q_Q3), XJOIN(__, R_Q3), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif
#ifdef SQRT_5_Q3
  #ifndef SQRT_6_Q3
    #undef SOLUTION10_Q3
    #define SOLUTION10_Q3 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, Y_Q3), XJOIN(__, Z_Q3), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif
#ifdef SQRT_6_Q3
  #ifndef SQRT_7_Q3
    #undef SOLUTION12_Q3
    #define SOLUTION12_Q3 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, Y1_Q3), XJOIN(__, Z1_Q3), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif
#ifdef SQRT_7_Q3
  #ifndef SQRT_8_Q3
    #undef SOLUTION14_Q3
    #define SOLUTION14_Q3 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, Y2_Q3), XJOIN(__, Z2_Q3), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
  #endif
#endif
