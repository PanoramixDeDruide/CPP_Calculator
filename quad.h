#include <processed_numbers.h>
#include <full_adder.h>
#include <utils.h>

#undef QUAD_1
#define QUAD_1

#undef A_Q1
#undef B_Q1

#define A_Q1 B_QUAD
#define B_Q1 B_QUAD

#include <multiplier.h>

#undef QUAD_1
#undef QUAD_2

#define QUAD_1
#define QUAD_2

#undef A_Q2
#undef B_Q2

#define A_Q2 4
#define B_Q2 A_QUAD

#include <multiplier.h>

#undef QUAD_1
#undef QUAD_2
#undef QUAD_3

#define QUAD_1
#define QUAD_2
#define QUAD_3

#undef A_Q3
#undef B_Q3

#define A_Q3 SOLUTION_Q2
#define B_Q3 C_QUAD

#include <multiplier.h>

#undef QUAD_1
#undef QUAD_2
#undef QUAD_3
#undef QUAD_4

#define QUAD_1
#define QUAD_2
#define QUAD_3
#define QUAD_4

#undef A_Q4
#undef B_Q4

#define A_Q4 SOLUTION_Q1
#define B_Q4 SOLUTION_Q3

#include <subtractor.h>

#undef A
#define A SOLUTION_Q4
#include <sqrt.h>

#undef QUAD_1
#undef QUAD_2
#undef QUAD_3
#undef QUAD_4
#undef QUAD_5

#define QUAD_1
#define QUAD_2
#define QUAD_3
#define QUAD_4
#define QUAD_5

#if SOLUTION_Q4 == 0
  #undef NUM_SOLUTIONS_QUAD
  #define NUM_SOLUTIONS_QUAD 1

  #undef A_Q5
  #undef B_Q5

  #define A_Q5 0
  #define B_Q5 B_QUAD
  #include <subtractor.h>

  #undef A_Q6
  #undef B_Q6

  #define A_Q6 2
  #define B_Q6 A_QUAD

  #include <multiplier.h>

  #undef A_Q7_Q1
  #undef B_Q7_Q1

  #define A_Q7_Q1 SOLUTION_Q5
  #define B_Q7_Q1 SOLUTION_Q6

  #include <divider.h>
#else
  #undef A_Q8
  #undef B_Q8

  #define A_Q8 SOLUTION_Q1
  #define B_Q8 ASSEMBLE(XJOIN(__, SOLUTION_Q3), 0, 0, 0, 0, 01)

  #include <adder.h>

  #if SOLUTION_Q8 > 999997
    #undef NUM_SOLUTIONS_QUAD
    #define NUM_SOLUTIONS_QUAD 0

    #undef SOLUTION_QUAD1
    #define SOLUTION_QUAD1 NO SOLUTION
  #else
    #undef QUAD_1
    #undef QUAD_2
    #undef QUAD_3
    #undef QUAD_4
    #undef QUAD_5
    #undef QUAD_6

    #define QUAD_1
    #define QUAD_2
    #define QUAD_3
    #define QUAD_4
    #define QUAD_5
    #define QUAD_6

    #undef NUM_SOLUTIONS_QUAD
    #define NUM_SOLUTIONS_QUAD 2

    #undef A_Q9
    #undef B_Q9

    #define A_Q9 0
    #define B_Q9 B_QUAD
    #include <subtractor.h>

    #undef QUAD_1
    #undef QUAD_2
    #undef QUAD_3
    #undef QUAD_4
    #undef QUAD_5
    #undef QUAD_6
    #undef QUAD_7

    #define QUAD_1
    #define QUAD_2
    #define QUAD_3
    #define QUAD_4
    #define QUAD_5
    #define QUAD_6
    #define QUAD_7

    #undef A_Q10
    #undef B_Q10

    #define A_Q10 SOLUTION_Q9
    #define B_Q10 SOLUTION

    #include <subtractor.h>

    #undef A_Q11
    #undef B_Q11

    #define A_Q11 2
    #define B_Q11 A_QUAD

    #include <multiplier.h>

    #undef A_Q7_Q2
    #undef B_Q7_Q2

    #define A_Q7_Q2 SOLUTION_Q10
    #define B_Q7_Q2 SOLUTION_Q11

    #include <divider.h>

    #undef A_Q13
    #undef B_Q13

    #define A_Q13 SOLUTION_Q9
    #define B_Q13 SOLUTION

    #include <adder_no_carry.h>

    #undef QUAD_1
    #undef QUAD_2
    #undef QUAD_3
    #undef QUAD_4
    #undef QUAD_5
    #undef QUAD_6
    #undef QUAD_7
    #undef QUAD_8

    #define QUAD_1
    #define QUAD_2
    #define QUAD_3
    #define QUAD_4
    #define QUAD_5
    #define QUAD_6
    #define QUAD_7
    #define QUAD_8

    #undef A_Q7_Q3
    #undef B_Q7_Q3

    #define A_Q7_Q3 SOLUTION_Q13
    #define B_Q7_Q3 SOLUTION_Q11
    #include <divider.h>
  #endif
#endif
