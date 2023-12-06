#include <processed_numbers.h>
#include <full_adder.h>
#include <utils.h>
#include <getdigit.h>

#ifndef QUAD_5
  #undef A_DIV_
  #define A_DIV_ XJOIN(_, A)
  #undef B_DIV_
  #define B_DIV_ XJOIN(_, B)
#endif
#ifdef QUAD_5
  #ifndef QUAD_7
    #undef A_DIV_Q1
    #define A_DIV_Q1 XJOIN(_, A_Q7_Q1)
    #undef B_DIV_Q1
    #define B_DIV_Q1 XJOIN(_, B_Q7_Q1)
  #endif
#endif
#ifdef QUAD_7
  #ifndef QUAD_8
    #undef A_DIV_Q2
    #define A_DIV_Q2 XJOIN(_, A_Q7_Q2)
    #undef B_DIV_Q2
    #define B_DIV_Q2 XJOIN(_, B_Q7_Q2)
  #endif
#endif
#ifdef QUAD_8
  #ifndef QUAD_9
    #undef A_DIV_Q3
    #define A_DIV_Q3 XJOIN(_, A_Q7_Q3)
    #undef B_DIV_Q3
    #define B_DIV_Q3 XJOIN(_, B_Q7_Q3)
  #endif
#endif

#ifndef QUAD_5
  #undef DIG1
  #undef REM1
  #undef DIG2
  #undef REM2
  #undef DIG3
  #undef REM3
  #undef DIG4
  #undef REM4
  #undef DIG5
  #undef REM5
  #undef DIG6
  #undef REM6

  #undef SOLUTION1
  #undef SOLUTION3
  #undef SOLUTION4_Q0
  #undef SOLUTION7
  #undef SOLUTION8
  #undef SOLUTION9
  #undef SOLUTION10
  #undef SOLUTION11
  #undef SOLUTION12
  #undef SOLUTION13
  #undef SOLUTION14
#else
  #ifndef QUAD_7
    #undef DIG1_Q1
    #undef REM1_Q1
    #undef DIG2_Q1
    #undef REM2_Q1
    #undef DIG3_Q1
    #undef REM3_Q1
    #undef DIG4_Q1
    #undef REM4_Q1
    #undef DIG5_Q1
    #undef REM5_Q1
    #undef DIG6_Q1
    #undef REM6_Q1

    #undef SOLUTION1_Q1
    #undef SOLUTION3_Q1
    #undef SOLUTION4_Q1
    #undef SOLUTION7_Q1
    #undef SOLUTION8_Q1
    #undef SOLUTION9_Q1
    #undef SOLUTION10_Q1
    #undef SOLUTION11_Q1
    #undef SOLUTION12_Q1
    #undef SOLUTION13_Q1
    #undef SOLUTION14_Q1
  #endif
#endif
#ifdef QUAD_7
  #ifndef QUAD_8
    #undef DIG1_Q2
    #undef REM1_Q2
    #undef DIG2_Q2
    #undef REM2_Q2
    #undef DIG3_Q2
    #undef REM3_Q2
    #undef DIG4_Q2
    #undef REM4_Q2
    #undef DIG5_Q2
    #undef REM5_Q2
    #undef DIG6_Q2
    #undef REM6_Q2

    #undef SOLUTION1_Q2
    #undef SOLUTION3_Q2
    #undef SOLUTION4_Q2
    #undef SOLUTION7_Q2
    #undef SOLUTION8_Q2
    #undef SOLUTION9_Q2
    #undef SOLUTION10_Q2
    #undef SOLUTION11_Q2
    #undef SOLUTION12_Q2
    #undef SOLUTION13_Q2
    #undef SOLUTION14_Q2
  #endif
#endif
#ifdef QUAD_8
  #ifndef QUAD_9
    #undef DIG1_Q3
    #undef REM1_Q3
    #undef DIG2_Q3
    #undef REM2_Q3
    #undef DIG3_Q3
    #undef REM3_Q3
    #undef DIG4_Q3
    #undef REM4_Q3
    #undef DIG5_Q3
    #undef REM5_Q3
    #undef DIG6_Q3
    #undef REM6_Q3

    #undef SOLUTION1_Q3
    #undef SOLUTION3_Q3
    #undef SOLUTION4_Q3
    #undef SOLUTION7_Q3
    #undef SOLUTION8_Q3
    #undef SOLUTION9_Q3
    #undef SOLUTION10_Q3
    #undef SOLUTION11_Q3
    #undef SOLUTION12_Q3
    #undef SOLUTION13_Q3
    #undef SOLUTION14_Q3
  #endif
#endif

#ifndef QUAD_5

#if ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)) >= B
  #define SQRT_1
  #undef C
  #undef D
  #define C 9
  #define D B
  #include <multiplier.h>
  #if SOLUTION1 > ARGN(0, (A_DIV_, 0, 0, 0, 0, 0))
    #undef C
    #define C 8
    #include <multiplier.h>
    #if SOLUTION1 > ARGN(0, (A_DIV_, 0, 0, 0, 0, 0))
      #undef C
      #define C 7
      #include <multiplier.h>
      #if SOLUTION1 > ARGN(0, (A_DIV_, 0, 0, 0, 0, 0))
        #undef C
        #define C 6
        #include <multiplier.h>
        #if SOLUTION1 > ARGN(0, (A_DIV_, 0, 0, 0, 0, 0))
          #undef C
          #define C 5
          #include <multiplier.h>
          #if SOLUTION1 > ARGN(0, (A_DIV_, 0, 0, 0, 0, 0))
            #undef C
            #define C 4
            #include <multiplier.h>
            #if SOLUTION1 > ARGN(0, (A_DIV_, 0, 0, 0, 0, 0))
              #undef C
              #define C 3
              #include <multiplier.h>
              #if SOLUTION1 > ARGN(0, (A_DIV_, 0, 0, 0, 0, 0))
                #undef C
                #define C 2
                #include <multiplier.h>
                #if SOLUTION1 > ARGN(0, (A_DIV_, 0, 0, 0, 0, 0))
                  #define DIG1 1
                  #define REM1 B
                #else
                  #define DIG1 2
                  #define REM1 SOLUTION1
                #endif
              #else
                #define DIG1 3
                #define REM1 SOLUTION1
              #endif
            #else
              #define DIG1 4
              #define REM1 SOLUTION1
            #endif
          #else
            #define DIG1 5
            #define REM1 SOLUTION1
          #endif
        #else
          #define DIG1 6
          #define REM1 SOLUTION1
        #endif
      #else
        #define DIG1 7
        #define REM1 SOLUTION1
      #endif
    #else
      #define DIG1 8
      #define REM1 SOLUTION1
    #endif
  #else
    #define DIG1 9
    #define REM1 SOLUTION1
  #endif
#elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0) >= B
  #define DIG1 0
  #define SQRT_1
  #undef C
  #undef D
  #define C 9
  #define D B
  #include <multiplier.h>
  #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
    #undef C
    #define C 8
    #include <multiplier.h>
    #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
      #undef C
      #define C 7
      #include <multiplier.h>
      #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
        #undef C
        #define C 6
        #include <multiplier.h>
        #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
          #undef C
          #define C 5
          #include <multiplier.h>
          #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
            #undef C
            #define C 4
            #include <multiplier.h>
            #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
              #undef C
              #define C 3
              #include <multiplier.h>
              #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
                #undef C
                #define C 2
                #include <multiplier.h>
                #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
                  #define DIG2 1
                  #define REM2 B
                #else
                  #define DIG2 2
                  #define REM2 SOLUTION1
                #endif
              #else
                #define DIG2 3
                #define REM2 SOLUTION1
              #endif
            #else
              #define DIG2 4
              #define REM2 SOLUTION1
            #endif
          #else
            #define DIG2 5
            #define REM2 SOLUTION1
          #endif
        #else
          #define DIG2 6
          #define REM2 SOLUTION1
        #endif
      #else
        #define DIG2 7
        #define REM2 SOLUTION1
      #endif
    #else
      #define DIG2 8
      #define REM2 SOLUTION1
    #endif
  #else
    #define DIG2 9
    #define REM2 SOLUTION1
  #endif
#elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0) >= B
  #define DIG1 0
  #define DIG2 0
  #define SQRT_1
  #undef C
  #undef D
  #define C 9
  #define D B
  #include <multiplier.h>
  #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
    #undef C
    #define C 8
    #include <multiplier.h>
    #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
      #undef C
      #define C 7
      #include <multiplier.h>
      #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
        #undef C
        #define C 6
        #include <multiplier.h>
        #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
          #undef C
          #define C 5
          #include <multiplier.h>
          #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
            #undef C
            #define C 4
            #include <multiplier.h>
            #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
              #undef C
              #define C 3
              #include <multiplier.h>
              #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                #undef C
                #define C 2
                #include <multiplier.h>
                #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                  #define DIG3 1
                  #define REM3 B
                #else
                  #define DIG3 2
                  #define REM3 SOLUTION1
                #endif
              #else
                #define DIG3 3
                #define REM3 SOLUTION1
              #endif
            #else
              #define DIG3 4
              #define REM3 SOLUTION1
            #endif
          #else
            #define DIG3 5
            #define REM3 SOLUTION1
          #endif
        #else
          #define DIG3 6
          #define REM3 SOLUTION1
        #endif
      #else
        #define DIG3 7
        #define REM3 SOLUTION1
      #endif
    #else
      #define DIG3 8
      #define REM3 SOLUTION1
    #endif
  #else
    #define DIG3 9
    #define REM3 SOLUTION1
  #endif
#elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0) >= B
  #define DIG1 0
  #define DIG2 0
  #define DIG3 0
  #define SQRT_1
  #undef C
  #undef D
  #define C 9
  #define D B
  #include <multiplier.h>
  #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
    #undef C
    #define C 8
    #include <multiplier.h>
    #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef C
      #define C 7
      #include <multiplier.h>
      #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
        #undef C
        #define C 6
        #include <multiplier.h>
        #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
          #undef C
          #define C 5
          #include <multiplier.h>
          #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
            #undef C
            #define C 4
            #include <multiplier.h>
            #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
              #undef C
              #define C 3
              #include <multiplier.h>
              #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                #undef C
                #define C 2
                #include <multiplier.h>
                #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                  #define DIG4 1
                  #define REM4 B
                #else
                  #define DIG4 2
                  #define REM4 SOLUTION1
                #endif
              #else
                #define DIG4 3
                #define REM4 SOLUTION1
              #endif
            #else
              #define DIG4 4
              #define REM4 SOLUTION1
            #endif
          #else
            #define DIG4 5
            #define REM4 SOLUTION1
          #endif
        #else
          #define DIG4 6
          #define REM4 SOLUTION1
        #endif
      #else
        #define DIG4 7
        #define REM4 SOLUTION1
      #endif
    #else
      #define DIG4 8
      #define REM4 SOLUTION1
    #endif
  #else
    #define DIG4 9
    #define REM4 SOLUTION1
  #endif
#elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0) >= B
  #define DIG1 0
  #define DIG2 0
  #define DIG3 0
  #define DIG4 0
  #define SQRT_1
  #undef C
  #undef D
  #define C 9
  #define D B
  #include <multiplier.h>
  #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
    #undef C
    #define C 8
    #include <multiplier.h>
    #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
      #undef C
      #define C 7
      #include <multiplier.h>
      #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
        #undef C
        #define C 6
        #include <multiplier.h>
        #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
          #undef C
          #define C 5
          #include <multiplier.h>
          #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
            #undef C
            #define C 4
            #include <multiplier.h>
            #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
              #undef C
              #define C 3
              #include <multiplier.h>
              #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                #undef C
                #define C 2
                #include <multiplier.h>
                #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                  #define DIG5 1
                  #define REM5 B
                #else
                  #define DIG5 2
                  #define REM5 SOLUTION1
                #endif
              #else
                #define DIG5 3
                #define REM5 SOLUTION1
              #endif
            #else
              #define DIG5 4
              #define REM5 SOLUTION1
            #endif
          #else
            #define DIG5 5
            #define REM5 SOLUTION1
          #endif
        #else
          #define DIG5 6
          #define REM5 SOLUTION1
        #endif
      #else
        #define DIG5 7
        #define REM5 SOLUTION1
      #endif
    #else
      #define DIG5 8
      #define REM5 SOLUTION1
    #endif
  #else
    #define DIG5 9
    #define REM5 SOLUTION1
  #endif
#elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B
  #define DIG1 0
  #define DIG2 0
  #define DIG3 0
  #define DIG4 0
  #define DIG5 0
  #define SQRT_1
  #undef C
  #undef D
  #define C 9
  #define D B
  #include <multiplier.h>
  #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
    #undef C
    #define C 8
    #include <multiplier.h>
    #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef C
      #define C 7
      #include <multiplier.h>
      #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef C
        #define C 6
        #include <multiplier.h>
        #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef C
          #define C 5
          #include <multiplier.h>
          #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef C
            #define C 4
            #include <multiplier.h>
            #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef C
              #define C 3
              #include <multiplier.h>
              #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef C
                #define C 2
                #include <multiplier.h>
                #if SOLUTION1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #define DIG6 1
                  #define REM6 B
                #else
                  #define DIG6 2
                  #define REM6 SOLUTION1
                #endif
              #else
                #define DIG6 3
                #define REM6 SOLUTION1
              #endif
            #else
              #define DIG6 4
              #define REM6 SOLUTION1
            #endif
          #else
            #define DIG6 5
            #define REM6 SOLUTION1
          #endif
        #else
          #define DIG6 6
          #define REM6 SOLUTION1
        #endif
      #else
        #define DIG6 7
        #define REM6 SOLUTION1
      #endif
    #else
      #define DIG6 8
      #define REM6 SOLUTION1
    #endif
  #else
    #define DIG6 9
    #define REM6 SOLUTION1
  #endif
#else
  #define DIG1 0
  #define DIG2 0
  #define DIG3 0
  #define DIG4 0
  #define DIG5 0
  #define DIG6 0
#endif
#ifndef DIG2
  #undef I
  #undef J
  #define I A
  #define J ASSEMBLE(REM1, 0, 0, 0, 0, 0)
  #include <subtractor.h>
  #if ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0) >= B
    #undef SQRT_2
    #define SQRT_2
    #undef G
    #undef H
    #define G 9
    #define H B
    #include <multiplier.h>
    #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
      #undef G
      #define G 8
      #include <multiplier.h>
      #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
        #undef G
        #define G 7
        #include <multiplier.h>
        #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
          #undef G
          #define G 6
          #include <multiplier.h>
          #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
            #undef G
            #define G 5
            #include <multiplier.h>
            #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
              #undef G
              #define G 4
              #include <multiplier.h>
              #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
                #undef G
                #define G 3
                #include <multiplier.h>
                #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
                  #undef G
                  #define G 2
                  #include <multiplier.h>
                  #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
                    #define DIG2 1
                    #define REM2 B
                  #else
                    #define DIG2 2
                    #define REM2 SOLUTION3
                  #endif
                #else
                  #define DIG2 3
                  #define REM2 SOLUTION3
                #endif
              #else
                #define DIG2 4
                #define REM2 SOLUTION3
              #endif
            #else
              #define DIG2 5
              #define REM2 SOLUTION3
            #endif
          #else
            #define DIG2 6
            #define REM2 SOLUTION3
          #endif
        #else
          #define DIG2 7
          #define REM2 SOLUTION3
        #endif
      #else
        #define DIG2 8
        #define REM2 SOLUTION3
      #endif
    #else
      #define DIG2 9
      #define REM2 SOLUTION3
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0))))), , 0, 0, 0, 0, 0) >= B
    #define DIG2 0
    #undef SQRT_2
    #define SQRT_2
    #undef G
    #undef H
    #define G 9
    #define H B
    #include <multiplier.h>
    #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
      #undef G
      #define G 8
      #include <multiplier.h>
      #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
        #undef G
        #define G 7
        #include <multiplier.h>
        #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
          #undef G
          #define G 6
          #include <multiplier.h>
          #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
            #undef G
            #define G 5
            #include <multiplier.h>
            #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
              #undef G
              #define G 4
              #include <multiplier.h>
              #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                #undef G
                #define G 3
                #include <multiplier.h>
                #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                  #undef G
                  #define G 2
                  #include <multiplier.h>
                  #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                    #define DIG3 1
                    #define REM3 B
                  #else
                    #define DIG3 2
                    #define REM3 SOLUTION3
                  #endif
                #else
                  #define DIG3 3
                  #define REM3 SOLUTION3
                #endif
              #else
                #define DIG3 4
                #define REM3 SOLUTION3
              #endif
            #else
              #define DIG3 5
              #define REM3 SOLUTION3
            #endif
          #else
            #define DIG3 6
            #define REM3 SOLUTION3
          #endif
        #else
          #define DIG3 7
          #define REM3 SOLUTION3
        #endif
      #else
        #define DIG3 8
        #define REM3 SOLUTION3
      #endif
    #else
      #define DIG3 9
      #define REM3 SOLUTION3
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0) >= B
    #define DIG2 0
    #define DIG3 0
    #undef SQRT_2
    #define SQRT_2
    #undef G
    #undef H
    #define G 9
    #define H B
    #include <multiplier.h>
    #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
      #undef G
      #define G 8
      #include <multiplier.h>
      #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
        #undef G
        #define G 7
        #include <multiplier.h>
        #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
          #undef G
          #define G 6
          #include <multiplier.h>
          #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
            #undef G
            #define G 5
            #include <multiplier.h>
            #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
              #undef G
              #define G 4
              #include <multiplier.h>
              #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                #undef G
                #define G 3
                #include <multiplier.h>
                #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                  #undef G
                  #define G 2
                  #include <multiplier.h>
                  #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                    #define DIG4 1
                    #define REM4 B
                  #else
                    #define DIG4 2
                    #define REM4 SOLUTION3
                  #endif
                #else
                  #define DIG4 3
                  #define REM4 SOLUTION3
                #endif
              #else
                #define DIG4 4
                #define REM4 SOLUTION3
              #endif
            #else
              #define DIG4 5
              #define REM4 SOLUTION3
            #endif
          #else
            #define DIG4 6
            #define REM4 SOLUTION3
          #endif
        #else
          #define DIG4 7
          #define REM4 SOLUTION3
        #endif
      #else
        #define DIG4 8
        #define REM4 SOLUTION3
      #endif
    #else
      #define DIG4 9
      #define REM4 SOLUTION3
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0) >= B
    #define DIG2 0
    #define DIG3 0
    #define DIG4 0
    #undef SQRT_2
    #define SQRT_2
    #undef G
    #undef H
    #define G 9
    #define H B
    #include <multiplier.h>
    #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
      #undef G
      #define G 8
      #include <multiplier.h>
      #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
        #undef G
        #define G 7
        #include <multiplier.h>
        #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
          #undef G
          #define G 6
          #include <multiplier.h>
          #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
            #undef G
            #define G 5
            #include <multiplier.h>
            #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
              #undef G
              #define G 4
              #include <multiplier.h>
              #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                #undef G
                #define G 3
                #include <multiplier.h>
                #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                  #undef G
                  #define G 2
                  #include <multiplier.h>
                  #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                    #define DIG5 1
                    #define REM5 B
                  #else
                    #define DIG5 2
                    #define REM5 SOLUTION3
                  #endif
                #else
                  #define DIG5 3
                  #define REM5 SOLUTION3
                #endif
              #else
                #define DIG5 4
                #define REM5 SOLUTION3
              #endif
            #else
              #define DIG5 5
              #define REM5 SOLUTION3
            #endif
          #else
            #define DIG5 6
            #define REM5 SOLUTION3
          #endif
        #else
          #define DIG5 7
          #define REM5 SOLUTION3
        #endif
      #else
        #define DIG5 8
        #define REM5 SOLUTION3
      #endif
    #else
      #define DIG5 9
      #define REM5 SOLUTION3
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B
    #define DIG2 0
    #define DIG3 0
    #define DIG4 0
    #define DIG5 0
    #undef SQRT_2
    #define SQRT_2
    #undef G
    #undef H
    #define G 9
    #define H B
    #include <multiplier.h>
    #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef G
      #define G 8
      #include <multiplier.h>
      #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef G
        #define G 7
        #include <multiplier.h>
        #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef G
          #define G 6
          #include <multiplier.h>
          #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef G
            #define G 5
            #include <multiplier.h>
            #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef G
              #define G 4
              #include <multiplier.h>
              #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef G
                #define G 3
                #include <multiplier.h>
                #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #undef G
                  #define G 2
                  #include <multiplier.h>
                  #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q0), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                    #define DIG6 1
                    #define REM6 B
                  #else
                    #define DIG6 2
                    #define REM6 SOLUTION3
                  #endif
                #else
                  #define DIG6 3
                  #define REM6 SOLUTION3
                #endif
              #else
                #define DIG6 4
                #define REM6 SOLUTION3
              #endif
            #else
              #define DIG6 5
              #define REM6 SOLUTION3
            #endif
          #else
            #define DIG6 6
            #define REM6 SOLUTION3
          #endif
        #else
          #define DIG6 7
          #define REM6 SOLUTION3
        #endif
      #else
        #define DIG6 8
        #define REM6 SOLUTION3
      #endif
    #else
      #define DIG6 9
      #define REM6 SOLUTION3
    #endif
  #else
    #define DIG2 0
    #define DIG3 0
    #define DIG4 0
    #define DIG5 0
    #define DIG6 0
  #endif
#endif
#ifndef DIG3
  #undef SQRT_2
  #undef SQRT_3
  #undef SQRT_4
  #define SQRT_2
  #define SQRT_3
  #define SQRT_4
  #undef Q
  #undef R
  #ifdef SOLUTION4_Q0
    #define Q SOLUTION4_Q0
  #else
    #define Q A
  #endif
  #define R XJOIN(REM2, 0000)
  #include <subtractor.h>
  #if ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0) >= B
    #undef O
    #undef P
    #define O 9
    #define P B
    #include <multiplier.h>
    #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
      #undef O
      #define O 8
      #include <multiplier.h>
      #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
        #undef O
        #define O 7
        #include <multiplier.h>
        #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
          #undef O
          #define O 6
          #include <multiplier.h>
          #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
            #undef O
            #define O 5
            #include <multiplier.h>
            #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
              #undef O
              #define O 4
              #include <multiplier.h>
              #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                #undef O
                #define O 3
                #include <multiplier.h>
                #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                  #undef O
                  #define O 2
                  #include <multiplier.h>
                  #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                    #define DIG3 1
                    #define REM3 B
                  #else
                    #define DIG3 2
                    #define REM3 SOLUTION7
                  #endif
                #else
                  #define DIG3 3
                  #define REM3 SOLUTION7
                #endif
              #else
                #define DIG3 4
                #define REM3 SOLUTION7
              #endif
            #else
              #define DIG3 5
              #define REM3 SOLUTION7
            #endif
          #else
            #define DIG3 6
            #define REM3 SOLUTION7
          #endif
        #else
          #define DIG3 7
          #define REM3 SOLUTION7
        #endif
      #else
        #define DIG3 8
        #define REM3 SOLUTION7
      #endif
    #else
      #define DIG3 9
      #define REM3 SOLUTION7
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0) >= B
    #define DIG3 0
    #undef O
    #undef P
    #define O 9
    #define P B
    #include <multiplier.h>
    #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
      #undef O
      #define O 8
      #include <multiplier.h>
      #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
        #undef O
        #define O 7
        #include <multiplier.h>
        #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
          #undef O
          #define O 6
          #include <multiplier.h>
          #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
            #undef O
            #define O 5
            #include <multiplier.h>
            #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
              #undef O
              #define O 4
              #include <multiplier.h>
              #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                #undef O
                #define O 3
                #include <multiplier.h>
                #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                  #undef O
                  #define O 2
                  #include <multiplier.h>
                  #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                    #define DIG4 1
                    #define REM4 B
                  #else
                    #define DIG4 2
                    #define REM4 SOLUTION7
                  #endif
                #else
                  #define DIG4 3
                  #define REM4 SOLUTION7
                #endif
              #else
                #define DIG4 4
                #define REM4 SOLUTION7
              #endif
            #else
              #define DIG4 5
              #define REM4 SOLUTION7
            #endif
          #else
            #define DIG4 6
            #define REM4 SOLUTION7
          #endif
        #else
          #define DIG4 7
          #define REM4 SOLUTION7
        #endif
      #else
        #define DIG4 8
        #define REM4 SOLUTION7
      #endif
    #else
      #define DIG4 9
      #define REM4 SOLUTION7
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0) >= B
    #define DIG3 0
    #define DIG4 0
    #undef O
    #undef P
    #define O 9
    #define P B
    #include <multiplier.h>
    #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
      #undef O
      #define O 8
      #include <multiplier.h>
      #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
        #undef O
        #define O 7
        #include <multiplier.h>
        #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
          #undef O
          #define O 6
          #include <multiplier.h>
          #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
            #undef O
            #define O 5
            #include <multiplier.h>
            #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
              #undef O
              #define O 4
              #include <multiplier.h>
              #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                #undef O
                #define O 3
                #include <multiplier.h>
                #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                  #undef O
                  #define O 2
                  #include <multiplier.h>
                  #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                    #define DIG5 1
                    #define REM5 B
                  #else
                    #define DIG5 2
                    #define REM5 SOLUTION7
                  #endif
                #else
                  #define DIG5 3
                  #define REM5 SOLUTION7
                #endif
              #else
                #define DIG5 4
                #define REM5 SOLUTION7
              #endif
            #else
              #define DIG5 5
              #define REM5 SOLUTION7
            #endif
          #else
            #define DIG5 6
            #define REM5 SOLUTION7
          #endif
        #else
          #define DIG5 7
          #define REM5 SOLUTION7
        #endif
      #else
        #define DIG5 8
        #define REM5 SOLUTION7
      #endif
    #else
      #define DIG5 9
      #define REM5 SOLUTION7
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B
    #define DIG3 0
    #define DIG4 0
    #define DIG5 0
    #undef O
    #undef P
    #define O 9
    #define P B
    #include <multiplier.h>
    #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef O
      #define O 8
      #include <multiplier.h>
      #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef O
        #define O 7
        #include <multiplier.h>
        #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef O
          #define O 6
          #include <multiplier.h>
          #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef O
            #define O 5
            #include <multiplier.h>
            #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef O
              #define O 4
              #include <multiplier.h>
              #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef O
                #define O 3
                #include <multiplier.h>
                #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #undef O
                  #define O 2
                  #include <multiplier.h>
                  #if SOLUTION7 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                    #define DIG6 1
                    #define REM6 B
                  #else
                    #define DIG6 2
                    #define REM6 SOLUTION7
                  #endif
                #else
                  #define DIG6 3
                  #define REM6 SOLUTION7
                #endif
              #else
                #define DIG6 4
                #define REM6 SOLUTION7
              #endif
            #else
              #define DIG6 5
              #define REM6 SOLUTION7
            #endif
          #else
            #define DIG6 6
            #define REM6 SOLUTION7
          #endif
        #else
          #define DIG6 7
          #define REM6 SOLUTION7
        #endif
      #else
        #define DIG6 8
        #define REM6 SOLUTION7
      #endif
    #else
      #define DIG6 9
      #define REM6 SOLUTION7
    #endif
  #else
    #define DIG3 0
    #define DIG4 0
    #define DIG5 0
    #define DIG6 0
  #endif
#endif

#ifndef DIG4
  #undef SQRT_2
  #undef SQRT_3
  #undef SQRT_4
  #undef SQRT_5
  #define SQRT_2
  #define SQRT_3
  #define SQRT_4
  #define SQRT_5
  #undef Y
  #undef Z
  #ifdef SOLUTION8
    #define Y SOLUTION8
  #else
    #ifdef SOLUTION4_Q0
      #define Y SOLUTION4_Q0
    #else
      #define Y A
    #endif
  #endif
  #define Z XJOIN(REM3, 000)
  #include <subtractor.h>
  #if ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0) >= B
    #undef S
    #undef T
    #define S 9
    #define T B
    #include <multiplier.h>
    #if SOLUTION9 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
      #undef S
      #define S 8
      #include <multiplier.h>
      #if SOLUTION9 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
        #undef S
        #define S 7
        #include <multiplier.h>
        #if SOLUTION9 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
          #undef S
          #define S 6
          #include <multiplier.h>
          #if SOLUTION9 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
            #undef S
            #define S 5
            #include <multiplier.h>
            #if SOLUTION9 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
              #undef S
              #define S 4
              #include <multiplier.h>
              #if SOLUTION9 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                #undef S
                #define S 3
                #include <multiplier.h>
                #if SOLUTION9 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                  #undef S
                  #define S 2
                  #include <multiplier.h>
                  #if SOLUTION9 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                    #define DIG4 1
                    #define REM4 B
                  #else
                    #define DIG4 2
                    #define REM4 SOLUTION9
                  #endif
                #else
                  #define DIG4 3
                  #define REM4 SOLUTION9
                #endif
              #else
                #define DIG4 4
                #define REM4 SOLUTION9
              #endif
            #else
              #define DIG4 5
              #define REM4 SOLUTION9
            #endif
          #else
            #define DIG4 6
            #define REM4 SOLUTION9
          #endif
        #else
          #define DIG4 7
          #define REM4 SOLUTION9
        #endif
      #else
        #define DIG4 8
        #define REM4 SOLUTION9
      #endif
    #else
      #define DIG4 9
      #define REM4 SOLUTION9
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0) >= B
    #define DIG4 0
    #undef S
    #undef T
    #define S 9
    #define T B
    #include <multiplier.h>
    #if SOLUTION9 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
      #undef S
      #define S 8
      #include <multiplier.h>
      #if SOLUTION9 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
        #undef S
        #define S 7
        #include <multiplier.h>
        #if SOLUTION9 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
          #undef S
          #define S 6
          #include <multiplier.h>
          #if SOLUTION9 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
            #undef S
            #define S 5
            #include <multiplier.h>
            #if SOLUTION9 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
              #undef S
              #define S 4
              #include <multiplier.h>
              #if SOLUTION9 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                #undef S
                #define S 3
                #include <multiplier.h>
                #if SOLUTION9 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                  #undef S
                  #define S 2
                  #include <multiplier.h>
                  #if SOLUTION9 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                    #define DIG5 1
                    #define REM5 B
                  #else
                    #define DIG5 2
                    #define REM5 SOLUTION9
                  #endif
                #else
                  #define DIG5 3
                  #define REM5 SOLUTION9
                #endif
              #else
                #define DIG5 4
                #define REM5 SOLUTION9
              #endif
            #else
              #define DIG5 5
              #define REM5 SOLUTION9
            #endif
          #else
            #define DIG5 6
            #define REM5 SOLUTION9
          #endif
        #else
          #define DIG5 7
          #define REM5 SOLUTION9
        #endif
      #else
        #define DIG5 8
        #define REM5 SOLUTION9
      #endif
    #else
      #define DIG5 9
      #define REM5 SOLUTION9
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B
    #define DIG4 0
    #define DIG5 0
    #undef S
    #undef T
    #define S 9
    #define T B
    #include <multiplier.h>
    #if SOLUTION9 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef S
      #define S 8
      #include <multiplier.h>
      #if SOLUTION9 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef S
        #define S 7
        #include <multiplier.h>
        #if SOLUTION9 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef S
          #define S 6
          #include <multiplier.h>
          #if SOLUTION9 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef S
            #define S 5
            #include <multiplier.h>
            #if SOLUTION9 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef S
              #define S 4
              #include <multiplier.h>
              #if SOLUTION9 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef S
                #define S 3
                #include <multiplier.h>
                #if SOLUTION9 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #undef S
                  #define S 2
                  #include <multiplier.h>
                  #if SOLUTION9 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                    #define DIG6 1
                    #define REM6 B
                  #else
                    #define DIG6 2
                    #define REM6 SOLUTION9
                  #endif
                #else
                  #define DIG6 3
                  #define REM6 SOLUTION9
                #endif
              #else
                #define DIG6 4
                #define REM6 SOLUTION9
              #endif
            #else
              #define DIG6 5
              #define REM6 SOLUTION9
            #endif
          #else
            #define DIG6 6
            #define REM6 SOLUTION9
          #endif
        #else
          #define DIG6 7
          #define REM6 SOLUTION9
        #endif
      #else
        #define DIG6 8
        #define REM6 SOLUTION9
      #endif
    #else
      #define DIG6 9
      #define REM6 SOLUTION9
    #endif
  #else
    #define DIG4 0
    #define DIG5 0
    #define DIG6 0
  #endif
#endif

#ifndef DIG5
  #undef SQRT_2
  #undef SQRT_3
  #undef SQRT_4
  #undef SQRT_5
  #undef SQRT_6
  #define SQRT_2
  #define SQRT_3
  #define SQRT_4
  #define SQRT_5
  #define SQRT_6
  #undef Y1
  #undef Z1
  #ifdef SOLUTION10
    #define Y1 SOLUTION10
  #else
    #ifdef SOLUTION8
      #define Y1 SOLUTION8
    #else
      #ifdef SOLUTION4_Q0
        #define Y1 SOLUTION4_Q0
      #else
        #define Y1 A
      #endif
    #endif
  #endif
  #define Z1 XJOIN(REM4, 00)
  #include <subtractor.h>
  #if ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0) >= B
    #undef W
    #undef X
    #define W 9
    #define X B
    #include <multiplier.h>
    #if SOLUTION11 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
      #undef W
      #define W 8
      #include <multiplier.h>
      #if SOLUTION11 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
        #undef W
        #define W 7
        #include <multiplier.h>
        #if SOLUTION11 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
          #undef W
          #define W 6
          #include <multiplier.h>
          #if SOLUTION11 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
            #undef W
            #define W 5
            #include <multiplier.h>
            #if SOLUTION11 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
              #undef W
              #define W 4
              #include <multiplier.h>
              #if SOLUTION11 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                #undef W
                #define W 3
                #include <multiplier.h>
                #if SOLUTION11 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                  #undef W
                  #define W 2
                  #include <multiplier.h>
                  #if SOLUTION11 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                    #define DIG5 1
                    #define REM5 B
                  #else
                    #define DIG5 2
                    #define REM5 SOLUTION11
                  #endif
                #else
                  #define DIG5 3
                  #define REM5 SOLUTION11
                #endif
              #else
                #define DIG5 4
                #define REM5 SOLUTION11
              #endif
            #else
              #define DIG5 5
              #define REM5 SOLUTION11
            #endif
          #else
            #define DIG5 6
            #define REM5 SOLUTION11
          #endif
        #else
          #define DIG5 7
          #define REM5 SOLUTION11
        #endif
      #else
        #define DIG5 8
        #define REM5 SOLUTION11
      #endif
    #else
      #define DIG5 9
      #define REM5 SOLUTION11
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B
    #define DIG5 0
    #undef W
    #undef X
    #define W 9
    #define X B
    #include <multiplier.h>
    #if SOLUTION11 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef W
      #define W 8
      #include <multiplier.h>
      #if SOLUTION11 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef W
        #define W 7
        #include <multiplier.h>
        #if SOLUTION11 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef W
          #define W 6
          #include <multiplier.h>
          #if SOLUTION11 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef W
            #define W 5
            #include <multiplier.h>
            #if SOLUTION11 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef W
              #define W 4
              #include <multiplier.h>
              #if SOLUTION11 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef W
                #define W 3
                #include <multiplier.h>
                #if SOLUTION11 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #undef W
                  #define W 2
                  #include <multiplier.h>
                  #if SOLUTION11 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                    #define DIG6 1
                    #define REM6 B
                  #else
                    #define DIG6 2
                    #define REM6 SOLUTION11
                  #endif
                #else
                  #define DIG6 3
                  #define REM6 SOLUTION11
                #endif
              #else
                #define DIG6 4
                #define REM6 SOLUTION11
              #endif
            #else
              #define DIG6 5
              #define REM6 SOLUTION11
            #endif
          #else
            #define DIG6 6
            #define REM6 SOLUTION11
          #endif
        #else
          #define DIG6 7
          #define REM6 SOLUTION11
        #endif
      #else
        #define DIG6 8
        #define REM6 SOLUTION11
      #endif
    #else
      #define DIG6 9
      #define REM6 SOLUTION11
    #endif
  #else
    #define DIG5 0
    #define DIG6 0
  #endif
#endif

#ifndef DIG6
  #undef SQRT_2
  #undef SQRT_3
  #undef SQRT_4
  #undef SQRT_5
  #undef SQRT_6
  #undef SQRT_7
  #define SQRT_2
  #define SQRT_3
  #define SQRT_4
  #define SQRT_5
  #define SQRT_6
  #define SQRT_7
  #undef Y2
  #undef Z2
  #ifdef SOLUTION12
    #define Y2 SOLUTION12
  #else
    #ifdef SOLUTION10
      #define Y2 SOLUTION10
    #else
      #ifdef SOLUTION8
        #define Y2 SOLUTION8
      #else
        #ifdef SOLUTION4_Q0
          #define Y2 SOLUTION4_Q0
        #else
          #define Y2 A
        #endif
      #endif
    #endif
  #endif
  #define Z2 XJOIN(REM5, 0)
  #include <subtractor.h>
  #if ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B
    #undef W1
    #undef X1
    #define W1 9
    #define X1 B
    #include <multiplier.h>
    #if SOLUTION13 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef W1
      #define W1 8
      #include <multiplier.h>
      #if SOLUTION13 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef W1
        #define W1 7
        #include <multiplier.h>
        #if SOLUTION13 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef W1
          #define W1 6
          #include <multiplier.h>
          #if SOLUTION13 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef W1
            #define W1 5
            #include <multiplier.h>
            #if SOLUTION13 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef W1
              #define W1 4
              #include <multiplier.h>
              #if SOLUTION13 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef W1
                #define W1 3
                #include <multiplier.h>
                #if SOLUTION13 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #undef W1
                  #define W1 2
                  #include <multiplier.h>
                  #if SOLUTION13 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                    #define DIG6 1
                    #define REM6 B
                  #else
                    #define DIG6 2
                    #define REM6 SOLUTION13
                  #endif
                #else
                  #define DIG6 3
                  #define REM6 SOLUTION13
                #endif
              #else
                #define DIG6 4
                #define REM6 SOLUTION13
              #endif
            #else
              #define DIG6 5
              #define REM6 SOLUTION13
            #endif
          #else
            #define DIG6 6
            #define REM6 SOLUTION13
          #endif
        #else
          #define DIG6 7
          #define REM6 SOLUTION13
        #endif
      #else
        #define DIG6 8
        #define REM6 SOLUTION13
      #endif
    #else
      #define DIG6 9
      #define REM6 SOLUTION13
    #endif
  #else
    #define DIG6 0
  #endif
#endif
#endif
#ifdef QUAD_5
#ifndef QUAD_7
#if ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)) >= B_Q7_Q1
  #define SQRT_1_Q1
  #undef C_Q1
  #undef D_Q1
  #define C_Q1 9
  #define D_Q1 B_Q7_Q1
  #include <multiplier.h>
  #if SOLUTION1_Q1 > ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0))
    #undef C_Q1
    #define C_Q1 8
    #include <multiplier.h>
    #if SOLUTION1_Q1 > ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0))
      #undef C_Q1
      #define C_Q1 7
      #include <multiplier.h>
      #if SOLUTION1_Q1 > ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0))
        #undef C_Q1
        #define C_Q1 6
        #include <multiplier.h>
        #if SOLUTION1_Q1 > ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0))
          #undef C_Q1
          #define C_Q1 5
          #include <multiplier.h>
          #if SOLUTION1_Q1 > ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0))
            #undef C_Q1
            #define C_Q1 4
            #include <multiplier.h>
            #if SOLUTION1_Q1 > ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0))
              #undef C_Q1
              #define C_Q1 3
              #include <multiplier.h>
              #if SOLUTION1_Q1 > ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0))
                #undef C_Q1
                #define C_Q1 2
                #include <multiplier.h>
                #if SOLUTION1_Q1 > ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0))
                  #define DIG1_Q1 1
                  #define REM1_Q1 B_Q7_Q1
                #else
                  #define DIG1_Q1 2
                  #define REM1_Q1 SOLUTION1_Q1
                #endif
              #else
                #define DIG1_Q1 3
                #define REM1_Q1 SOLUTION1_Q1
              #endif
            #else
              #define DIG1_Q1 4
              #define REM1_Q1 SOLUTION1_Q1
            #endif
          #else
            #define DIG1_Q1 5
            #define REM1_Q1 SOLUTION1_Q1
          #endif
        #else
          #define DIG1_Q1 6
          #define REM1_Q1 SOLUTION1_Q1
        #endif
      #else
        #define DIG1_Q1 7
        #define REM1_Q1 SOLUTION1_Q1
      #endif
    #else
      #define DIG1_Q1 8
      #define REM1_Q1 SOLUTION1_Q1
    #endif
  #else
    #define DIG1_Q1 9
    #define REM1_Q1 SOLUTION1_Q1
  #endif
#elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0) >= B_Q7_Q1
  #define DIG1_Q1 0
  #define SQRT_1_Q1
  #undef C_Q1
  #undef D_Q1
  #define C_Q1 9
  #define D_Q1 B_Q7_Q1
  #include <multiplier.h>
  #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
    #undef C_Q1
    #define C_Q1 8
    #include <multiplier.h>
    #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
      #undef C_Q1
      #define C_Q1 7
      #include <multiplier.h>
      #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
        #undef C_Q1
        #define C_Q1 6
        #include <multiplier.h>
        #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
          #undef C_Q1
          #define C_Q1 5
          #include <multiplier.h>
          #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
            #undef C_Q1
            #define C_Q1 4
            #include <multiplier.h>
            #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
              #undef C_Q1
              #define C_Q1 3
              #include <multiplier.h>
              #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
                #undef C_Q1
                #define C_Q1 2
                #include <multiplier.h>
                #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
                  #define DIG2_Q1 1
                  #define REM2_Q1 B_Q7_Q1
                #else
                  #define DIG2_Q1 2
                  #define REM2_Q1 SOLUTION1_Q1
                #endif
              #else
                #define DIG2_Q1 3
                #define REM2_Q1 SOLUTION1_Q1
              #endif
            #else
              #define DIG2_Q1 4
              #define REM2_Q1 SOLUTION1_Q1
            #endif
          #else
            #define DIG2_Q1 5
            #define REM2_Q1 SOLUTION1_Q1
          #endif
        #else
          #define DIG2_Q1 6
          #define REM2_Q1 SOLUTION1_Q1
        #endif
      #else
        #define DIG2_Q1 7
        #define REM2_Q1 SOLUTION1_Q1
      #endif
    #else
      #define DIG2_Q1 8
      #define REM2_Q1 SOLUTION1_Q1
    #endif
  #else
    #define DIG2_Q1 9
    #define REM2_Q1 SOLUTION1_Q1
  #endif
#elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0) >= B_Q7_Q1
  #define DIG1_Q1 0
  #define DIG2_Q1 0
  #define SQRT_1_Q1
  #undef C_Q1
  #undef D_Q1
  #define C_Q1 9
  #define D_Q1 B_Q7_Q1
  #include <multiplier.h>
  #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
    #undef C_Q1
    #define C_Q1 8
    #include <multiplier.h>
    #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
      #undef C_Q1
      #define C_Q1 7
      #include <multiplier.h>
      #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
        #undef C_Q1
        #define C_Q1 6
        #include <multiplier.h>
        #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
          #undef C_Q1
          #define C_Q1 5
          #include <multiplier.h>
          #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
            #undef C_Q1
            #define C_Q1 4
            #include <multiplier.h>
            #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
              #undef C_Q1
              #define C_Q1 3
              #include <multiplier.h>
              #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                #undef C_Q1
                #define C_Q1 2
                #include <multiplier.h>
                #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                  #define DIG3_Q1 1
                  #define REM3_Q1 B_Q7_Q1
                #else
                  #define DIG3_Q1 2
                  #define REM3_Q1 SOLUTION1_Q1
                #endif
              #else
                #define DIG3_Q1 3
                #define REM3_Q1 SOLUTION1_Q1
              #endif
            #else
              #define DIG3_Q1 4
              #define REM3_Q1 SOLUTION1_Q1
            #endif
          #else
            #define DIG3_Q1 5
            #define REM3_Q1 SOLUTION1_Q1
          #endif
        #else
          #define DIG3_Q1 6
          #define REM3_Q1 SOLUTION1_Q1
        #endif
      #else
        #define DIG3_Q1 7
        #define REM3_Q1 SOLUTION1_Q1
      #endif
    #else
      #define DIG3_Q1 8
      #define REM3_Q1 SOLUTION1_Q1
    #endif
  #else
    #define DIG3_Q1 9
    #define REM3_Q1 SOLUTION1_Q1
  #endif
#elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0) >= B_Q7_Q1
  #define DIG1_Q1 0
  #define DIG2_Q1 0
  #define DIG3_Q1 0
  #define SQRT_1_Q1
  #undef C_Q1
  #undef D_Q1
  #define C_Q1 9
  #define D_Q1 B_Q7_Q1
  #include <multiplier.h>
  #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
    #undef C_Q1
    #define C_Q1 8
    #include <multiplier.h>
    #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef C_Q1
      #define C_Q1 7
      #include <multiplier.h>
      #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
        #undef C_Q1
        #define C_Q1 6
        #include <multiplier.h>
        #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
          #undef C_Q1
          #define C_Q1 5
          #include <multiplier.h>
          #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
            #undef C_Q1
            #define C_Q1 4
            #include <multiplier.h>
            #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
              #undef C_Q1
              #define C_Q1 3
              #include <multiplier.h>
              #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                #undef C_Q1
                #define C_Q1 2
                #include <multiplier.h>
                #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                  #define DIG4_Q1 1
                  #define REM4_Q1 B_Q7_Q1
                #else
                  #define DIG4_Q1 2
                  #define REM4_Q1 SOLUTION1_Q1
                #endif
              #else
                #define DIG4_Q1 3
                #define REM4_Q1 SOLUTION1_Q1
              #endif
            #else
              #define DIG4_Q1 4
              #define REM4_Q1 SOLUTION1_Q1
            #endif
          #else
            #define DIG4_Q1 5
            #define REM4_Q1 SOLUTION1_Q1
          #endif
        #else
          #define DIG4_Q1 6
          #define REM4_Q1 SOLUTION1_Q1
        #endif
      #else
        #define DIG4_Q1 7
        #define REM4_Q1 SOLUTION1_Q1
      #endif
    #else
      #define DIG4_Q1 8
      #define REM4_Q1 SOLUTION1_Q1
    #endif
  #else
    #define DIG4_Q1 9
    #define REM4_Q1 SOLUTION1_Q1
  #endif
#elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q1, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0) >= B_Q7_Q1
  #define DIG1_Q1 0
  #define DIG2_Q1 0
  #define DIG3_Q1 0
  #define DIG4_Q1 0
  #define SQRT_1_Q1
  #undef C_Q1
  #undef D_Q1
  #define C_Q1 9
  #define D_Q1 B_Q7_Q1
  #include <multiplier.h>
  #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q1, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
    #undef C_Q1
    #define C_Q1 8
    #include <multiplier.h>
    #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q1, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
      #undef C_Q1
      #define C_Q1 7
      #include <multiplier.h>
      #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q1, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
        #undef C_Q1
        #define C_Q1 6
        #include <multiplier.h>
        #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q1, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
          #undef C_Q1
          #define C_Q1 5
          #include <multiplier.h>
          #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q1, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
            #undef C_Q1
            #define C_Q1 4
            #include <multiplier.h>
            #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q1, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
              #undef C_Q1
              #define C_Q1 3
              #include <multiplier.h>
              #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q1, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                #undef C_Q1
                #define C_Q1 2
                #include <multiplier.h>
                #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q1, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                  #define DIG5_Q1 1
                  #define REM5_Q1 B_Q7_Q1
                #else
                  #define DIG5_Q1 2
                  #define REM5_Q1 SOLUTION1_Q1
                #endif
              #else
                #define DIG5_Q1 3
                #define REM5_Q1 SOLUTION1_Q1
              #endif
            #else
              #define DIG5_Q1 4
              #define REM5_Q1 SOLUTION1_Q1
            #endif
          #else
            #define DIG5_Q1 5
            #define REM5_Q1 SOLUTION1_Q1
          #endif
        #else
          #define DIG5_Q1 6
          #define REM5_Q1 SOLUTION1_Q1
        #endif
      #else
        #define DIG5_Q1 7
        #define REM5_Q1 SOLUTION1_Q1
      #endif
    #else
      #define DIG5_Q1 8
      #define REM5_Q1 SOLUTION1_Q1
    #endif
  #else
    #define DIG5_Q1 9
    #define REM5_Q1 SOLUTION1_Q1
  #endif
#elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q1, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B_Q7_Q1
  #define DIG1_Q1 0
  #define DIG2_Q1 0
  #define DIG3_Q1 0
  #define DIG4_Q1 0
  #define DIG5_Q1 0
  #define SQRT_1_Q1
  #undef C_Q1
  #undef D_Q1
  #define C_Q1 9
  #define D_Q1 B_Q7_Q1
  #include <multiplier.h>
  #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q1, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
    #undef C_Q1
    #define C_Q1 8
    #include <multiplier.h>
    #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q1, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef C_Q1
      #define C_Q1 7
      #include <multiplier.h>
      #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q1, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef C_Q1
        #define C_Q1 6
        #include <multiplier.h>
        #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q1, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef C_Q1
          #define C_Q1 5
          #include <multiplier.h>
          #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q1, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef C_Q1
            #define C_Q1 4
            #include <multiplier.h>
            #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q1, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef C_Q1
              #define C_Q1 3
              #include <multiplier.h>
              #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q1, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef C_Q1
                #define C_Q1 2
                #include <multiplier.h>
                #if SOLUTION1_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q1, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q1, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q1, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #define DIG6_Q1 1
                  #define REM6_Q1 B_Q7_Q1
                #else
                  #define DIG6_Q1 2
                  #define REM6_Q1 SOLUTION1_Q1
                #endif
              #else
                #define DIG6_Q1 3
                #define REM6_Q1 SOLUTION1_Q1
              #endif
            #else
              #define DIG6_Q1 4
              #define REM6_Q1 SOLUTION1_Q1
            #endif
          #else
            #define DIG6_Q1 5
            #define REM6_Q1 SOLUTION1_Q1
          #endif
        #else
          #define DIG6_Q1 6
          #define REM6_Q1 SOLUTION1_Q1
        #endif
      #else
        #define DIG6_Q1 7
        #define REM6_Q1 SOLUTION1_Q1
      #endif
    #else
      #define DIG6_Q1 8
      #define REM6_Q1 SOLUTION1_Q1
    #endif
  #else
    #define DIG6_Q1 9
    #define REM6_Q1 SOLUTION1_Q1
  #endif
#else
  #define DIG1_Q1 0
  #define DIG2_Q1 0
  #define DIG3_Q1 0
  #define DIG4_Q1 0
  #define DIG5_Q1 0
  #define DIG6_Q1 0
#endif
#ifndef DIG2_Q1
  #undef I_Q1
  #undef J_Q1
  #define I_Q1 A_Q7_Q1
  #define J_Q1 ASSEMBLE(REM1_Q1, 0, 0, 0, 0, 0)
  #include <subtractor.h>
  #if ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0) >= B_Q7_Q1
    #undef SQRT_2_Q1
    #define SQRT_2_Q1
    #undef G_Q1
    #undef H_Q1
    #define G_Q1 9
    #define H_Q1 B_Q7_Q1
    #include <multiplier.h>
    #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
      #undef G_Q1
      #define G_Q1 8
      #include <multiplier.h>
      #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
        #undef G_Q1
        #define G_Q1 7
        #include <multiplier.h>
        #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
          #undef G_Q1
          #define G_Q1 6
          #include <multiplier.h>
          #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
            #undef G_Q1
            #define G_Q1 5
            #include <multiplier.h>
            #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
              #undef G_Q1
              #define G_Q1 4
              #include <multiplier.h>
              #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
                #undef G_Q1
                #define G_Q1 3
                #include <multiplier.h>
                #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
                  #undef G_Q1
                  #define G_Q1 2
                  #include <multiplier.h>
                  #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
                    #define DIG2_Q1 1
                    #define REM2_Q1 B_Q7_Q1
                  #else
                    #define DIG2_Q1 2
                    #define REM2_Q1 SOLUTION3_Q1
                  #endif
                #else
                  #define DIG2_Q1 3
                  #define REM2_Q1 SOLUTION3_Q1
                #endif
              #else
                #define DIG2_Q1 4
                #define REM2_Q1 SOLUTION3_Q1
              #endif
            #else
              #define DIG2_Q1 5
              #define REM2_Q1 SOLUTION3_Q1
            #endif
          #else
            #define DIG2_Q1 6
            #define REM2_Q1 SOLUTION3_Q1
          #endif
        #else
          #define DIG2_Q1 7
          #define REM2_Q1 SOLUTION3_Q1
        #endif
      #else
        #define DIG2_Q1 8
        #define REM2_Q1 SOLUTION3_Q1
      #endif
    #else
      #define DIG2_Q1 9
      #define REM2_Q1 SOLUTION3_Q1
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0))))), , 0, 0, 0, 0, 0) >= B_Q7_Q1
    #define DIG2_Q1 0
    #undef SQRT_2_Q1
    #define SQRT_2_Q1
    #undef G_Q1
    #undef H_Q1
    #define G_Q1 9
    #define H_Q1 B_Q7_Q1
    #include <multiplier.h>
    #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
      #undef G_Q1
      #define G_Q1 8
      #include <multiplier.h>
      #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
        #undef G_Q1
        #define G_Q1 7
        #include <multiplier.h>
        #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
          #undef G_Q1
          #define G_Q1 6
          #include <multiplier.h>
          #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
            #undef G_Q1
            #define G_Q1 5
            #include <multiplier.h>
            #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
              #undef G_Q1
              #define G_Q1 4
              #include <multiplier.h>
              #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                #undef G_Q1
                #define G_Q1 3
                #include <multiplier.h>
                #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                  #undef G_Q1
                  #define G_Q1 2
                  #include <multiplier.h>
                  #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                    #define DIG3_Q1 1
                    #define REM3_Q1 B_Q7_Q1
                  #else
                    #define DIG3_Q1 2
                    #define REM3_Q1 SOLUTION3_Q1
                  #endif
                #else
                  #define DIG3_Q1 3
                  #define REM3_Q1 SOLUTION3_Q1
                #endif
              #else
                #define DIG3_Q1 4
                #define REM3_Q1 SOLUTION3_Q1
              #endif
            #else
              #define DIG3_Q1 5
              #define REM3_Q1 SOLUTION3_Q1
            #endif
          #else
            #define DIG3_Q1 6
            #define REM3_Q1 SOLUTION3_Q1
          #endif
        #else
          #define DIG3_Q1 7
          #define REM3_Q1 SOLUTION3_Q1
        #endif
      #else
        #define DIG3_Q1 8
        #define REM3_Q1 SOLUTION3_Q1
      #endif
    #else
      #define DIG3_Q1 9
      #define REM3_Q1 SOLUTION3_Q1
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0) >= B_Q7_Q1
    #define DIG2_Q1 0
    #define DIG3_Q1 0
    #undef SQRT_2_Q1
    #define SQRT_2_Q1
    #undef G_Q1
    #undef H_Q1
    #define G_Q1 9
    #define H_Q1 B_Q7_Q1
    #include <multiplier.h>
    #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
      #undef G_Q1
      #define G_Q1 8
      #include <multiplier.h>
      #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
        #undef G_Q1
        #define G_Q1 7
        #include <multiplier.h>
        #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
          #undef G_Q1
          #define G_Q1 6
          #include <multiplier.h>
          #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
            #undef G_Q1
            #define G_Q1 5
            #include <multiplier.h>
            #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
              #undef G_Q1
              #define G_Q1 4
              #include <multiplier.h>
              #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                #undef G_Q1
                #define G_Q1 3
                #include <multiplier.h>
                #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                  #undef G_Q1
                  #define G_Q1 2
                  #include <multiplier.h>
                  #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                    #define DIG4_Q1 1
                    #define REM4_Q1 B_Q7_Q1
                  #else
                    #define DIG4_Q1 2
                    #define REM4_Q1 SOLUTION3_Q1
                  #endif
                #else
                  #define DIG4_Q1 3
                  #define REM4_Q1 SOLUTION3_Q1
                #endif
              #else
                #define DIG4_Q1 4
                #define REM4_Q1 SOLUTION3_Q1
              #endif
            #else
              #define DIG4_Q1 5
              #define REM4_Q1 SOLUTION3_Q1
            #endif
          #else
            #define DIG4_Q1 6
            #define REM4_Q1 SOLUTION3_Q1
          #endif
        #else
          #define DIG4_Q1 7
          #define REM4_Q1 SOLUTION3_Q1
        #endif
      #else
        #define DIG4_Q1 8
        #define REM4_Q1 SOLUTION3_Q1
      #endif
    #else
      #define DIG4_Q1 9
      #define REM4_Q1 SOLUTION3_Q1
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0) >= B_Q7_Q1
    #define DIG2_Q1 0
    #define DIG3_Q1 0
    #define DIG4_Q1 0
    #undef SQRT_2_Q1
    #define SQRT_2_Q1
    #undef G_Q1
    #undef H_Q1
    #define G_Q1 9
    #define H_Q1 B_Q7_Q1
    #include <multiplier.h>
    #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
      #undef G_Q1
      #define G_Q1 8
      #include <multiplier.h>
      #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
        #undef G_Q1
        #define G_Q1 7
        #include <multiplier.h>
        #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
          #undef G_Q1
          #define G_Q1 6
          #include <multiplier.h>
          #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
            #undef G_Q1
            #define G_Q1 5
            #include <multiplier.h>
            #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
              #undef G_Q1
              #define G_Q1 4
              #include <multiplier.h>
              #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                #undef G_Q1
                #define G_Q1 3
                #include <multiplier.h>
                #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                  #undef G_Q1
                  #define G_Q1 2
                  #include <multiplier.h>
                  #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                    #define DIG5_Q1 1
                    #define REM5_Q1 B_Q7_Q1
                  #else
                    #define DIG5_Q1 2
                    #define REM5_Q1 SOLUTION3_Q1
                  #endif
                #else
                  #define DIG5_Q1 3
                  #define REM5_Q1 SOLUTION3_Q1
                #endif
              #else
                #define DIG5_Q1 4
                #define REM5_Q1 SOLUTION3_Q1
              #endif
            #else
              #define DIG5_Q1 5
              #define REM5_Q1 SOLUTION3_Q1
            #endif
          #else
            #define DIG5_Q1 6
            #define REM5_Q1 SOLUTION3_Q1
          #endif
        #else
          #define DIG5_Q1 7
          #define REM5_Q1 SOLUTION3_Q1
        #endif
      #else
        #define DIG5_Q1 8
        #define REM5_Q1 SOLUTION3_Q1
      #endif
    #else
      #define DIG5_Q1 9
      #define REM5_Q1 SOLUTION3_Q1
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B_Q7_Q1
    #define DIG2_Q1 0
    #define DIG3_Q1 0
    #define DIG4_Q1 0
    #define DIG5_Q1 0
    #undef SQRT_2_Q1
    #define SQRT_2_Q1
    #undef G_Q1
    #undef H_Q1
    #define G_Q1 9
    #define H_Q1 B_Q7_Q1
    #include <multiplier.h>
    #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef G_Q1
      #define G_Q1 8
      #include <multiplier.h>
      #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef G_Q1
        #define G_Q1 7
        #include <multiplier.h>
        #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef G_Q1
          #define G_Q1 6
          #include <multiplier.h>
          #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef G_Q1
            #define G_Q1 5
            #include <multiplier.h>
            #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef G_Q1
              #define G_Q1 4
              #include <multiplier.h>
              #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef G_Q1
                #define G_Q1 3
                #include <multiplier.h>
                #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #undef G_Q1
                  #define G_Q1 2
                  #include <multiplier.h>
                  #if SOLUTION3_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                    #define DIG6_Q1 1
                    #define REM6_Q1 B_Q7_Q1
                  #else
                    #define DIG6_Q1 2
                    #define REM6_Q1 SOLUTION3_Q1
                  #endif
                #else
                  #define DIG6_Q1 3
                  #define REM6_Q1 SOLUTION3_Q1
                #endif
              #else
                #define DIG6_Q1 4
                #define REM6_Q1 SOLUTION3_Q1
              #endif
            #else
              #define DIG6_Q1 5
              #define REM6_Q1 SOLUTION3_Q1
            #endif
          #else
            #define DIG6_Q1 6
            #define REM6_Q1 SOLUTION3_Q1
          #endif
        #else
          #define DIG6_Q1 7
          #define REM6_Q1 SOLUTION3_Q1
        #endif
      #else
        #define DIG6_Q1 8
        #define REM6_Q1 SOLUTION3_Q1
      #endif
    #else
      #define DIG6_Q1 9
      #define REM6_Q1 SOLUTION3_Q1
    #endif
  #else
    #define DIG2_Q1 0
    #define DIG3_Q1 0
    #define DIG4_Q1 0
    #define DIG5_Q1 0
    #define DIG6_Q1 0
  #endif
#endif
#ifndef DIG3_Q1
  #undef SQRT_2_Q1
  #undef SQRT_3_Q1
  #undef SQRT_4_Q1
  #define SQRT_2_Q1
  #define SQRT_3_Q1
  #define SQRT_4_Q1
  #undef Q_Q1
  #undef R_Q1
  #ifdef SOLUTION4_Q1
    #define Q_Q1 SOLUTION4_Q1
  #else
    #define Q_Q1 A_Q7_Q1
  #endif
  #define R_Q1 XJOIN(REM2_Q1, 0000)
  #include <subtractor.h>
  #if ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0) >= B_Q7_Q1
    #undef O_Q1
    #undef P_Q1
    #define O_Q1 9
    #define P_Q1 B_Q7_Q1
    #include <multiplier.h>
    #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
      #undef O_Q1
      #define O_Q1 8
      #include <multiplier.h>
      #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
        #undef O_Q1
        #define O_Q1 7
        #include <multiplier.h>
        #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
          #undef O_Q1
          #define O_Q1 6
          #include <multiplier.h>
          #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
            #undef O_Q1
            #define O_Q1 5
            #include <multiplier.h>
            #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
              #undef O_Q1
              #define O_Q1 4
              #include <multiplier.h>
              #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                #undef O_Q1
                #define O_Q1 3
                #include <multiplier.h>
                #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                  #undef O_Q1
                  #define O_Q1 2
                  #include <multiplier.h>
                  #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                    #define DIG3_Q1 1
                    #define REM3_Q1 B_Q7_Q1
                  #else
                    #define DIG3_Q1 2
                    #define REM3_Q1 SOLUTION7_Q1
                  #endif
                #else
                  #define DIG3_Q1 3
                  #define REM3_Q1 SOLUTION7_Q1
                #endif
              #else
                #define DIG3_Q1 4
                #define REM3_Q1 SOLUTION7_Q1
              #endif
            #else
              #define DIG3_Q1 5
              #define REM3_Q1 SOLUTION7_Q1
            #endif
          #else
            #define DIG3_Q1 6
            #define REM3_Q1 SOLUTION7_Q1
          #endif
        #else
          #define DIG3_Q1 7
          #define REM3_Q1 SOLUTION7_Q1
        #endif
      #else
        #define DIG3_Q1 8
        #define REM3_Q1 SOLUTION7_Q1
      #endif
    #else
      #define DIG3_Q1 9
      #define REM3_Q1 SOLUTION7_Q1
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0) >= B_Q7_Q1
    #define DIG3_Q1 0
    #undef O_Q1
    #undef P_Q1
    #define O_Q1 9
    #define P B_Q7_Q1
    #include <multiplier.h>
    #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
      #undef O_Q1
      #define O_Q1 8
      #include <multiplier.h>
      #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
        #undef O_Q1
        #define O_Q1 7
        #include <multiplier.h>
        #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
          #undef O_Q1
          #define O_Q1 6
          #include <multiplier.h>
          #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
            #undef O_Q1
            #define O_Q1 5
            #include <multiplier.h>
            #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
              #undef O_Q1
              #define O_Q1 4
              #include <multiplier.h>
              #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                #undef O_Q1
                #define O_Q1 3
                #include <multiplier.h>
                #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                  #undef O_Q1
                  #define O_Q1 2
                  #include <multiplier.h>
                  #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                    #define DIG4_Q1 1
                    #define REM4_Q1 B_Q7_Q1
                  #else
                    #define DIG4_Q1 2
                    #define REM4_Q1 SOLUTION7_Q1
                  #endif
                #else
                  #define DIG4_Q1 3
                  #define REM4_Q1 SOLUTION7_Q1
                #endif
              #else
                #define DIG4_Q1 4
                #define REM4_Q1 SOLUTION7_Q1
              #endif
            #else
              #define DIG4_Q1 5
              #define REM4_Q1 SOLUTION7_Q1
            #endif
          #else
            #define DIG4_Q1 6
            #define REM4_Q1 SOLUTION7_Q1
          #endif
        #else
          #define DIG4_Q1 7
          #define REM4_Q1 SOLUTION7_Q1
        #endif
      #else
        #define DIG4_Q1 8
        #define REM4_Q1 SOLUTION7_Q1
      #endif
    #else
      #define DIG4_Q1 9
      #define REM4_Q1 SOLUTION7_Q1
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0) >= B_Q7_Q1
    #define DIG3_Q1 0
    #define DIG4_Q1 0
    #undef O_Q1
    #undef P_Q1
    #define O_Q1 9
    #define P B_Q7_Q1
    #include <multiplier.h>
    #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
      #undef O_Q1
      #define O_Q1 8
      #include <multiplier.h>
      #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
        #undef O_Q1
        #define O_Q1 7
        #include <multiplier.h>
        #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
          #undef O_Q1
          #define O_Q1 6
          #include <multiplier.h>
          #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
            #undef O_Q1
            #define O_Q1 5
            #include <multiplier.h>
            #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
              #undef O_Q1
              #define O_Q1 4
              #include <multiplier.h>
              #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                #undef O_Q1
                #define O_Q1 3
                #include <multiplier.h>
                #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                  #undef O_Q1
                  #define O_Q1 2
                  #include <multiplier.h>
                  #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                    #define DIG5_Q1 1
                    #define REM5_Q1 B_Q7_Q1
                  #else
                    #define DIG5_Q1 2
                    #define REM5_Q1 SOLUTION7_Q1
                  #endif
                #else
                  #define DIG5_Q1 3
                  #define REM5_Q1 SOLUTION7_Q1
                #endif
              #else
                #define DIG5_Q1 4
                #define REM5_Q1 SOLUTION7_Q1
              #endif
            #else
              #define DIG5_Q1 5
              #define REM5_Q1 SOLUTION7_Q1
            #endif
          #else
            #define DIG5_Q1 6
            #define REM5_Q1 SOLUTION7_Q1
          #endif
        #else
          #define DIG5_Q1 7
          #define REM5_Q1 SOLUTION7_Q1
        #endif
      #else
        #define DIG5_Q1 8
        #define REM5_Q1 SOLUTION7_Q1
      #endif
    #else
      #define DIG5_Q1 9
      #define REM5_Q1 SOLUTION7_Q1
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B_Q7_Q1
    #define DIG3_Q1 0
    #define DIG4_Q1 0
    #define DIG5_Q1 0
    #undef O_Q1
    #undef P_Q1
    #define O_Q1 9
    #define P B_Q7_Q1
    #include <multiplier.h>
    #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef O_Q1
      #define O_Q1 8
      #include <multiplier.h>
      #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef O_Q1
        #define O_Q1 7
        #include <multiplier.h>
        #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef O_Q1
          #define O_Q1 6
          #include <multiplier.h>
          #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef O_Q1
            #define O_Q1 5
            #include <multiplier.h>
            #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef O_Q1
              #define O_Q1 4
              #include <multiplier.h>
              #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef O_Q1
                #define O_Q1 3
                #include <multiplier.h>
                #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #undef O_Q1
                  #define O_Q1 2
                  #include <multiplier.h>
                  #if SOLUTION7_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                    #define DIG6_Q1 1
                    #define REM6_Q1 B_Q7_Q1
                  #else
                    #define DIG6_Q1 2
                    #define REM6_Q1 SOLUTION7_Q1
                  #endif
                #else
                  #define DIG6_Q1 3
                  #define REM6_Q1 SOLUTION7_Q1
                #endif
              #else
                #define DIG6_Q1 4
                #define REM6_Q1 SOLUTION7_Q1
              #endif
            #else
              #define DIG6_Q1 5
              #define REM6_Q1 SOLUTION7_Q1
            #endif
          #else
            #define DIG6_Q1 6
            #define REM6_Q1 SOLUTION7_Q1
          #endif
        #else
          #define DIG6_Q1 7
          #define REM6_Q1 SOLUTION7_Q1
        #endif
      #else
        #define DIG6_Q1 8
        #define REM6_Q1 SOLUTION7_Q1
      #endif
    #else
      #define DIG6_Q1 9
      #define REM6_Q1 SOLUTION7_Q1
    #endif
  #else
    #define DIG3_Q1 0
    #define DIG4_Q1 0
    #define DIG5_Q1 0
    #define DIG6_Q1 0
  #endif
#endif

#ifndef DIG4_Q1
  #undef SQRT_2_Q1
  #undef SQRT_3_Q1
  #undef SQRT_4_Q1
  #undef SQRT_5_Q1
  #define SQRT_2_Q1
  #define SQRT_3_Q1
  #define SQRT_4_Q1
  #define SQRT_5_Q1
  #undef Y_Q1
  #undef Z_Q1
  #ifdef SOLUTION8_Q1
    #define Y_Q1 SOLUTION8_Q1
  #else
    #ifdef SOLUTION4_Q1
      #define Y_Q1 SOLUTION4_Q1
    #else
      #define Y_Q1 A_Q7_Q1
    #endif
  #endif
  #define Z_Q1 XJOIN(REM3_Q1, 000)
  #include <subtractor.h>
  #if ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0) >= B_Q7_Q1
    #undef S_Q1
    #undef T_Q1
    #define S_Q1 9
    #define T_Q1 B_Q7_Q1
    #include <multiplier.h>
    #if SOLUTION9_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
      #undef S_Q1
      #define S_Q1 8
      #include <multiplier.h>
      #if SOLUTION9_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
        #undef S_Q1
        #define S_Q1 7
        #include <multiplier.h>
        #if SOLUTION9_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
          #undef S_Q1
          #define S_Q1 6
          #include <multiplier.h>
          #if SOLUTION9_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
            #undef S_Q1
            #define S_Q1 5
            #include <multiplier.h>
            #if SOLUTION9_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
              #undef S_Q1
              #define S_Q1 4
              #include <multiplier.h>
              #if SOLUTION9_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                #undef S_Q1
                #define S_Q1 3
                #include <multiplier.h>
                #if SOLUTION9_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                  #undef S_Q1
                  #define S_Q1 2
                  #include <multiplier.h>
                  #if SOLUTION9_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                    #define DIG4_Q1 1
                    #define REM4_Q1 B_Q7_Q1
                  #else
                    #define DIG4_Q1 2
                    #define REM4_Q1 SOLUTION9_Q1
                  #endif
                #else
                  #define DIG4_Q1 3
                  #define REM4_Q1 SOLUTION9_Q1
                #endif
              #else
                #define DIG4_Q1 4
                #define REM4_Q1 SOLUTION9_Q1
              #endif
            #else
              #define DIG4_Q1 5
              #define REM4_Q1 SOLUTION9_Q1
            #endif
          #else
            #define DIG4_Q1 6
            #define REM4_Q1 SOLUTION9_Q1
          #endif
        #else
          #define DIG4_Q1 7
          #define REM4_Q1 SOLUTION9_Q1
        #endif
      #else
        #define DIG4_Q1 8
        #define REM4_Q1 SOLUTION9_Q1
      #endif
    #else
      #define DIG4_Q1 9
      #define REM4_Q1 SOLUTION9_Q1
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0) >= B_Q7_Q1
    #define DIG4_Q1 0
    #undef S_Q1
    #undef T_Q1
    #define S_Q1 9
    #define T_Q1 B_Q7_Q1
    #include <multiplier.h>
    #if SOLUTION9_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
      #undef S_Q1
      #define S_Q1 8
      #include <multiplier.h>
      #if SOLUTION9_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
        #undef S_Q1
        #define S_Q1 7
        #include <multiplier.h>
        #if SOLUTION9_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
          #undef S_Q1
          #define S_Q1 6
          #include <multiplier.h>
          #if SOLUTION9_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
            #undef S_Q1
            #define S_Q1 5
            #include <multiplier.h>
            #if SOLUTION9_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
              #undef S_Q1
              #define S_Q1 4
              #include <multiplier.h>
              #if SOLUTION9_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                #undef S_Q1
                #define S_Q1 3
                #include <multiplier.h>
                #if SOLUTION9_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                  #undef S_Q1
                  #define S_Q1 2
                  #include <multiplier.h>
                  #if SOLUTION9_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                    #define DIG5_Q1 1
                    #define REM5_Q1 B_Q7_Q1
                  #else
                    #define DIG5_Q1 2
                    #define REM5_Q1 SOLUTION9_Q1
                  #endif
                #else
                  #define DIG5_Q1 3
                  #define REM5_Q1 SOLUTION9_Q1
                #endif
              #else
                #define DIG5_Q1 4
                #define REM5_Q1 SOLUTION9_Q1
              #endif
            #else
              #define DIG5_Q1 5
              #define REM5_Q1 SOLUTION9_Q1
            #endif
          #else
            #define DIG5_Q1 6
            #define REM5_Q1 SOLUTION9_Q1
          #endif
        #else
          #define DIG5_Q1 7
          #define REM5_Q1 SOLUTION9_Q1
        #endif
      #else
        #define DIG5_Q1 8
        #define REM5_Q1 SOLUTION9_Q1
      #endif
    #else
      #define DIG5_Q1 9
      #define REM5_Q1 SOLUTION9_Q1
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B_Q7_Q1
    #define DIG4_Q1 0
    #define DIG5_Q1 0
    #undef S_Q1
    #undef T_Q1
    #define S_Q1 9
    #define T_Q1 B_Q7_Q1
    #include <multiplier.h>
    #if SOLUTION9_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef S_Q1
      #define S_Q1 8
      #include <multiplier.h>
      #if SOLUTION9_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef S_Q1
        #define S_Q1 7
        #include <multiplier.h>
        #if SOLUTION9_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef S_Q1
          #define S_Q1 6
          #include <multiplier.h>
          #if SOLUTION9_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef S_Q1
            #define S_Q1 5
            #include <multiplier.h>
            #if SOLUTION9_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef S_Q1
              #define S_Q1 4
              #include <multiplier.h>
              #if SOLUTION9_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef S_Q1
                #define S_Q1 3
                #include <multiplier.h>
                #if SOLUTION9_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #undef S_Q1
                  #define S_Q1 2
                  #include <multiplier.h>
                  #if SOLUTION9_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                    #define DIG6_Q1 1
                    #define REM6_Q1 B_Q7_Q1
                  #else
                    #define DIG6_Q1 2
                    #define REM6_Q1 SOLUTION9_Q1
                  #endif
                #else
                  #define DIG6_Q1 3
                  #define REM6_Q1 SOLUTION9_Q1
                #endif
              #else
                #define DIG6_Q1 4
                #define REM6_Q1 SOLUTION9_Q1
              #endif
            #else
              #define DIG6_Q1 5
              #define REM6_Q1 SOLUTION9_Q1
            #endif
          #else
            #define DIG6_Q1 6
            #define REM6_Q1 SOLUTION9_Q1
          #endif
        #else
          #define DIG6_Q1 7
          #define REM6_Q1 SOLUTION9_Q1
        #endif
      #else
        #define DIG6_Q1 8
        #define REM6_Q1 SOLUTION9_Q1
      #endif
    #else
      #define DIG6_Q1 9
      #define REM6_Q1 SOLUTION9_Q1
    #endif
  #else
    #define DIG4_Q1 0
    #define DIG5_Q1 0
    #define DIG6_Q1 0
  #endif
#endif

#ifndef DIG5_Q1
  #undef SQRT_2_Q1
  #undef SQRT_3_Q1
  #undef SQRT_4_Q1
  #undef SQRT_5_Q1
  #undef SQRT_6_Q1
  #define SQRT_2_Q1
  #define SQRT_3_Q1
  #define SQRT_4_Q1
  #define SQRT_5_Q1
  #define SQRT_6_Q1
  #undef Y1_Q1
  #undef Z1_Q1
  #ifdef SOLUTION10_Q1
    #define Y1_Q1 SOLUTION10_Q1
  #else
    #ifdef SOLUTION8_Q1
      #define Y1_Q1 SOLUTION8_Q1
    #else
      #ifdef SOLUTION4_Q1
        #define Y1_Q1 SOLUTION4_Q1
      #else
        #define Y1_Q1 A_Q1
      #endif
    #endif
  #endif
  #define Z1_Q1 XJOIN(REM4_Q1, 00)
  #include <subtractor.h>
  #if ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0) >= B_Q7_Q1
    #undef W_Q1
    #undef X_Q1
    #define W_Q1 9
    #define X_Q1 B_Q7_Q1
    #include <multiplier.h>
    #if SOLUTION11_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
      #undef W_Q1
      #define W_Q1 8
      #include <multiplier.h>
      #if SOLUTION11_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
        #undef W_Q1
        #define W_Q1 7
        #include <multiplier.h>
        #if SOLUTION11_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
          #undef W_Q1
          #define W_Q1 6
          #include <multiplier.h>
          #if SOLUTION11_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
            #undef W_Q1
            #define W_Q1 5
            #include <multiplier.h>
            #if SOLUTION11_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
              #undef W_Q1
              #define W_Q1 4
              #include <multiplier.h>
              #if SOLUTION11_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                #undef W_Q1
                #define W_Q1 3
                #include <multiplier.h>
                #if SOLUTION11_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                  #undef W_Q1
                  #define W_Q1 2
                  #include <multiplier.h>
                  #if SOLUTION11_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                    #define DIG5_Q1 1
                    #define REM5_Q1 B_Q7_Q1
                  #else
                    #define DIG5_Q1 2
                    #define REM5_Q1 SOLUTION11_Q1
                  #endif
                #else
                  #define DIG5_Q1 3
                  #define REM5_Q1 SOLUTION11_Q1
                #endif
              #else
                #define DIG5_Q1 4
                #define REM5_Q1 SOLUTION11_Q1
              #endif
            #else
              #define DIG5_Q1 5
              #define REM5_Q1 SOLUTION11_Q1
            #endif
          #else
            #define DIG5_Q1 6
            #define REM5_Q1 SOLUTION11_Q1
          #endif
        #else
          #define DIG5_Q1 7
          #define REM5_Q1 SOLUTION11_Q1
        #endif
      #else
        #define DIG5_Q1 8
        #define REM5_Q1 SOLUTION11_Q1
      #endif
    #else
      #define DIG5_Q1 9
      #define REM5_Q1 SOLUTION11_Q1
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B_Q7_Q1
    #define DIG5_Q1 0
    #undef W_Q1
    #undef X_Q1
    #define W_Q1 9
    #define X_Q1 B_Q7_Q1
    #include <multiplier.h>
    #if SOLUTION11_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef W_Q1
      #define W_Q1 8
      #include <multiplier.h>
      #if SOLUTION11_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef W_Q1
        #define W_Q1 7
        #include <multiplier.h>
        #if SOLUTION11_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef W_Q1
          #define W_Q1 6
          #include <multiplier.h>
          #if SOLUTION11_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef W_Q1
            #define W_Q1 5
            #include <multiplier.h>
            #if SOLUTION11_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef W_Q1
              #define W_Q1 4
              #include <multiplier.h>
              #if SOLUTION11_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef W_Q1
                #define W_Q1 3
                #include <multiplier.h>
                #if SOLUTION11_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #undef W_Q1
                  #define W_Q1 2
                  #include <multiplier.h>
                  #if SOLUTION11_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                    #define DIG6_Q1 1
                    #define REM6_Q1 B_Q7_Q1
                  #else
                    #define DIG6_Q1 2
                    #define REM6_Q1 SOLUTION11_Q1
                  #endif
                #else
                  #define DIG6_Q1 3
                  #define REM6_Q1 SOLUTION11_Q1
                #endif
              #else
                #define DIG6_Q1 4
                #define REM6_Q1 SOLUTION11_Q1
              #endif
            #else
              #define DIG6_Q1 5
              #define REM6_Q1 SOLUTION11_Q1
            #endif
          #else
            #define DIG6_Q1 6
            #define REM6_Q1 SOLUTION11_Q1
          #endif
        #else
          #define DIG6_Q1 7
          #define REM6_Q1 SOLUTION11_Q1
        #endif
      #else
        #define DIG6_Q1 8
        #define REM6_Q1 SOLUTION11_Q1
      #endif
    #else
      #define DIG6_Q1 9
      #define REM6_Q1 SOLUTION11_Q1
    #endif
  #else
    #define DIG5_Q1 0
    #define DIG6_Q1 0
  #endif
#endif

#ifndef DIG6_Q1
  #undef SQRT_2_Q1
  #undef SQRT_3_Q1
  #undef SQRT_4_Q1
  #undef SQRT_5_Q1
  #undef SQRT_6_Q1
  #undef SQRT_7_Q1
  #define SQRT_2_Q1
  #define SQRT_3_Q1
  #define SQRT_4_Q1
  #define SQRT_5_Q1
  #define SQRT_6_Q1
  #define SQRT_7_Q1
  #undef Y2_Q1
  #undef Z2_Q1
  #ifdef SOLUTION12_Q1
    #define Y2_Q1 SOLUTION12_Q1
  #else
    #ifdef SOLUTION10_Q1
      #define Y2_Q1 SOLUTION10_Q1
    #else
      #ifdef SOLUTION8_Q1
        #define Y2_Q1 SOLUTION8_Q1
      #else
        #ifdef SOLUTION4_Q1
          #define Y2_Q1 SOLUTION4_Q1
        #else
          #define Y2_Q1 A_Q7_Q1
        #endif
      #endif
    #endif
  #endif
  #define Z2_Q1 XJOIN(REM5_Q1, 0)
  #include <subtractor.h>
  #if ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B_Q7_Q1
    #undef W1_Q1
    #undef X1_Q1
    #define W1_Q1 9
    #define X1_Q1 B_Q7_Q1
    #include <multiplier.h>
    #if SOLUTION13_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef W1_Q1
      #define W1_Q1 8
      #include <multiplier.h>
      #if SOLUTION13_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef W1_Q1
        #define W1_Q1 7
        #include <multiplier.h>
        #if SOLUTION13_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef W1_Q1
          #define W1_Q1 6
          #include <multiplier.h>
          #if SOLUTION13_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef W1_Q1
            #define W1_Q1 5
            #include <multiplier.h>
            #if SOLUTION13_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef W1_Q1
              #define W1_Q1 4
              #include <multiplier.h>
              #if SOLUTION13_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef W1_Q1
                #define W1_Q1 3
                #include <multiplier.h>
                #if SOLUTION13_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #undef W1_Q1
                  #define W1_Q1 2
                  #include <multiplier.h>
                  #if SOLUTION13_Q1 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q1), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                    #define DIG6_Q1 1
                    #define REM6_Q1 B_Q7_Q1
                  #else
                    #define DIG6_Q1 2
                    #define REM6_Q1 SOLUTION13_Q1
                  #endif
                #else
                  #define DIG6_Q1 3
                  #define REM6_Q1 SOLUTION13_Q1
                #endif
              #else
                #define DIG6_Q1 4
                #define REM6_Q1 SOLUTION13_Q1
              #endif
            #else
              #define DIG6_Q1 5
              #define REM6_Q1 SOLUTION13_Q1
            #endif
          #else
            #define DIG6_Q1 6
            #define REM6_Q1 SOLUTION13_Q1
          #endif
        #else
          #define DIG6_Q1 7
          #define REM6_Q1 SOLUTION13_Q1
        #endif
      #else
        #define DIG6_Q1 8
        #define REM6_Q1 SOLUTION13_Q1
      #endif
    #else
      #define DIG6_Q1 9
      #define REM6_Q1 SOLUTION13_Q1
    #endif
  #else
    #define DIG6_Q1 0
  #endif
#endif
#endif
#endif
#ifdef QUAD_7
#ifndef QUAD_8
#if ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)) >= B_Q7_Q2
  #define SQRT_1_Q2
  #undef C_Q2
  #undef D_Q2
  #define C_Q2 9
  #define D_Q2 B_Q7_Q2
  #include <multiplier.h>
  #if SOLUTION1_Q2 > ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0))
    #undef C_Q2
    #define C_Q2 8
    #include <multiplier.h>
    #if SOLUTION1_Q2 > ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0))
      #undef C_Q2
      #define C_Q2 7
      #include <multiplier.h>
      #if SOLUTION1_Q2 > ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0))
        #undef C_Q2
        #define C_Q2 6
        #include <multiplier.h>
        #if SOLUTION1_Q2 > ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0))
          #undef C_Q2
          #define C_Q2 5
          #include <multiplier.h>
          #if SOLUTION1_Q2 > ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0))
            #undef C_Q2
            #define C_Q2 4
            #include <multiplier.h>
            #if SOLUTION1_Q2 > ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0))
              #undef C_Q2
              #define C_Q2 3
              #include <multiplier.h>
              #if SOLUTION1_Q2 > ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0))
                #undef C_Q2
                #define C_Q2 2
                #include <multiplier.h>
                #if SOLUTION1_Q2 > ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0))
                  #define DIG1_Q2 1
                  #define REM1_Q2 B_Q7_Q2
                #else
                  #define DIG1_Q2 2
                  #define REM1_Q2 SOLUTION1_Q2
                #endif
              #else
                #define DIG1_Q2 3
                #define REM1_Q2 SOLUTION1_Q2
              #endif
            #else
              #define DIG1_Q2 4
              #define REM1_Q2 SOLUTION1_Q2
            #endif
          #else
            #define DIG1_Q2 5
            #define REM1_Q2 SOLUTION1_Q2
          #endif
        #else
          #define DIG1_Q2 6
          #define REM1_Q2 SOLUTION1_Q2
        #endif
      #else
        #define DIG1_Q2 7
        #define REM1_Q2 SOLUTION1_Q2
      #endif
    #else
      #define DIG1_Q2 8
      #define REM1_Q2 SOLUTION1_Q2
    #endif
  #else
    #define DIG1_Q2 9
    #define REM1_Q2 SOLUTION1_Q2
  #endif
#elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0) >= B_Q7_Q2
  #define DIG1_Q2 0
  #define SQRT_1_Q2
  #undef C_Q2
  #undef D_Q2
  #define C_Q2 9
  #define D_Q2 B_Q7_Q2
  #include <multiplier.h>
  #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
    #undef C_Q2
    #define C_Q2 8
    #include <multiplier.h>
    #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
      #undef C_Q2
      #define C_Q2 7
      #include <multiplier.h>
      #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
        #undef C_Q2
        #define C_Q2 6
        #include <multiplier.h>
        #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
          #undef C_Q2
          #define C_Q2 5
          #include <multiplier.h>
          #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
            #undef C_Q2
            #define C_Q2 4
            #include <multiplier.h>
            #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
              #undef C_Q2
              #define C_Q2 3
              #include <multiplier.h>
              #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
                #undef C_Q2
                #define C_Q2 2
                #include <multiplier.h>
                #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
                  #define DIG2_Q2 1
                  #define REM2_Q2 B_Q7_Q2
                #else
                  #define DIG2_Q2 2
                  #define REM2_Q2 SOLUTION1_Q2
                #endif
              #else
                #define DIG2_Q2 3
                #define REM2_Q2 SOLUTION1_Q2
              #endif
            #else
              #define DIG2_Q2 4
              #define REM2_Q2 SOLUTION1_Q2
            #endif
          #else
            #define DIG2_Q2 5
            #define REM2_Q2 SOLUTION1_Q2
          #endif
        #else
          #define DIG2_Q2 6
          #define REM2_Q2 SOLUTION1_Q2
        #endif
      #else
        #define DIG2_Q2 7
        #define REM2_Q2 SOLUTION1_Q2
      #endif
    #else
      #define DIG2_Q2 8
      #define REM2_Q2 SOLUTION1_Q2
    #endif
  #else
    #define DIG2_Q2 9
    #define REM2_Q2 SOLUTION1_Q2
  #endif
#elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0) >= B_Q7_Q2
  #define DIG1_Q2 0
  #define DIG2_Q2 0
  #define SQRT_1_Q2
  #undef C_Q2
  #undef D_Q2
  #define C_Q2 9
  #define D_Q2 B_Q7_Q2
  #include <multiplier.h>
  #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
    #undef C_Q2
    #define C_Q2 8
    #include <multiplier.h>
    #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
      #undef C_Q2
      #define C_Q2 7
      #include <multiplier.h>
      #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
        #undef C_Q2
        #define C_Q2 6
        #include <multiplier.h>
        #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
          #undef C_Q2
          #define C_Q2 5
          #include <multiplier.h>
          #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
            #undef C_Q2
            #define C_Q2 4
            #include <multiplier.h>
            #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
              #undef C_Q2
              #define C_Q2 3
              #include <multiplier.h>
              #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                #undef C_Q2
                #define C_Q2 2
                #include <multiplier.h>
                #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                  #define DIG3_Q2 1
                  #define REM3_Q2 B_Q7_Q2
                #else
                  #define DIG3_Q2 2
                  #define REM3_Q2 SOLUTION1_Q2
                #endif
              #else
                #define DIG3_Q2 3
                #define REM3_Q2 SOLUTION1_Q2
              #endif
            #else
              #define DIG3_Q2 4
              #define REM3_Q2 SOLUTION1_Q2
            #endif
          #else
            #define DIG3_Q2 5
            #define REM3_Q2 SOLUTION1_Q2
          #endif
        #else
          #define DIG3_Q2 6
          #define REM3_Q2 SOLUTION1_Q2
        #endif
      #else
        #define DIG3_Q2 7
        #define REM3_Q2 SOLUTION1_Q2
      #endif
    #else
      #define DIG3_Q2 8
      #define REM3_Q2 SOLUTION1_Q2
    #endif
  #else
    #define DIG3_Q2 9
    #define REM3_Q2 SOLUTION1_Q2
  #endif
#elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0) >= B_Q7_Q2
  #define DIG1_Q2 0
  #define DIG2_Q2 0
  #define DIG3_Q2 0
  #define SQRT_1_Q2
  #undef C_Q2
  #undef D_Q2
  #define C_Q2 9
  #define D_Q2 B_Q7_Q2
  #include <multiplier.h>
  #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
    #undef C_Q2
    #define C_Q2 8
    #include <multiplier.h>
    #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef C_Q2
      #define C_Q2 7
      #include <multiplier.h>
      #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
        #undef C_Q2
        #define C_Q2 6
        #include <multiplier.h>
        #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
          #undef C_Q2
          #define C_Q2 5
          #include <multiplier.h>
          #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
            #undef C_Q2
            #define C_Q2 4
            #include <multiplier.h>
            #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
              #undef C_Q2
              #define C_Q2 3
              #include <multiplier.h>
              #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                #undef C_Q2
                #define C_Q2 2
                #include <multiplier.h>
                #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                  #define DIG4_Q2 1
                  #define REM4_Q2 B_Q7_Q2
                #else
                  #define DIG4_Q2 2
                  #define REM4_Q2 SOLUTION1_Q2
                #endif
              #else
                #define DIG4_Q2 3
                #define REM4_Q2 SOLUTION1_Q2
              #endif
            #else
              #define DIG4_Q2 4
              #define REM4_Q2 SOLUTION1_Q2
            #endif
          #else
            #define DIG4_Q2 5
            #define REM4_Q2 SOLUTION1_Q2
          #endif
        #else
          #define DIG4_Q2 6
          #define REM4_Q2 SOLUTION1_Q2
        #endif
      #else
        #define DIG4_Q2 7
        #define REM4_Q2 SOLUTION1_Q2
      #endif
    #else
      #define DIG4_Q2 8
      #define REM4_Q2 SOLUTION1_Q2
    #endif
  #else
    #define DIG4_Q2 9
    #define REM4_Q2 SOLUTION1_Q2
  #endif
#elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q2, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0) >= B_Q7_Q2
  #define DIG1_Q2 0
  #define DIG2_Q2 0
  #define DIG3_Q2 0
  #define DIG4_Q2 0
  #define SQRT_1_Q2
  #undef C_Q2
  #undef D_Q2
  #define C_Q2 9
  #define D_Q2 B_Q7_Q2
  #include <multiplier.h>
  #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q2, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
    #undef C_Q2
    #define C_Q2 8
    #include <multiplier.h>
    #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q2, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
      #undef C_Q2
      #define C_Q2 7
      #include <multiplier.h>
      #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q2, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
        #undef C_Q2
        #define C_Q2 6
        #include <multiplier.h>
        #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q2, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
          #undef C_Q2
          #define C_Q2 5
          #include <multiplier.h>
          #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q2, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
            #undef C_Q2
            #define C_Q2 4
            #include <multiplier.h>
            #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q2, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
              #undef C_Q2
              #define C_Q2 3
              #include <multiplier.h>
              #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q2, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                #undef C_Q2
                #define C_Q2 2
                #include <multiplier.h>
                #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q2, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                  #define DIG5_Q2 1
                  #define REM5_Q2 B_Q7_Q2
                #else
                  #define DIG5_Q2 2
                  #define REM5_Q2 SOLUTION1_Q2
                #endif
              #else
                #define DIG5_Q2 3
                #define REM5_Q2 SOLUTION1_Q2
              #endif
            #else
              #define DIG5_Q2 4
              #define REM5_Q2 SOLUTION1_Q2
            #endif
          #else
            #define DIG5_Q2 5
            #define REM5_Q2 SOLUTION1_Q2
          #endif
        #else
          #define DIG5_Q2 6
          #define REM5_Q2 SOLUTION1_Q2
        #endif
      #else
        #define DIG5_Q2 7
        #define REM5_Q2 SOLUTION1_Q2
      #endif
    #else
      #define DIG5_Q2 8
      #define REM5_Q2 SOLUTION1_Q2
    #endif
  #else
    #define DIG5_Q2 9
    #define REM5_Q2 SOLUTION1_Q2
  #endif
#elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q2, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B_Q7_Q2
  #define DIG1_Q2 0
  #define DIG2_Q2 0
  #define DIG3_Q2 0
  #define DIG4_Q2 0
  #define DIG5_Q2 0
  #define SQRT_1_Q2
  #undef C_Q2
  #undef D_Q2
  #define C_Q2 9
  #define D_Q2 B_Q7_Q2

  #include <multiplier.h>
  #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q2, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
    #undef C_Q2
    #define C_Q2 8
    #include <multiplier.h>
    #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q2, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef C_Q2
      #define C_Q2 7
      #include <multiplier.h>
      #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q2, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef C_Q2
        #define C_Q2 6
        #include <multiplier.h>
        #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q2, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef C_Q2
          #define C_Q2 5
          #include <multiplier.h>
          #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q2, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef C_Q2
            #define C_Q2 4
            #include <multiplier.h>
            #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q2, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef C_Q2
              #define C_Q2 3
              #include <multiplier.h>
              #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q2, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef C_Q2
                #define C_Q2 2
                #include <multiplier.h>
                #if SOLUTION1_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q2, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q2, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q2, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #define DIG6_Q2 1
                  #define REM6_Q2 B_Q7_Q2
                #else
                  #define DIG6_Q2 2
                  #define REM6_Q2 SOLUTION1_Q2
                #endif
              #else
                #define DIG6_Q2 3
                #define REM6_Q2 SOLUTION1_Q2
              #endif
            #else
              #define DIG6_Q2 4
              #define REM6_Q2 SOLUTION1_Q2
            #endif
          #else
            #define DIG6_Q2 5
            #define REM6_Q2 SOLUTION1_Q2
          #endif
        #else
          #define DIG6_Q2 6
          #define REM6_Q2 SOLUTION1_Q2
        #endif
      #else
        #define DIG6_Q2 7
        #define REM6_Q2 SOLUTION1_Q2
      #endif
    #else
      #define DIG6_Q2 8
      #define REM6_Q2 SOLUTION1_Q2
    #endif
  #else
    #define DIG6_Q2 9
    #define REM6_Q2 SOLUTION1_Q2
  #endif
#else
  #define DIG1_Q2 0
  #define DIG2_Q2 0
  #define DIG3_Q2 0
  #define DIG4_Q2 0
  #define DIG5_Q2 0
  #define DIG6_Q2 0
#endif
#ifndef DIG2_Q2
  #undef I_Q2
  #undef J_Q2
  #define I_Q2 A_Q7_Q2
  #define J_Q2 ASSEMBLE(REM1_Q2, 0, 0, 0, 0, 0)
  #include <subtractor.h>
  #if ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0) >= B_Q7_Q2
    #undef SQRT_2_Q2
    #define SQRT_2_Q2
    #undef G_Q2
    #undef H_Q2
    #define G_Q2 9
    #define H_Q2 B_Q7_Q2
    #include <multiplier.h>
    #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
      #undef G_Q2
      #define G_Q2 8
      #include <multiplier.h>
      #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
        #undef G_Q2
        #define G_Q2 7
        #include <multiplier.h>
        #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
          #undef G_Q2
          #define G_Q2 6
          #include <multiplier.h>
          #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
            #undef G_Q2
            #define G_Q2 5
            #include <multiplier.h>
            #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
              #undef G_Q2
              #define G_Q2 4
              #include <multiplier.h>
              #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
                #undef G_Q2
                #define G_Q2 3
                #include <multiplier.h>
                #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
                  #undef G_Q2
                  #define G_Q2 2
                  #include <multiplier.h>
                  #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
                    #define DIG2_Q2 1
                    #define REM2_Q2 B_Q7_Q2
                  #else
                    #define DIG2_Q2 2
                    #define REM2_Q2 SOLUTION3_Q2
                  #endif
                #else
                  #define DIG2_Q2 3
                  #define REM2_Q2 SOLUTION3_Q2
                #endif
              #else
                #define DIG2_Q2 4
                #define REM2_Q2 SOLUTION3_Q2
              #endif
            #else
              #define DIG2_Q2 5
              #define REM2_Q2 SOLUTION3_Q2
            #endif
          #else
            #define DIG2_Q2 6
            #define REM2_Q2 SOLUTION3_Q2
          #endif
        #else
          #define DIG2_Q2 7
          #define REM2_Q2 SOLUTION3_Q2
        #endif
      #else
        #define DIG2_Q2 8
        #define REM2_Q2 SOLUTION3_Q2
      #endif
    #else
      #define DIG2_Q2 9
      #define REM2_Q2 SOLUTION3_Q2
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0))))), , 0, 0, 0, 0, 0) >= B_Q7_Q2
    #define DIG2_Q2 0
    #undef SQRT_2_Q2
    #define SQRT_2_Q2
    #undef G_Q2
    #undef H_Q2
    #define G_Q2 9
    #define H_Q2 B_Q7_Q2
    #include <multiplier.h>
    #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
      #undef G_Q2
      #define G_Q2 8
      #include <multiplier.h>
      #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
        #undef G_Q2
        #define G_Q2 7
        #include <multiplier.h>
        #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
          #undef G_Q2
          #define G_Q2 6
          #include <multiplier.h>
          #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
            #undef G_Q2
            #define G_Q2 5
            #include <multiplier.h>
            #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
              #undef G_Q2
              #define G_Q2 4
              #include <multiplier.h>
              #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                #undef G_Q2
                #define G_Q2 3
                #include <multiplier.h>
                #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                  #undef G_Q2
                  #define G_Q2 2
                  #include <multiplier.h>
                  #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                    #define DIG3_Q2 1
                    #define REM3_Q2 B_Q7_Q2
                  #else
                    #define DIG3_Q2 2
                    #define REM3_Q2 SOLUTION3_Q2
                  #endif
                #else
                  #define DIG3_Q2 3
                  #define REM3_Q2 SOLUTION3_Q2
                #endif
              #else
                #define DIG3_Q2 4
                #define REM3_Q2 SOLUTION3_Q2
              #endif
            #else
              #define DIG3_Q2 5
              #define REM3_Q2 SOLUTION3_Q2
            #endif
          #else
            #define DIG3_Q2 6
            #define REM3_Q2 SOLUTION3_Q2
          #endif
        #else
          #define DIG3_Q2 7
          #define REM3_Q2 SOLUTION3_Q2
        #endif
      #else
        #define DIG3_Q2 8
        #define REM3_Q2 SOLUTION3_Q2
      #endif
    #else
      #define DIG3_Q2 9
      #define REM3_Q2 SOLUTION3_Q2
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0) >= B_Q7_Q2
    #define DIG2_Q2 0
    #define DIG3_Q2 0
    #undef SQRT_2_Q2
    #define SQRT_2_Q2
    #undef G_Q2
    #undef H_Q2
    #define G_Q2 9
    #define H_Q2 B_Q7_Q2
    #include <multiplier.h>
    #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
      #undef G_Q2
      #define G_Q2 8
      #include <multiplier.h>
      #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
        #undef G_Q2
        #define G_Q2 7
        #include <multiplier.h>
        #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
          #undef G_Q2
          #define G_Q2 6
          #include <multiplier.h>
          #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
            #undef G_Q2
            #define G_Q2 5
            #include <multiplier.h>
            #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
              #undef G_Q2
              #define G_Q2 4
              #include <multiplier.h>
              #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                #undef G_Q2
                #define G_Q2 3
                #include <multiplier.h>
                #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                  #undef G_Q2
                  #define G_Q2 2
                  #include <multiplier.h>
                  #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                    #define DIG4_Q2 1
                    #define REM4_Q2 B_Q7_Q2
                  #else
                    #define DIG4_Q2 2
                    #define REM4_Q2 SOLUTION3_Q2
                  #endif
                #else
                  #define DIG4_Q2 3
                  #define REM4_Q2 SOLUTION3_Q2
                #endif
              #else
                #define DIG4_Q2 4
                #define REM4_Q2 SOLUTION3_Q2
              #endif
            #else
              #define DIG4_Q2 5
              #define REM4_Q2 SOLUTION3_Q2
            #endif
          #else
            #define DIG4_Q2 6
            #define REM4_Q2 SOLUTION3_Q2
          #endif
        #else
          #define DIG4_Q2 7
          #define REM4_Q2 SOLUTION3_Q2
        #endif
      #else
        #define DIG4_Q2 8
        #define REM4_Q2 SOLUTION3_Q2
      #endif
    #else
      #define DIG4_Q2 9
      #define REM4_Q2 SOLUTION3_Q2
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0) >= B_Q7_Q2
    #define DIG2_Q2 0
    #define DIG3_Q2 0
    #define DIG4_Q2 0
    #undef SQRT_2_Q2
    #define SQRT_2_Q2
    #undef G_Q2
    #undef H_Q2
    #define G_Q2 9
    #define H_Q2 B_Q7_Q2
    #include <multiplier.h>
    #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
      #undef G_Q2
      #define G_Q2 8
      #include <multiplier.h>
      #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
        #undef G_Q2
        #define G_Q2 7
        #include <multiplier.h>
        #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
          #undef G_Q2
          #define G_Q2 6
          #include <multiplier.h>
          #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
            #undef G_Q2
            #define G_Q2 5
            #include <multiplier.h>
            #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
              #undef G_Q2
              #define G_Q2 4
              #include <multiplier.h>
              #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                #undef G_Q2
                #define G_Q2 3
                #include <multiplier.h>
                #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                  #undef G_Q2
                  #define G_Q2 2
                  #include <multiplier.h>
                  #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                    #define DIG5_Q2 1
                    #define REM5_Q2 B_Q7_Q2
                  #else
                    #define DIG5_Q2 2
                    #define REM5_Q2 SOLUTION3_Q2
                  #endif
                #else
                  #define DIG5_Q2 3
                  #define REM5_Q2 SOLUTION3_Q2
                #endif
              #else
                #define DIG5_Q2 4
                #define REM5_Q2 SOLUTION3_Q2
              #endif
            #else
              #define DIG5_Q2 5
              #define REM5_Q2 SOLUTION3_Q2
            #endif
          #else
            #define DIG5_Q2 6
            #define REM5_Q2 SOLUTION3_Q2
          #endif
        #else
          #define DIG5_Q2 7
          #define REM5_Q2 SOLUTION3_Q2
        #endif
      #else
        #define DIG5_Q2 8
        #define REM5_Q2 SOLUTION3_Q2
      #endif
    #else
      #define DIG5_Q2 9
      #define REM5_Q2 SOLUTION3_Q2
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B_Q7_Q2
    #define DIG2_Q2 0
    #define DIG3_Q2 0
    #define DIG4_Q2 0
    #define DIG5_Q2 0
    #undef SQRT_2_Q2
    #define SQRT_2_Q2
    #undef G_Q2
    #undef H_Q2
    #define G_Q2 9
    #define H_Q2 B_Q7_Q2
    #include <multiplier.h>
    #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef G_Q2
      #define G_Q2 8
      #include <multiplier.h>
      #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef G_Q2
        #define G_Q2 7
        #include <multiplier.h>
        #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef G_Q2
          #define G_Q2 6
          #include <multiplier.h>
          #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef G_Q2
            #define G_Q2 5
            #include <multiplier.h>
            #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef G_Q2
              #define G_Q2 4
              #include <multiplier.h>
              #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef G_Q2
                #define G_Q2 3
                #include <multiplier.h>
                #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #undef G_Q2
                  #define G_Q2 2
                  #include <multiplier.h>
                  #if SOLUTION3_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                    #define DIG6_Q2 1
                    #define REM6_Q2 B_Q7_Q2
                  #else
                    #define DIG6_Q2 2
                    #define REM6_Q2 SOLUTION3_Q2
                  #endif
                #else
                  #define DIG6_Q2 3
                  #define REM6_Q2 SOLUTION3_Q2
                #endif
              #else
                #define DIG6_Q2 4
                #define REM6_Q2 SOLUTION3_Q2
              #endif
            #else
              #define DIG6_Q2 5
              #define REM6_Q2 SOLUTION3_Q2
            #endif
          #else
            #define DIG6_Q2 6
            #define REM6_Q2 SOLUTION3_Q2
          #endif
        #else
          #define DIG6_Q2 7
          #define REM6_Q2 SOLUTION3_Q2
        #endif
      #else
        #define DIG6_Q2 8
        #define REM6_Q2 SOLUTION3_Q2
      #endif
    #else
      #define DIG6_Q2 9
      #define REM6_Q2 SOLUTION3_Q2
    #endif
  #else
    #define DIG2_Q2 0
    #define DIG3_Q2 0
    #define DIG4_Q2 0
    #define DIG5_Q2 0
    #define DIG6_Q2 0
  #endif
#endif
#ifndef DIG3_Q2
  #undef SQRT_2_Q2
  #undef SQRT_3_Q2
  #undef SQRT_4_Q2
  #define SQRT_2_Q2
  #define SQRT_3_Q2
  #define SQRT_4_Q2
  #undef Q_Q2
  #undef R_Q2
  #ifdef SOLUTION4_Q2
    #define Q_Q2 SOLUTION4_Q2
  #else
    #define Q_Q2 A_Q7_Q2
  #endif
  #define R_Q2 XJOIN(REM2_Q2, 0000)
  #include <subtractor.h>
  #if ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0) >= B_Q7_Q2
    #undef O_Q2
    #undef P_Q2
    #define O_Q2 9
    #define P_Q2 B_Q7_Q2
    #include <multiplier.h>
    #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
      #undef O_Q2
      #define O_Q2 8
      #include <multiplier.h>
      #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
        #undef O_Q2
        #define O_Q2 7
        #include <multiplier.h>
        #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
          #undef O_Q2
          #define O_Q2 6
          #include <multiplier.h>
          #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
            #undef O_Q2
            #define O_Q2 5
            #include <multiplier.h>
            #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
              #undef O_Q2
              #define O_Q2 4
              #include <multiplier.h>
              #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                #undef O_Q2
                #define O_Q2 3
                #include <multiplier.h>
                #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                  #undef O_Q2
                  #define O_Q2 2
                  #include <multiplier.h>
                  #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                    #define DIG3_Q2 1
                    #define REM3_Q2 B_Q7_Q2
                  #else
                    #define DIG3_Q2 2
                    #define REM3_Q2 SOLUTION7_Q2
                  #endif
                #else
                  #define DIG3_Q2 3
                  #define REM3_Q2 SOLUTION7_Q2
                #endif
              #else
                #define DIG3_Q2 4
                #define REM3_Q2 SOLUTION7_Q2
              #endif
            #else
              #define DIG3_Q2 5
              #define REM3_Q2 SOLUTION7_Q2
            #endif
          #else
            #define DIG3_Q2 6
            #define REM3_Q2 SOLUTION7_Q2
          #endif
        #else
          #define DIG3_Q2 7
          #define REM3_Q2 SOLUTION7_Q2
        #endif
      #else
        #define DIG3_Q2 8
        #define REM3_Q2 SOLUTION7_Q2
      #endif
    #else
      #define DIG3_Q2 9
      #define REM3_Q2 SOLUTION7_Q2
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0) >= B_Q7_Q2
    #define DIG3_Q2 0
    #undef O_Q2
    #undef P_Q2
    #define O_Q2 9
    #define P B_Q7_Q2
    #include <multiplier.h>
    #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
      #undef O_Q2
      #define O_Q2 8
      #include <multiplier.h>
      #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
        #undef O_Q2
        #define O_Q2 7
        #include <multiplier.h>
        #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
          #undef O_Q2
          #define O_Q2 6
          #include <multiplier.h>
          #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
            #undef O_Q2
            #define O_Q2 5
            #include <multiplier.h>
            #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
              #undef O_Q2
              #define O_Q2 4
              #include <multiplier.h>
              #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                #undef O_Q2
                #define O_Q2 3
                #include <multiplier.h>
                #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                  #undef O_Q2
                  #define O_Q2 2
                  #include <multiplier.h>
                  #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                    #define DIG4_Q2 1
                    #define REM4_Q2 B_Q7_Q2
                  #else
                    #define DIG4_Q2 2
                    #define REM4_Q2 SOLUTION7_Q2
                  #endif
                #else
                  #define DIG4_Q2 3
                  #define REM4_Q2 SOLUTION7_Q2
                #endif
              #else
                #define DIG4_Q2 4
                #define REM4_Q2 SOLUTION7_Q2
              #endif
            #else
              #define DIG4_Q2 5
              #define REM4_Q2 SOLUTION7_Q2
            #endif
          #else
            #define DIG4_Q2 6
            #define REM4_Q2 SOLUTION7_Q2
          #endif
        #else
          #define DIG4_Q2 7
          #define REM4_Q2 SOLUTION7_Q2
        #endif
      #else
        #define DIG4_Q2 8
        #define REM4_Q2 SOLUTION7_Q2
      #endif
    #else
      #define DIG4_Q2 9
      #define REM4_Q2 SOLUTION7_Q2
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0) >= B_Q7_Q2
    #define DIG3_Q2 0
    #define DIG4_Q2 0
    #undef O_Q2
    #undef P_Q2
    #define O_Q2 9
    #define P B_Q7_Q2
    #include <multiplier.h>
    #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
      #undef O_Q2
      #define O_Q2 8
      #include <multiplier.h>
      #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
        #undef O_Q2
        #define O_Q2 7
        #include <multiplier.h>
        #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
          #undef O_Q2
          #define O_Q2 6
          #include <multiplier.h>
          #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
            #undef O_Q2
            #define O_Q2 5
            #include <multiplier.h>
            #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
              #undef O_Q2
              #define O_Q2 4
              #include <multiplier.h>
              #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                #undef O_Q2
                #define O_Q2 3
                #include <multiplier.h>
                #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                  #undef O_Q2
                  #define O_Q2 2
                  #include <multiplier.h>
                  #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                    #define DIG5_Q2 1
                    #define REM5_Q2 B_Q7_Q2
                  #else
                    #define DIG5_Q2 2
                    #define REM5_Q2 SOLUTION7_Q2
                  #endif
                #else
                  #define DIG5_Q2 3
                  #define REM5_Q2 SOLUTION7_Q2
                #endif
              #else
                #define DIG5_Q2 4
                #define REM5_Q2 SOLUTION7_Q2
              #endif
            #else
              #define DIG5_Q2 5
              #define REM5_Q2 SOLUTION7_Q2
            #endif
          #else
            #define DIG5_Q2 6
            #define REM5_Q2 SOLUTION7_Q2
          #endif
        #else
          #define DIG5_Q2 7
          #define REM5_Q2 SOLUTION7_Q2
        #endif
      #else
        #define DIG5_Q2 8
        #define REM5_Q2 SOLUTION7_Q2
      #endif
    #else
      #define DIG5_Q2 9
      #define REM5_Q2 SOLUTION7_Q2
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B_Q7_Q2
    #define DIG3_Q2 0
    #define DIG4_Q2 0
    #define DIG5_Q2 0
    #undef O_Q2
    #undef P_Q2
    #define O_Q2 9
    #define P B_Q7_Q2
    #include <multiplier.h>
    #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef O_Q2
      #define O_Q2 8
      #include <multiplier.h>
      #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef O_Q2
        #define O_Q2 7
        #include <multiplier.h>
        #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef O_Q2
          #define O_Q2 6
          #include <multiplier.h>
          #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef O_Q2
            #define O_Q2 5
            #include <multiplier.h>
            #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef O_Q2
              #define O_Q2 4
              #include <multiplier.h>
              #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef O_Q2
                #define O_Q2 3
                #include <multiplier.h>
                #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #undef O_Q2
                  #define O_Q2 2
                  #include <multiplier.h>
                  #if SOLUTION7_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                    #define DIG6_Q2 1
                    #define REM6_Q2 B_Q7_Q2
                  #else
                    #define DIG6_Q2 2
                    #define REM6_Q2 SOLUTION7_Q2
                  #endif
                #else
                  #define DIG6_Q2 3
                  #define REM6_Q2 SOLUTION7_Q2
                #endif
              #else
                #define DIG6_Q2 4
                #define REM6_Q2 SOLUTION7_Q2
              #endif
            #else
              #define DIG6_Q2 5
              #define REM6_Q2 SOLUTION7_Q2
            #endif
          #else
            #define DIG6_Q2 6
            #define REM6_Q2 SOLUTION7_Q2
          #endif
        #else
          #define DIG6_Q2 7
          #define REM6_Q2 SOLUTION7_Q2
        #endif
      #else
        #define DIG6_Q2 8
        #define REM6_Q2 SOLUTION7_Q2
      #endif
    #else
      #define DIG6_Q2 9
      #define REM6_Q2 SOLUTION7_Q2
    #endif
  #else
    #define DIG3_Q2 0
    #define DIG4_Q2 0
    #define DIG5_Q2 0
    #define DIG6_Q2 0
  #endif
#endif

#ifndef DIG4_Q2
  #undef SQRT_2_Q2
  #undef SQRT_3_Q2
  #undef SQRT_4_Q2
  #undef SQRT_5_Q2
  #define SQRT_2_Q2
  #define SQRT_3_Q2
  #define SQRT_4_Q2
  #define SQRT_5_Q2
  #undef Y_Q2
  #undef Z_Q2
  #ifdef SOLUTION8_Q2
    #define Y_Q2 SOLUTION8_Q2
  #else
    #ifdef SOLUTION4_Q2
      #define Y_Q2 SOLUTION4_Q2
    #else
      #define Y_Q2 A_Q7_Q2
    #endif
  #endif
  #define Z_Q2 XJOIN(REM3_Q2, 000)
  #include <subtractor.h>
  #if ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0) >= B_Q7_Q2
    #undef S_Q2
    #undef T_Q2
    #define S_Q2 9
    #define T_Q2 B_Q7_Q2
    #include <multiplier.h>
    #if SOLUTION9_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
      #undef S_Q2
      #define S_Q2 8
      #include <multiplier.h>
      #if SOLUTION9_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
        #undef S_Q2
        #define S_Q2 7
        #include <multiplier.h>
        #if SOLUTION9_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
          #undef S_Q2
          #define S_Q2 6
          #include <multiplier.h>
          #if SOLUTION9_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
            #undef S_Q2
            #define S_Q2 5
            #include <multiplier.h>
            #if SOLUTION9_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
              #undef S_Q2
              #define S_Q2 4
              #include <multiplier.h>
              #if SOLUTION9_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                #undef S_Q2
                #define S_Q2 3
                #include <multiplier.h>
                #if SOLUTION9_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                  #undef S_Q2
                  #define S_Q2 2
                  #include <multiplier.h>
                  #if SOLUTION9_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                    #define DIG4_Q2 1
                    #define REM4_Q2 B_Q7_Q2
                  #else
                    #define DIG4_Q2 2
                    #define REM4_Q2 SOLUTION9_Q2
                  #endif
                #else
                  #define DIG4_Q2 3
                  #define REM4_Q2 SOLUTION9_Q2
                #endif
              #else
                #define DIG4_Q2 4
                #define REM4_Q2 SOLUTION9_Q2
              #endif
            #else
              #define DIG4_Q2 5
              #define REM4_Q2 SOLUTION9_Q2
            #endif
          #else
            #define DIG4_Q2 6
            #define REM4_Q2 SOLUTION9_Q2
          #endif
        #else
          #define DIG4_Q2 7
          #define REM4_Q2 SOLUTION9_Q2
        #endif
      #else
        #define DIG4_Q2 8
        #define REM4_Q2 SOLUTION9_Q2
      #endif
    #else
      #define DIG4_Q2 9
      #define REM4_Q2 SOLUTION9_Q2
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0) >= B_Q7_Q2
    #define DIG4_Q2 0
    #undef S_Q2
    #undef T_Q2
    #define S_Q2 9
    #define T_Q2 B_Q7_Q2
    #include <multiplier.h>
    #if SOLUTION9_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
      #undef S_Q2
      #define S_Q2 8
      #include <multiplier.h>
      #if SOLUTION9_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
        #undef S_Q2
        #define S_Q2 7
        #include <multiplier.h>
        #if SOLUTION9_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
          #undef S_Q2
          #define S_Q2 6
          #include <multiplier.h>
          #if SOLUTION9_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
            #undef S_Q2
            #define S_Q2 5
            #include <multiplier.h>
            #if SOLUTION9_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
              #undef S_Q2
              #define S_Q2 4
              #include <multiplier.h>
              #if SOLUTION9_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                #undef S_Q2
                #define S_Q2 3
                #include <multiplier.h>
                #if SOLUTION9_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                  #undef S_Q2
                  #define S_Q2 2
                  #include <multiplier.h>
                  #if SOLUTION9_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                    #define DIG5_Q2 1
                    #define REM5_Q2 B_Q7_Q2
                  #else
                    #define DIG5_Q2 2
                    #define REM5_Q2 SOLUTION9_Q2
                  #endif
                #else
                  #define DIG5_Q2 3
                  #define REM5_Q2 SOLUTION9_Q2
                #endif
              #else
                #define DIG5_Q2 4
                #define REM5_Q2 SOLUTION9_Q2
              #endif
            #else
              #define DIG5_Q2 5
              #define REM5_Q2 SOLUTION9_Q2
            #endif
          #else
            #define DIG5_Q2 6
            #define REM5_Q2 SOLUTION9_Q2
          #endif
        #else
          #define DIG5_Q2 7
          #define REM5_Q2 SOLUTION9_Q2
        #endif
      #else
        #define DIG5_Q2 8
        #define REM5_Q2 SOLUTION9_Q2
      #endif
    #else
      #define DIG5_Q2 9
      #define REM5_Q2 SOLUTION9_Q2
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B_Q7_Q2
    #define DIG4_Q2 0
    #define DIG5_Q2 0
    #undef S_Q2
    #undef T_Q2
    #define S_Q2 9
    #define T_Q2 B_Q7_Q2
    #include <multiplier.h>
    #if SOLUTION9_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef S_Q2
      #define S_Q2 8
      #include <multiplier.h>
      #if SOLUTION9_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef S_Q2
        #define S_Q2 7
        #include <multiplier.h>
        #if SOLUTION9_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef S_Q2
          #define S_Q2 6
          #include <multiplier.h>
          #if SOLUTION9_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef S_Q2
            #define S_Q2 5
            #include <multiplier.h>
            #if SOLUTION9_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef S_Q2
              #define S_Q2 4
              #include <multiplier.h>
              #if SOLUTION9_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef S_Q2
                #define S_Q2 3
                #include <multiplier.h>
                #if SOLUTION9_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #undef S_Q2
                  #define S_Q2 2
                  #include <multiplier.h>
                  #if SOLUTION9_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                    #define DIG6_Q2 1
                    #define REM6_Q2 B_Q7_Q2
                  #else
                    #define DIG6_Q2 2
                    #define REM6_Q2 SOLUTION9_Q2
                  #endif
                #else
                  #define DIG6_Q2 3
                  #define REM6_Q2 SOLUTION9_Q2
                #endif
              #else
                #define DIG6_Q2 4
                #define REM6_Q2 SOLUTION9_Q2
              #endif
            #else
              #define DIG6_Q2 5
              #define REM6_Q2 SOLUTION9_Q2
            #endif
          #else
            #define DIG6_Q2 6
            #define REM6_Q2 SOLUTION9_Q2
          #endif
        #else
          #define DIG6_Q2 7
          #define REM6_Q2 SOLUTION9_Q2
        #endif
      #else
        #define DIG6_Q2 8
        #define REM6_Q2 SOLUTION9_Q2
      #endif
    #else
      #define DIG6_Q2 9
      #define REM6_Q2 SOLUTION9_Q2
    #endif
  #else
    #define DIG4_Q2 0
    #define DIG5_Q2 0
    #define DIG6_Q2 0
  #endif
#endif

#ifndef DIG5_Q2
  #undef SQRT_2_Q2
  #undef SQRT_3_Q2
  #undef SQRT_4_Q2
  #undef SQRT_5_Q2
  #undef SQRT_6_Q2
  #define SQRT_2_Q2
  #define SQRT_3_Q2
  #define SQRT_4_Q2
  #define SQRT_5_Q2
  #define SQRT_6_Q2
  #undef Y1_Q2
  #undef Z1_Q2
  #ifdef SOLUTION10_Q2
    #define Y1_Q2 SOLUTION10_Q2
  #else
    #ifdef SOLUTION8_Q2
      #define Y1_Q2 SOLUTION8_Q2
    #else
      #ifdef SOLUTION4_Q2
        #define Y1_Q2 SOLUTION4_Q2
      #else
        #define Y1_Q2 A_Q2
      #endif
    #endif
  #endif
  #define Z1_Q2 XJOIN(REM4_Q2, 00)
  #include <subtractor.h>
  #if ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0) >= B_Q7_Q2
    #undef W_Q2
    #undef X_Q2
    #define W_Q2 9
    #define X_Q2 B_Q7_Q2
    #include <multiplier.h>
    #if SOLUTION11_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
      #undef W_Q2
      #define W_Q2 8
      #include <multiplier.h>
      #if SOLUTION11_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
        #undef W_Q2
        #define W_Q2 7
        #include <multiplier.h>
        #if SOLUTION11_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
          #undef W_Q2
          #define W_Q2 6
          #include <multiplier.h>
          #if SOLUTION11_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
            #undef W_Q2
            #define W_Q2 5
            #include <multiplier.h>
            #if SOLUTION11_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
              #undef W_Q2
              #define W_Q2 4
              #include <multiplier.h>
              #if SOLUTION11_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                #undef W_Q2
                #define W_Q2 3
                #include <multiplier.h>
                #if SOLUTION11_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                  #undef W_Q2
                  #define W_Q2 2
                  #include <multiplier.h>
                  #if SOLUTION11_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                    #define DIG5_Q2 1
                    #define REM5_Q2 B_Q7_Q2
                  #else
                    #define DIG5_Q2 2
                    #define REM5_Q2 SOLUTION11_Q2
                  #endif
                #else
                  #define DIG5_Q2 3
                  #define REM5_Q2 SOLUTION11_Q2
                #endif
              #else
                #define DIG5_Q2 4
                #define REM5_Q2 SOLUTION11_Q2
              #endif
            #else
              #define DIG5_Q2 5
              #define REM5_Q2 SOLUTION11_Q2
            #endif
          #else
            #define DIG5_Q2 6
            #define REM5_Q2 SOLUTION11_Q2
          #endif
        #else
          #define DIG5_Q2 7
          #define REM5_Q2 SOLUTION11_Q2
        #endif
      #else
        #define DIG5_Q2 8
        #define REM5_Q2 SOLUTION11_Q2
      #endif
    #else
      #define DIG5_Q2 9
      #define REM5_Q2 SOLUTION11_Q2
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B_Q7_Q2
    #define DIG5_Q2 0
    #undef W_Q2
    #undef X_Q2
    #define W_Q2 9
    #define X_Q2 B_Q7_Q2
    #include <multiplier.h>
    #if SOLUTION11_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef W_Q2
      #define W_Q2 8
      #include <multiplier.h>
      #if SOLUTION11_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef W_Q2
        #define W_Q2 7
        #include <multiplier.h>
        #if SOLUTION11_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef W_Q2
          #define W_Q2 6
          #include <multiplier.h>
          #if SOLUTION11_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef W_Q2
            #define W_Q2 5
            #include <multiplier.h>
            #if SOLUTION11_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef W_Q2
              #define W_Q2 4
              #include <multiplier.h>
              #if SOLUTION11_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef W_Q2
                #define W_Q2 3
                #include <multiplier.h>
                #if SOLUTION11_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #undef W_Q2
                  #define W_Q2 2
                  #include <multiplier.h>
                  #if SOLUTION11_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                    #define DIG6_Q2 1
                    #define REM6_Q2 B_Q7_Q2
                  #else
                    #define DIG6_Q2 2
                    #define REM6_Q2 SOLUTION11_Q2
                  #endif
                #else
                  #define DIG6_Q2 3
                  #define REM6_Q2 SOLUTION11_Q2
                #endif
              #else
                #define DIG6_Q2 4
                #define REM6_Q2 SOLUTION11_Q2
              #endif
            #else
              #define DIG6_Q2 5
              #define REM6_Q2 SOLUTION11_Q2
            #endif
          #else
            #define DIG6_Q2 6
            #define REM6_Q2 SOLUTION11_Q2
          #endif
        #else
          #define DIG6_Q2 7
          #define REM6_Q2 SOLUTION11_Q2
        #endif
      #else
        #define DIG6_Q2 8
        #define REM6_Q2 SOLUTION11_Q2
      #endif
    #else
      #define DIG6_Q2 9
      #define REM6_Q2 SOLUTION11_Q2
    #endif
  #else
    #define DIG5_Q2 0
    #define DIG6_Q2 0
  #endif
#endif

#ifndef DIG6_Q2
  #undef SQRT_2_Q2
  #undef SQRT_3_Q2
  #undef SQRT_4_Q2
  #undef SQRT_5_Q2
  #undef SQRT_6_Q2
  #undef SQRT_7_Q2
  #define SQRT_2_Q2
  #define SQRT_3_Q2
  #define SQRT_4_Q2
  #define SQRT_5_Q2
  #define SQRT_6_Q2
  #define SQRT_7_Q2
  #undef Y2_Q2
  #undef Z2_Q2
  #ifdef SOLUTION12_Q2
    #define Y2_Q2 SOLUTION12_Q2
  #else
    #ifdef SOLUTION10_Q2
      #define Y2_Q2 SOLUTION10_Q2
    #else
      #ifdef SOLUTION8_Q2
        #define Y2_Q2 SOLUTION8_Q2
      #else
        #ifdef SOLUTION4_Q2
          #define Y2_Q2 SOLUTION4_Q2
        #else
          #define Y2_Q2 A_Q7_Q2
        #endif
      #endif
    #endif
  #endif
  #define Z2_Q2 XJOIN(REM5_Q2, 0)
  #include <subtractor.h>
  #if ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B_Q7_Q2
    #undef W1_Q2
    #undef X1_Q2
    #define W1_Q2 9
    #define X1_Q2 B_Q7_Q2
    #include <multiplier.h>
    #if SOLUTION13_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef W1_Q2
      #define W1_Q2 8
      #include <multiplier.h>
      #if SOLUTION13_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef W1_Q2
        #define W1_Q2 7
        #include <multiplier.h>
        #if SOLUTION13_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef W1_Q2
          #define W1_Q2 6
          #include <multiplier.h>
          #if SOLUTION13_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef W1_Q2
            #define W1_Q2 5
            #include <multiplier.h>
            #if SOLUTION13_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef W1_Q2
              #define W1_Q2 4
              #include <multiplier.h>
              #if SOLUTION13_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef W1_Q2
                #define W1_Q2 3
                #include <multiplier.h>
                #if SOLUTION13_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #undef W1_Q2
                  #define W1_Q2 2
                  #include <multiplier.h>
                  #if SOLUTION13_Q2 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q2), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                    #define DIG6_Q2 1
                    #define REM6_Q2 B_Q7_Q2
                  #else
                    #define DIG6_Q2 2
                    #define REM6_Q2 SOLUTION13_Q2
                  #endif
                #else
                  #define DIG6_Q2 3
                  #define REM6_Q2 SOLUTION13_Q2
                #endif
              #else
                #define DIG6_Q2 4
                #define REM6_Q2 SOLUTION13_Q2
              #endif
            #else
              #define DIG6_Q2 5
              #define REM6_Q2 SOLUTION13_Q2
            #endif
          #else
            #define DIG6_Q2 6
            #define REM6_Q2 SOLUTION13_Q2
          #endif
        #else
          #define DIG6_Q2 7
          #define REM6_Q2 SOLUTION13_Q2
        #endif
      #else
        #define DIG6_Q2 8
        #define REM6_Q2 SOLUTION13_Q2
      #endif
    #else
      #define DIG6_Q2 9
      #define REM6_Q2 SOLUTION13_Q2
    #endif
  #else
    #define DIG6_Q2 0
  #endif
#endif
#endif
#endif
#ifdef QUAD_8
#ifndef QUAD_9
#if ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)) >= B_Q7_Q3
  #define SQRT_1_Q3
  #undef C_Q3
  #undef D_Q3
  #define C_Q3 9
  #define D_Q3 B_Q7_Q3
  #include <multiplier.h>
  #if SOLUTION1_Q3 > ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0))
    #undef C_Q3
    #define C_Q3 8
    #include <multiplier.h>
    #if SOLUTION1_Q3 > ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0))
      #undef C_Q3
      #define C_Q3 7
      #include <multiplier.h>
      #if SOLUTION1_Q3 > ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0))
        #undef C_Q3
        #define C_Q3 6
        #include <multiplier.h>
        #if SOLUTION1_Q3 > ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0))
          #undef C_Q3
          #define C_Q3 5
          #include <multiplier.h>
          #if SOLUTION1_Q3 > ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0))
            #undef C_Q3
            #define C_Q3 4
            #include <multiplier.h>
            #if SOLUTION1_Q3 > ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0))
              #undef C_Q3
              #define C_Q3 3
              #include <multiplier.h>
              #if SOLUTION1_Q3 > ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0))
                #undef C_Q3
                #define C_Q3 2
                #include <multiplier.h>
                #if SOLUTION1_Q3 > ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0))
                  #define DIG1_Q3 1
                  #define REM1_Q3 B_Q7_Q3
                #else
                  #define DIG1_Q3 2
                  #define REM1_Q3 SOLUTION1_Q3
                #endif
              #else
                #define DIG1_Q3 3
                #define REM1_Q3 SOLUTION1_Q3
              #endif
            #else
              #define DIG1_Q3 4
              #define REM1_Q3 SOLUTION1_Q3
            #endif
          #else
            #define DIG1_Q3 5
            #define REM1_Q3 SOLUTION1_Q3
          #endif
        #else
          #define DIG1_Q3 6
          #define REM1_Q3 SOLUTION1_Q3
        #endif
      #else
        #define DIG1_Q3 7
        #define REM1_Q3 SOLUTION1_Q3
      #endif
    #else
      #define DIG1_Q3 8
      #define REM1_Q3 SOLUTION1_Q3
    #endif
  #else
    #define DIG1_Q3 9
    #define REM1_Q3 SOLUTION1_Q3
  #endif
#elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0) >= B_Q7_Q3
  #define DIG1_Q3 0
  #define SQRT_1_Q3
  #undef C_Q3
  #undef D_Q3
  #define C_Q3 9
  #define D_Q3 B_Q7_Q3
  #include <multiplier.h>
  #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
    #undef C_Q3
    #define C_Q3 8
    #include <multiplier.h>
    #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
      #undef C_Q3
      #define C_Q3 7
      #include <multiplier.h>
      #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
        #undef C_Q3
        #define C_Q3 6
        #include <multiplier.h>
        #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
          #undef C_Q3
          #define C_Q3 5
          #include <multiplier.h>
          #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
            #undef C_Q3
            #define C_Q3 4
            #include <multiplier.h>
            #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
              #undef C_Q3
              #define C_Q3 3
              #include <multiplier.h>
              #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
                #undef C_Q3
                #define C_Q3 2
                #include <multiplier.h>
                #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
                  #define DIG2_Q3 1
                  #define REM2_Q3 B_Q7_Q3
                #else
                  #define DIG2_Q3 2
                  #define REM2_Q3 SOLUTION1_Q3
                #endif
              #else
                #define DIG2_Q3 3
                #define REM2_Q3 SOLUTION1_Q3
              #endif
            #else
              #define DIG2_Q3 4
              #define REM2_Q3 SOLUTION1_Q3
            #endif
          #else
            #define DIG2_Q3 5
            #define REM2_Q3 SOLUTION1_Q3
          #endif
        #else
          #define DIG2_Q3 6
          #define REM2_Q3 SOLUTION1_Q3
        #endif
      #else
        #define DIG2_Q3 7
        #define REM2_Q3 SOLUTION1_Q3
      #endif
    #else
      #define DIG2_Q3 8
      #define REM2_Q3 SOLUTION1_Q3
    #endif
  #else
    #define DIG2_Q3 9
    #define REM2_Q3 SOLUTION1_Q3
  #endif
#elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0) >= B_Q7_Q3
  #define DIG1_Q3 0
  #define DIG2_Q3 0
  #define SQRT_1_Q3
  #undef C_Q3
  #undef D_Q3
  #define C_Q3 9
  #define D_Q3 B_Q7_Q3
  #include <multiplier.h>
  #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
    #undef C_Q3
    #define C_Q3 8
    #include <multiplier.h>
    #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
      #undef C_Q3
      #define C_Q3 7
      #include <multiplier.h>
      #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
        #undef C_Q3
        #define C_Q3 6
        #include <multiplier.h>
        #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
          #undef C_Q3
          #define C_Q3 5
          #include <multiplier.h>
          #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
            #undef C_Q3
            #define C_Q3 4
            #include <multiplier.h>
            #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
              #undef C_Q3
              #define C_Q3 3
              #include <multiplier.h>
              #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                #undef C_Q3
                #define C_Q3 2
                #include <multiplier.h>
                #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                  #define DIG3_Q3 1
                  #define REM3_Q3 B_Q7_Q3
                #else
                  #define DIG3_Q3 2
                  #define REM3_Q3 SOLUTION1_Q3
                #endif
              #else
                #define DIG3_Q3 3
                #define REM3_Q3 SOLUTION1_Q3
              #endif
            #else
              #define DIG3_Q3 4
              #define REM3_Q3 SOLUTION1_Q3
            #endif
          #else
            #define DIG3_Q3 5
            #define REM3_Q3 SOLUTION1_Q3
          #endif
        #else
          #define DIG3_Q3 6
          #define REM3_Q3 SOLUTION1_Q3
        #endif
      #else
        #define DIG3_Q3 7
        #define REM3_Q3 SOLUTION1_Q3
      #endif
    #else
      #define DIG3_Q3 8
      #define REM3_Q3 SOLUTION1_Q3
    #endif
  #else
    #define DIG3_Q3 9
    #define REM3_Q3 SOLUTION1_Q3
  #endif
#elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0) >= B_Q7_Q3
  #define DIG1_Q3 0
  #define DIG2_Q3 0
  #define DIG3_Q3 0
  #define SQRT_1_Q3
  #undef C_Q3
  #undef D_Q3
  #define C_Q3 9
  #define D_Q3 B_Q7_Q3
  #include <multiplier.h>
  #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
    #undef C_Q3
    #define C_Q3 8
    #include <multiplier.h>
    #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef C_Q3
      #define C_Q3 7
      #include <multiplier.h>
      #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
        #undef C_Q3
        #define C_Q3 6
        #include <multiplier.h>
        #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
          #undef C_Q3
          #define C_Q3 5
          #include <multiplier.h>
          #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
            #undef C_Q3
            #define C_Q3 4
            #include <multiplier.h>
            #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
              #undef C_Q3
              #define C_Q3 3
              #include <multiplier.h>
              #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                #undef C_Q3
                #define C_Q3 2
                #include <multiplier.h>
                #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                  #define DIG4_Q3 1
                  #define REM4_Q3 B_Q7_Q3
                #else
                  #define DIG4_Q3 2
                  #define REM4_Q3 SOLUTION1_Q3
                #endif
              #else
                #define DIG4_Q3 3
                #define REM4_Q3 SOLUTION1_Q3
              #endif
            #else
              #define DIG4_Q3 4
              #define REM4_Q3 SOLUTION1_Q3
            #endif
          #else
            #define DIG4_Q3 5
            #define REM4_Q3 SOLUTION1_Q3
          #endif
        #else
          #define DIG4_Q3 6
          #define REM4_Q3 SOLUTION1_Q3
        #endif
      #else
        #define DIG4_Q3 7
        #define REM4_Q3 SOLUTION1_Q3
      #endif
    #else
      #define DIG4_Q3 8
      #define REM4_Q3 SOLUTION1_Q3
    #endif
  #else
    #define DIG4_Q3 9
    #define REM4_Q3 SOLUTION1_Q3
  #endif
#elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q3, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0) >= B_Q7_Q3
  #define DIG1_Q3 0
  #define DIG2_Q3 0
  #define DIG3_Q3 0
  #define DIG4_Q3 0
  #define SQRT_1_Q3
  #undef C_Q3
  #undef D_Q3
  #define C_Q3 9
  #define D_Q3 B_Q7_Q3
  #include <multiplier.h>
  #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q3, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
    #undef C_Q3
    #define C_Q3 8
    #include <multiplier.h>
    #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q3, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
      #undef C_Q3
      #define C_Q3 7
      #include <multiplier.h>
      #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q3, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
        #undef C_Q3
        #define C_Q3 6
        #include <multiplier.h>
        #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q3, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
          #undef C_Q3
          #define C_Q3 5
          #include <multiplier.h>
          #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q3, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
            #undef C_Q3
            #define C_Q3 4
            #include <multiplier.h>
            #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q3, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
              #undef C_Q3
              #define C_Q3 3
              #include <multiplier.h>
              #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q3, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                #undef C_Q3
                #define C_Q3 2
                #include <multiplier.h>
                #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(4, (A_DIV_Q3, 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                  #define DIG5_Q3 1
                  #define REM5_Q3 B_Q7_Q3
                #else
                  #define DIG5_Q3 2
                  #define REM5_Q3 SOLUTION1_Q3
                #endif
              #else
                #define DIG5_Q3 3
                #define REM5_Q3 SOLUTION1_Q3
              #endif
            #else
              #define DIG5_Q3 4
              #define REM5_Q3 SOLUTION1_Q3
            #endif
          #else
            #define DIG5_Q3 5
            #define REM5_Q3 SOLUTION1_Q3
          #endif
        #else
          #define DIG5_Q3 6
          #define REM5_Q3 SOLUTION1_Q3
        #endif
      #else
        #define DIG5_Q3 7
        #define REM5_Q3 SOLUTION1_Q3
      #endif
    #else
      #define DIG5_Q3 8
      #define REM5_Q3 SOLUTION1_Q3
    #endif
  #else
    #define DIG5_Q3 9
    #define REM5_Q3 SOLUTION1_Q3
  #endif
#elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q3, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B_Q7_Q3
  #define DIG1_Q3 0
  #define DIG2_Q3 0
  #define DIG3_Q3 0
  #define DIG4_Q3 0
  #define DIG5_Q3 0
  #define SQRT_1_Q3
  #undef C_Q3
  #undef D_Q3
  #define C_Q3 9
  #define D_Q3 B_Q7_Q3
  #include <multiplier.h>
  #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q3, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
    #undef C_Q3
    #define C_Q3 8
    #include <multiplier.h>
    #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q3, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef C_Q3
      #define C_Q3 7
      #include <multiplier.h>
      #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q3, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef C_Q3
        #define C_Q3 6
        #include <multiplier.h>
        #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q3, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef C_Q3
          #define C_Q3 5
          #include <multiplier.h>
          #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q3, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef C_Q3
            #define C_Q3 4
            #include <multiplier.h>
            #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q3, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef C_Q3
              #define C_Q3 3
              #include <multiplier.h>
              #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q3, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef C_Q3
                #define C_Q3 2
                #include <multiplier.h>
                #if SOLUTION1_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (A_DIV_Q3, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (A_DIV_Q3, 0, 0, 0, 0, 0)), ARGN(5, (A_DIV_Q3, 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #define DIG6_Q3 1
                  #define REM6_Q3 B_Q7_Q3
                #else
                  #define DIG6_Q3 2
                  #define REM6_Q3 SOLUTION1_Q3
                #endif
              #else
                #define DIG6_Q3 3
                #define REM6_Q3 SOLUTION1_Q3
              #endif
            #else
              #define DIG6_Q3 4
              #define REM6_Q3 SOLUTION1_Q3
            #endif
          #else
            #define DIG6_Q3 5
            #define REM6_Q3 SOLUTION1_Q3
          #endif
        #else
          #define DIG6_Q3 6
          #define REM6_Q3 SOLUTION1_Q3
        #endif
      #else
        #define DIG6_Q3 7
        #define REM6_Q3 SOLUTION1_Q3
      #endif
    #else
      #define DIG6_Q3 8
      #define REM6_Q3 SOLUTION1_Q3
    #endif
  #else
    #define DIG6_Q3 9
    #define REM6_Q3 SOLUTION1_Q3
  #endif
#else
  #define DIG1_Q3 0
  #define DIG2_Q3 0
  #define DIG3_Q3 0
  #define DIG4_Q3 0
  #define DIG5_Q3 0
  #define DIG6_Q3 0
#endif

#ifndef DIG2_Q3
  #undef I_Q3
  #undef J_Q3
  #define I_Q3 A_Q7_Q3
  #define J_Q3 ASSEMBLE(REM1_Q3, 0, 0, 0, 0, 0)
  #include <subtractor.h>
  #if ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0) >= B_Q7_Q3
    #undef SQRT_2_Q3
    #define SQRT_2_Q3
    #undef G_Q3
    #undef H_Q3
    #define G_Q3 9
    #define H_Q3 B_Q7_Q3
    #include <multiplier.h>
    #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
      #undef G_Q3
      #define G_Q3 8
      #include <multiplier.h>
      #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
        #undef G_Q3
        #define G_Q3 7
        #include <multiplier.h>
        #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
          #undef G_Q3
          #define G_Q3 6
          #include <multiplier.h>
          #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
            #undef G_Q3
            #define G_Q3 5
            #include <multiplier.h>
            #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
              #undef G_Q3
              #define G_Q3 4
              #include <multiplier.h>
              #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
                #undef G_Q3
                #define G_Q3 3
                #include <multiplier.h>
                #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
                  #undef G_Q3
                  #define G_Q3 2
                  #include <multiplier.h>
                  #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
                    #define DIG2_Q3 1
                    #define REM2_Q3 B_Q7_Q3
                  #else
                    #define DIG2_Q3 2
                    #define REM2_Q3 SOLUTION3_Q3
                  #endif
                #else
                  #define DIG2_Q3 3
                  #define REM2_Q3 SOLUTION3_Q3
                #endif
              #else
                #define DIG2_Q3 4
                #define REM2_Q3 SOLUTION3_Q3
              #endif
            #else
              #define DIG2_Q3 5
              #define REM2_Q3 SOLUTION3_Q3
            #endif
          #else
            #define DIG2_Q3 6
            #define REM2_Q3 SOLUTION3_Q3
          #endif
        #else
          #define DIG2_Q3 7
          #define REM2_Q3 SOLUTION3_Q3
        #endif
      #else
        #define DIG2_Q3 8
        #define REM2_Q3 SOLUTION3_Q3
      #endif
    #else
      #define DIG2_Q3 9
      #define REM2_Q3 SOLUTION3_Q3
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0))))), , 0, 0, 0, 0, 0) >= B_Q7_Q3
    #define DIG2_Q3 0
    #undef SQRT_2_Q3
    #define SQRT_2_Q3
    #undef G_Q3
    #undef H_Q3
    #define G_Q3 9
    #define H_Q3 B_Q7_Q3
    #include <multiplier.h>
    #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
      #undef G_Q3
      #define G_Q3 8
      #include <multiplier.h>
      #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
        #undef G_Q3
        #define G_Q3 7
        #include <multiplier.h>
        #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
          #undef G_Q3
          #define G_Q3 6
          #include <multiplier.h>
          #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
            #undef G_Q3
            #define G_Q3 5
            #include <multiplier.h>
            #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
              #undef G_Q3
              #define G_Q3 4
              #include <multiplier.h>
              #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                #undef G_Q3
                #define G_Q3 3
                #include <multiplier.h>
                #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                  #undef G_Q3
                  #define G_Q3 2
                  #include <multiplier.h>
                  #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                    #define DIG3_Q3 1
                    #define REM3_Q3 B_Q7_Q3
                  #else
                    #define DIG3_Q3 2
                    #define REM3_Q3 SOLUTION3_Q3
                  #endif
                #else
                  #define DIG3_Q3 3
                  #define REM3_Q3 SOLUTION3_Q3
                #endif
              #else
                #define DIG3_Q3 4
                #define REM3_Q3 SOLUTION3_Q3
              #endif
            #else
              #define DIG3_Q3 5
              #define REM3_Q3 SOLUTION3_Q3
            #endif
          #else
            #define DIG3_Q3 6
            #define REM3_Q3 SOLUTION3_Q3
          #endif
        #else
          #define DIG3_Q3 7
          #define REM3_Q3 SOLUTION3_Q3
        #endif
      #else
        #define DIG3_Q3 8
        #define REM3_Q3 SOLUTION3_Q3
      #endif
    #else
      #define DIG3_Q3 9
      #define REM3_Q3 SOLUTION3_Q3
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0) >= B_Q7_Q3
    #define DIG2_Q3 0
    #define DIG3_Q3 0
    #undef SQRT_2_Q3
    #define SQRT_2_Q3
    #undef G_Q3
    #undef H_Q3
    #define G_Q3 9
    #define H_Q3 B_Q7_Q3
    #include <multiplier.h>
    #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
      #undef G_Q3
      #define G_Q3 8
      #include <multiplier.h>
      #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
        #undef G_Q3
        #define G_Q3 7
        #include <multiplier.h>
        #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
          #undef G_Q3
          #define G_Q3 6
          #include <multiplier.h>
          #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
            #undef G_Q3
            #define G_Q3 5
            #include <multiplier.h>
            #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
              #undef G_Q3
              #define G_Q3 4
              #include <multiplier.h>
              #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                #undef G_Q3
                #define G_Q3 3
                #include <multiplier.h>
                #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                  #undef G_Q3
                  #define G_Q3 2
                  #include <multiplier.h>
                  #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                    #define DIG4_Q3 1
                    #define REM4_Q3 B_Q7_Q3
                  #else
                    #define DIG4_Q3 2
                    #define REM4_Q3 SOLUTION3_Q3
                  #endif
                #else
                  #define DIG4_Q3 3
                  #define REM4_Q3 SOLUTION3_Q3
                #endif
              #else
                #define DIG4_Q3 4
                #define REM4_Q3 SOLUTION3_Q3
              #endif
            #else
              #define DIG4_Q3 5
              #define REM4_Q3 SOLUTION3_Q3
            #endif
          #else
            #define DIG4_Q3 6
            #define REM4_Q3 SOLUTION3_Q3
          #endif
        #else
          #define DIG4_Q3 7
          #define REM4_Q3 SOLUTION3_Q3
        #endif
      #else
        #define DIG4_Q3 8
        #define REM4_Q3 SOLUTION3_Q3
      #endif
    #else
      #define DIG4_Q3 9
      #define REM4_Q3 SOLUTION3_Q3
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0) >= B_Q7_Q3
    #define DIG2_Q3 0
    #define DIG3_Q3 0
    #define DIG4_Q3 0
    #undef SQRT_2_Q3
    #define SQRT_2_Q3
    #undef G_Q3
    #undef H_Q3
    #define G_Q3 9
    #define H_Q3 B_Q7_Q3
    #include <multiplier.h>
    #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
      #undef G_Q3
      #define G_Q3 8
      #include <multiplier.h>
      #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
        #undef G_Q3
        #define G_Q3 7
        #include <multiplier.h>
        #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
          #undef G_Q3
          #define G_Q3 6
          #include <multiplier.h>
          #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
            #undef G_Q3
            #define G_Q3 5
            #include <multiplier.h>
            #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
              #undef G_Q3
              #define G_Q3 4
              #include <multiplier.h>
              #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                #undef G_Q3
                #define G_Q3 3
                #include <multiplier.h>
                #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                  #undef G_Q3
                  #define G_Q3 2
                  #include <multiplier.h>
                  #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                    #define DIG5_Q3 1
                    #define REM5_Q3 B_Q7_Q3
                  #else
                    #define DIG5_Q3 2
                    #define REM5_Q3 SOLUTION3_Q3
                  #endif
                #else
                  #define DIG5_Q3 3
                  #define REM5_Q3 SOLUTION3_Q3
                #endif
              #else
                #define DIG5_Q3 4
                #define REM5_Q3 SOLUTION3_Q3
              #endif
            #else
              #define DIG5_Q3 5
              #define REM5_Q3 SOLUTION3_Q3
            #endif
          #else
            #define DIG5_Q3 6
            #define REM5_Q3 SOLUTION3_Q3
          #endif
        #else
          #define DIG5_Q3 7
          #define REM5_Q3 SOLUTION3_Q3
        #endif
      #else
        #define DIG5_Q3 8
        #define REM5_Q3 SOLUTION3_Q3
      #endif
    #else
      #define DIG5_Q3 9
      #define REM5_Q3 SOLUTION3_Q3
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B_Q7_Q3
    #define DIG2_Q3 0
    #define DIG3_Q3 0
    #define DIG4_Q3 0
    #define DIG5_Q3 0
    #undef SQRT_2_Q3
    #define SQRT_2_Q3
    #undef G_Q3
    #undef H_Q3
    #define G_Q3 9
    #define H_Q3 B_Q7_Q3
    #include <multiplier.h>
    #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef G_Q3
      #define G_Q3 8
      #include <multiplier.h>
      #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef G_Q3
        #define G_Q3 7
        #include <multiplier.h>
        #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef G_Q3
          #define G_Q3 6
          #include <multiplier.h>
          #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef G_Q3
            #define G_Q3 5
            #include <multiplier.h>
            #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef G_Q3
              #define G_Q3 4
              #include <multiplier.h>
              #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef G_Q3
                #define G_Q3 3
                #include <multiplier.h>
                #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #undef G_Q3
                  #define G_Q3 2
                  #include <multiplier.h>
                  #if SOLUTION3_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                    #define DIG6_Q3 1
                    #define REM6_Q3 B_Q7_Q3
                  #else
                    #define DIG6_Q3 2
                    #define REM6_Q3 SOLUTION3_Q3
                  #endif
                #else
                  #define DIG6_Q3 3
                  #define REM6_Q3 SOLUTION3_Q3
                #endif
              #else
                #define DIG6_Q3 4
                #define REM6_Q3 SOLUTION3_Q3
              #endif
            #else
              #define DIG6_Q3 5
              #define REM6_Q3 SOLUTION3_Q3
            #endif
          #else
            #define DIG6_Q3 6
            #define REM6_Q3 SOLUTION3_Q3
          #endif
        #else
          #define DIG6_Q3 7
          #define REM6_Q3 SOLUTION3_Q3
        #endif
      #else
        #define DIG6_Q3 8
        #define REM6_Q3 SOLUTION3_Q3
      #endif
    #else
      #define DIG6_Q3 9
      #define REM6_Q3 SOLUTION3_Q3
    #endif
  #else
    #define DIG2_Q3 0
    #define DIG3_Q3 0
    #define DIG4_Q3 0
    #define DIG5_Q3 0
    #define DIG6_Q3 0
  #endif
#endif
#ifndef DIG3_Q3
  #undef SQRT_2_Q3
  #undef SQRT_3_Q3
  #undef SQRT_4_Q3
  #define SQRT_2_Q3
  #define SQRT_3_Q3
  #define SQRT_4_Q3
  #undef Q_Q3
  #undef R_Q3
  #ifdef SOLUTION4_Q3
    #define Q_Q3 SOLUTION4_Q3
  #else
    #define Q_Q3 A_Q7_Q3
  #endif
  #define R_Q3 XJOIN(REM2_Q3, 0000)
  #include <subtractor.h>
  #if ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0) >= B_Q7_Q3
    #undef O_Q3
    #undef P_Q3
    #define O_Q3 9
    #define P_Q3 B_Q7_Q3
    #include <multiplier.h>
    #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
      #undef O_Q3
      #define O_Q3 8
      #include <multiplier.h>
      #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
        #undef O_Q3
        #define O_Q3 7
        #include <multiplier.h>
        #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
          #undef O_Q3
          #define O_Q3 6
          #include <multiplier.h>
          #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
            #undef O_Q3
            #define O_Q3 5
            #include <multiplier.h>
            #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
              #undef O_Q3
              #define O_Q3 4
              #include <multiplier.h>
              #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                #undef O_Q3
                #define O_Q3 3
                #include <multiplier.h>
                #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                  #undef O_Q3
                  #define O_Q3 2
                  #include <multiplier.h>
                  #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                    #define DIG3_Q3 1
                    #define REM3_Q3 B_Q7_Q3
                  #else
                    #define DIG3_Q3 2
                    #define REM3_Q3 SOLUTION7_Q3
                  #endif
                #else
                  #define DIG3_Q3 3
                  #define REM3_Q3 SOLUTION7_Q3
                #endif
              #else
                #define DIG3_Q3 4
                #define REM3_Q3 SOLUTION7_Q3
              #endif
            #else
              #define DIG3_Q3 5
              #define REM3_Q3 SOLUTION7_Q3
            #endif
          #else
            #define DIG3_Q3 6
            #define REM3_Q3 SOLUTION7_Q3
          #endif
        #else
          #define DIG3_Q3 7
          #define REM3_Q3 SOLUTION7_Q3
        #endif
      #else
        #define DIG3_Q3 8
        #define REM3_Q3 SOLUTION7_Q3
      #endif
    #else
      #define DIG3_Q3 9
      #define REM3_Q3 SOLUTION7_Q3
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0) >= B_Q7_Q3
    #define DIG3_Q3 0
    #undef O_Q3
    #undef P_Q3
    #define O_Q3 9
    #define P B_Q7_Q3
    #include <multiplier.h>
    #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
      #undef O_Q3
      #define O_Q3 8
      #include <multiplier.h>
      #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
        #undef O_Q3
        #define O_Q3 7
        #include <multiplier.h>
        #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
          #undef O_Q3
          #define O_Q3 6
          #include <multiplier.h>
          #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
            #undef O_Q3
            #define O_Q3 5
            #include <multiplier.h>
            #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
              #undef O_Q3
              #define O_Q3 4
              #include <multiplier.h>
              #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                #undef O_Q3
                #define O_Q3 3
                #include <multiplier.h>
                #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                  #undef O_Q3
                  #define O_Q3 2
                  #include <multiplier.h>
                  #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                    #define DIG4_Q3 1
                    #define REM4_Q3 B_Q7_Q3
                  #else
                    #define DIG4_Q3 2
                    #define REM4_Q3 SOLUTION7_Q3
                  #endif
                #else
                  #define DIG4_Q3 3
                  #define REM4_Q3 SOLUTION7_Q3
                #endif
              #else
                #define DIG4_Q3 4
                #define REM4_Q3 SOLUTION7_Q3
              #endif
            #else
              #define DIG4_Q3 5
              #define REM4_Q3 SOLUTION7_Q3
            #endif
          #else
            #define DIG4_Q3 6
            #define REM4_Q3 SOLUTION7_Q3
          #endif
        #else
          #define DIG4_Q3 7
          #define REM4_Q3 SOLUTION7_Q3
        #endif
      #else
        #define DIG4_Q3 8
        #define REM4_Q3 SOLUTION7_Q3
      #endif
    #else
      #define DIG4_Q3 9
      #define REM4_Q3 SOLUTION7_Q3
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0) >= B_Q7_Q3
    #define DIG3_Q3 0
    #define DIG4_Q3 0
    #undef O_Q3
    #undef P_Q3
    #define O_Q3 9
    #define P B_Q7_Q3
    #include <multiplier.h>
    #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
      #undef O_Q3
      #define O_Q3 8
      #include <multiplier.h>
      #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
        #undef O_Q3
        #define O_Q3 7
        #include <multiplier.h>
        #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
          #undef O_Q3
          #define O_Q3 6
          #include <multiplier.h>
          #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
            #undef O_Q3
            #define O_Q3 5
            #include <multiplier.h>
            #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
              #undef O_Q3
              #define O_Q3 4
              #include <multiplier.h>
              #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                #undef O_Q3
                #define O_Q3 3
                #include <multiplier.h>
                #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                  #undef O_Q3
                  #define O_Q3 2
                  #include <multiplier.h>
                  #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                    #define DIG5_Q3 1
                    #define REM5_Q3 B_Q7_Q3
                  #else
                    #define DIG5_Q3 2
                    #define REM5_Q3 SOLUTION7_Q3
                  #endif
                #else
                  #define DIG5_Q3 3
                  #define REM5_Q3 SOLUTION7_Q3
                #endif
              #else
                #define DIG5_Q3 4
                #define REM5_Q3 SOLUTION7_Q3
              #endif
            #else
              #define DIG5_Q3 5
              #define REM5_Q3 SOLUTION7_Q3
            #endif
          #else
            #define DIG5_Q3 6
            #define REM5_Q3 SOLUTION7_Q3
          #endif
        #else
          #define DIG5_Q3 7
          #define REM5_Q3 SOLUTION7_Q3
        #endif
      #else
        #define DIG5_Q3 8
        #define REM5_Q3 SOLUTION7_Q3
      #endif
    #else
      #define DIG5_Q3 9
      #define REM5_Q3 SOLUTION7_Q3
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B_Q7_Q3
    #define DIG3_Q3 0
    #define DIG4_Q3 0
    #define DIG5_Q3 0
    #undef O_Q3
    #undef P_Q3
    #define O_Q3 9
    #define P B_Q7_Q3
    #include <multiplier.h>
    #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef O_Q3
      #define O_Q3 8
      #include <multiplier.h>
      #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef O_Q3
        #define O_Q3 7
        #include <multiplier.h>
        #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef O_Q3
          #define O_Q3 6
          #include <multiplier.h>
          #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef O_Q3
            #define O_Q3 5
            #include <multiplier.h>
            #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef O_Q3
              #define O_Q3 4
              #include <multiplier.h>
              #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef O_Q3
                #define O_Q3 3
                #include <multiplier.h>
                #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #undef O_Q3
                  #define O_Q3 2
                  #include <multiplier.h>
                  #if SOLUTION7_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION8_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                    #define DIG6_Q3 1
                    #define REM6_Q3 B_Q7_Q3
                  #else
                    #define DIG6_Q3 2
                    #define REM6_Q3 SOLUTION7_Q3
                  #endif
                #else
                  #define DIG6_Q3 3
                  #define REM6_Q3 SOLUTION7_Q3
                #endif
              #else
                #define DIG6_Q3 4
                #define REM6_Q3 SOLUTION7_Q3
              #endif
            #else
              #define DIG6_Q3 5
              #define REM6_Q3 SOLUTION7_Q3
            #endif
          #else
            #define DIG6_Q3 6
            #define REM6_Q3 SOLUTION7_Q3
          #endif
        #else
          #define DIG6_Q3 7
          #define REM6_Q3 SOLUTION7_Q3
        #endif
      #else
        #define DIG6_Q3 8
        #define REM6_Q3 SOLUTION7_Q3
      #endif
    #else
      #define DIG6_Q3 9
      #define REM6_Q3 SOLUTION7_Q3
    #endif
  #else
    #define DIG3_Q3 0
    #define DIG4_Q3 0
    #define DIG5_Q3 0
    #define DIG6_Q3 0
  #endif
#endif

#ifndef DIG4_Q3
  #undef SQRT_2_Q3
  #undef SQRT_3_Q3
  #undef SQRT_4_Q3
  #undef SQRT_5_Q3
  #define SQRT_2_Q3
  #define SQRT_3_Q3
  #define SQRT_4_Q3
  #define SQRT_5_Q3
  #undef Y_Q3
  #undef Z_Q3
  #ifdef SOLUTION8_Q3
    #define Y_Q3 SOLUTION8_Q3
  #else
    #ifdef SOLUTION4_Q3
      #define Y_Q3 SOLUTION4_Q3
    #else
      #define Y_Q3 A_Q7_Q3
    #endif
  #endif
  #define Z_Q3 XJOIN(REM3_Q3, 000)
  #include <subtractor.h>
  #if ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0) >= B_Q7_Q3
    #undef S_Q3
    #undef T_Q3
    #define S_Q3 9
    #define T_Q3 B_Q7_Q3
    #include <multiplier.h>
    #if SOLUTION9_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
      #undef S_Q3
      #define S_Q3 8
      #include <multiplier.h>
      #if SOLUTION9_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
        #undef S_Q3
        #define S_Q3 7
        #include <multiplier.h>
        #if SOLUTION9_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
          #undef S_Q3
          #define S_Q3 6
          #include <multiplier.h>
          #if SOLUTION9_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
            #undef S_Q3
            #define S_Q3 5
            #include <multiplier.h>
            #if SOLUTION9_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
              #undef S_Q3
              #define S_Q3 4
              #include <multiplier.h>
              #if SOLUTION9_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                #undef S_Q3
                #define S_Q3 3
                #include <multiplier.h>
                #if SOLUTION9_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                  #undef S_Q3
                  #define S_Q3 2
                  #include <multiplier.h>
                  #if SOLUTION9_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                    #define DIG4_Q3 1
                    #define REM4_Q3 B_Q7_Q3
                  #else
                    #define DIG4_Q3 2
                    #define REM4_Q3 SOLUTION9_Q3
                  #endif
                #else
                  #define DIG4_Q3 3
                  #define REM4_Q3 SOLUTION9_Q3
                #endif
              #else
                #define DIG4_Q3 4
                #define REM4_Q3 SOLUTION9_Q3
              #endif
            #else
              #define DIG4_Q3 5
              #define REM4_Q3 SOLUTION9_Q3
            #endif
          #else
            #define DIG4_Q3 6
            #define REM4_Q3 SOLUTION9_Q3
          #endif
        #else
          #define DIG4_Q3 7
          #define REM4_Q3 SOLUTION9_Q3
        #endif
      #else
        #define DIG4_Q3 8
        #define REM4_Q3 SOLUTION9_Q3
      #endif
    #else
      #define DIG4_Q3 9
      #define REM4_Q3 SOLUTION9_Q3
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0) >= B_Q7_Q3
    #define DIG4_Q3 0
    #undef S_Q3
    #undef T_Q3
    #define S_Q3 9
    #define T_Q3 B_Q7_Q3
    #include <multiplier.h>
    #if SOLUTION9_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
      #undef S_Q3
      #define S_Q3 8
      #include <multiplier.h>
      #if SOLUTION9_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
        #undef S_Q3
        #define S_Q3 7
        #include <multiplier.h>
        #if SOLUTION9_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
          #undef S_Q3
          #define S_Q3 6
          #include <multiplier.h>
          #if SOLUTION9_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
            #undef S_Q3
            #define S_Q3 5
            #include <multiplier.h>
            #if SOLUTION9_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
              #undef S_Q3
              #define S_Q3 4
              #include <multiplier.h>
              #if SOLUTION9_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                #undef S_Q3
                #define S_Q3 3
                #include <multiplier.h>
                #if SOLUTION9_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                  #undef S_Q3
                  #define S_Q3 2
                  #include <multiplier.h>
                  #if SOLUTION9_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                    #define DIG5_Q3 1
                    #define REM5_Q3 B_Q7_Q3
                  #else
                    #define DIG5_Q3 2
                    #define REM5_Q3 SOLUTION9_Q3
                  #endif
                #else
                  #define DIG5_Q3 3
                  #define REM5_Q3 SOLUTION9_Q3
                #endif
              #else
                #define DIG5_Q3 4
                #define REM5_Q3 SOLUTION9_Q3
              #endif
            #else
              #define DIG5_Q3 5
              #define REM5_Q3 SOLUTION9_Q3
            #endif
          #else
            #define DIG5_Q3 6
            #define REM5_Q3 SOLUTION9_Q3
          #endif
        #else
          #define DIG5_Q3 7
          #define REM5_Q3 SOLUTION9_Q3
        #endif
      #else
        #define DIG5_Q3 8
        #define REM5_Q3 SOLUTION9_Q3
      #endif
    #else
      #define DIG5_Q3 9
      #define REM5_Q3 SOLUTION9_Q3
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B_Q7_Q3
    #define DIG4_Q3 0
    #define DIG5_Q3 0
    #undef S_Q3
    #undef T_Q3
    #define S_Q3 9
    #define T_Q3 B_Q7_Q3
    #include <multiplier.h>
    #if SOLUTION9_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef S_Q3
      #define S_Q3 8
      #include <multiplier.h>
      #if SOLUTION9_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef S_Q3
        #define S_Q3 7
        #include <multiplier.h>
        #if SOLUTION9_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef S_Q3
          #define S_Q3 6
          #include <multiplier.h>
          #if SOLUTION9_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef S_Q3
            #define S_Q3 5
            #include <multiplier.h>
            #if SOLUTION9_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef S_Q3
              #define S_Q3 4
              #include <multiplier.h>
              #if SOLUTION9_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef S_Q3
                #define S_Q3 3
                #include <multiplier.h>
                #if SOLUTION9_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #undef S_Q3
                  #define S_Q3 2
                  #include <multiplier.h>
                  #if SOLUTION9_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION10_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                    #define DIG6_Q3 1
                    #define REM6_Q3 B_Q7_Q3
                  #else
                    #define DIG6_Q3 2
                    #define REM6_Q3 SOLUTION9_Q3
                  #endif
                #else
                  #define DIG6_Q3 3
                  #define REM6_Q3 SOLUTION9_Q3
                #endif
              #else
                #define DIG6_Q3 4
                #define REM6_Q3 SOLUTION9_Q3
              #endif
            #else
              #define DIG6_Q3 5
              #define REM6_Q3 SOLUTION9_Q3
            #endif
          #else
            #define DIG6_Q3 6
            #define REM6_Q3 SOLUTION9_Q3
          #endif
        #else
          #define DIG6_Q3 7
          #define REM6_Q3 SOLUTION9_Q3
        #endif
      #else
        #define DIG6_Q3 8
        #define REM6_Q3 SOLUTION9_Q3
      #endif
    #else
      #define DIG6_Q3 9
      #define REM6_Q3 SOLUTION9_Q3
    #endif
  #else
    #define DIG4_Q3 0
    #define DIG5_Q3 0
    #define DIG6_Q3 0
  #endif
#endif

#ifndef DIG5_Q3
  #undef SQRT_2_Q3
  #undef SQRT_3_Q3
  #undef SQRT_4_Q3
  #undef SQRT_5_Q3
  #undef SQRT_6_Q3
  #define SQRT_2_Q3
  #define SQRT_3_Q3
  #define SQRT_4_Q3
  #define SQRT_5_Q3
  #define SQRT_6_Q3
  #undef Y1_Q3
  #undef Z1_Q3
  #ifdef SOLUTION10_Q3
    #define Y1_Q3 SOLUTION10_Q3
  #else
    #ifdef SOLUTION8_Q3
      #define Y1_Q3 SOLUTION8_Q3
    #else
      #ifdef SOLUTION4_Q3
        #define Y1_Q3 SOLUTION4_Q3
      #else
        #define Y1_Q3 A_Q3
      #endif
    #endif
  #endif
  #define Z1_Q3 XJOIN(REM4_Q3, 00)
  #include <subtractor.h>
  #if ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0) >= B_Q7_Q3
    #undef W_Q3
    #undef X_Q3
    #define W_Q3 9
    #define X_Q3 B_Q7_Q3
    #include <multiplier.h>
    #if SOLUTION11_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
      #undef W_Q3
      #define W_Q3 8
      #include <multiplier.h>
      #if SOLUTION11_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
        #undef W_Q3
        #define W_Q3 7
        #include <multiplier.h>
        #if SOLUTION11_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
          #undef W_Q3
          #define W_Q3 6
          #include <multiplier.h>
          #if SOLUTION11_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
            #undef W_Q3
            #define W_Q3 5
            #include <multiplier.h>
            #if SOLUTION11_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
              #undef W_Q3
              #define W_Q3 4
              #include <multiplier.h>
              #if SOLUTION11_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                #undef W_Q3
                #define W_Q3 3
                #include <multiplier.h>
                #if SOLUTION11_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                  #undef W_Q3
                  #define W_Q3 2
                  #include <multiplier.h>
                  #if SOLUTION11_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                    #define DIG5_Q3 1
                    #define REM5_Q3 B_Q7_Q3
                  #else
                    #define DIG5_Q3 2
                    #define REM5_Q3 SOLUTION11_Q3
                  #endif
                #else
                  #define DIG5_Q3 3
                  #define REM5_Q3 SOLUTION11_Q3
                #endif
              #else
                #define DIG5_Q3 4
                #define REM5_Q3 SOLUTION11_Q3
              #endif
            #else
              #define DIG5_Q3 5
              #define REM5_Q3 SOLUTION11_Q3
            #endif
          #else
            #define DIG5_Q3 6
            #define REM5_Q3 SOLUTION11_Q3
          #endif
        #else
          #define DIG5_Q3 7
          #define REM5_Q3 SOLUTION11_Q3
        #endif
      #else
        #define DIG5_Q3 8
        #define REM5_Q3 SOLUTION11_Q3
      #endif
    #else
      #define DIG5_Q3 9
      #define REM5_Q3 SOLUTION11_Q3
    #endif
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B_Q7_Q3
    #define DIG5_Q3 0
    #undef W_Q3
    #undef X_Q3
    #define W_Q3 9
    #define X_Q3 B_Q7_Q3
    #include <multiplier.h>
    #if SOLUTION11_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef W_Q3
      #define W_Q3 8
      #include <multiplier.h>
      #if SOLUTION11_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef W_Q3
        #define W_Q3 7
        #include <multiplier.h>
        #if SOLUTION11_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef W_Q3
          #define W_Q3 6
          #include <multiplier.h>
          #if SOLUTION11_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef W_Q3
            #define W_Q3 5
            #include <multiplier.h>
            #if SOLUTION11_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef W_Q3
              #define W_Q3 4
              #include <multiplier.h>
              #if SOLUTION11_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef W_Q3
                #define W_Q3 3
                #include <multiplier.h>
                #if SOLUTION11_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #undef W_Q3
                  #define W_Q3 2
                  #include <multiplier.h>
                  #if SOLUTION11_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION12_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                    #define DIG6_Q3 1
                    #define REM6_Q3 B_Q7_Q3
                  #else
                    #define DIG6_Q3 2
                    #define REM6_Q3 SOLUTION11_Q3
                  #endif
                #else
                  #define DIG6_Q3 3
                  #define REM6_Q3 SOLUTION11_Q3
                #endif
              #else
                #define DIG6_Q3 4
                #define REM6_Q3 SOLUTION11_Q3
              #endif
            #else
              #define DIG6_Q3 5
              #define REM6_Q3 SOLUTION11_Q3
            #endif
          #else
            #define DIG6_Q3 6
            #define REM6_Q3 SOLUTION11_Q3
          #endif
        #else
          #define DIG6_Q3 7
          #define REM6_Q3 SOLUTION11_Q3
        #endif
      #else
        #define DIG6_Q3 8
        #define REM6_Q3 SOLUTION11_Q3
      #endif
    #else
      #define DIG6_Q3 9
      #define REM6_Q3 SOLUTION11_Q3
    #endif
  #else
    #define DIG5_Q3 0
    #define DIG6_Q3 0
  #endif
#endif

#ifndef DIG6_Q3
  #undef SQRT_2_Q3
  #undef SQRT_3_Q3
  #undef SQRT_4_Q3
  #undef SQRT_5_Q3
  #undef SQRT_6_Q3
  #undef SQRT_7_Q3
  #define SQRT_2_Q3
  #define SQRT_3_Q3
  #define SQRT_4_Q3
  #define SQRT_5_Q3
  #define SQRT_6_Q3
  #define SQRT_7_Q3
  #undef Y2_Q3
  #undef Z2_Q3
  #ifdef SOLUTION12_Q3
    #define Y2_Q3 SOLUTION12_Q3
  #else
    #ifdef SOLUTION10_Q3
      #define Y2_Q3 SOLUTION10_Q3
    #else
      #ifdef SOLUTION8_Q3
        #define Y2_Q3 SOLUTION8_Q3
      #else
        #ifdef SOLUTION4_Q3
          #define Y2_Q3 SOLUTION4_Q3
        #else
          #define Y2_Q3 A_Q7_Q3
        #endif
      #endif
    #endif
  #endif
  #define Z2_Q3 XJOIN(REM5_Q3, 0)
  #include <subtractor.h>
  #if ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B_Q7_Q3
    #undef W1_Q3
    #undef X1_Q3
    #define W1_Q3 9
    #define X1_Q3 B_Q7_Q3
    #include <multiplier.h>
    #if SOLUTION13_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef W1_Q3
      #define W1_Q3 8
      #include <multiplier.h>
      #if SOLUTION13_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef W1_Q3
        #define W1_Q3 7
        #include <multiplier.h>
        #if SOLUTION13_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef W1_Q3
          #define W1_Q3 6
          #include <multiplier.h>
          #if SOLUTION13_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef W1_Q3
            #define W1_Q3 5
            #include <multiplier.h>
            #if SOLUTION13_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef W1_Q3
              #define W1_Q3 4
              #include <multiplier.h>
              #if SOLUTION13_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef W1_Q3
                #define W1_Q3 3
                #include <multiplier.h>
                #if SOLUTION13_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #undef W1_Q3
                  #define W1_Q3 2
                  #include <multiplier.h>
                  #if SOLUTION13_Q3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION14_Q3), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                    #define DIG6_Q3 1
                    #define REM6_Q3 B_Q7_Q3
                  #else
                    #define DIG6_Q3 2
                    #define REM6_Q3 SOLUTION13_Q3
                  #endif
                #else
                  #define DIG6_Q3 3
                  #define REM6_Q3 SOLUTION13_Q3
                #endif
              #else
                #define DIG6_Q3 4
                #define REM6_Q3 SOLUTION13_Q3
              #endif
            #else
              #define DIG6_Q3 5
              #define REM6_Q3 SOLUTION13_Q3
            #endif
          #else
            #define DIG6_Q3 6
            #define REM6_Q3 SOLUTION13_Q3
          #endif
        #else
          #define DIG6_Q3 7
          #define REM6_Q3 SOLUTION13_Q3
        #endif
      #else
        #define DIG6_Q3 8
        #define REM6_Q3 SOLUTION13_Q3
      #endif
    #else
      #define DIG6_Q3 9
      #define REM6_Q3 SOLUTION13_Q3
    #endif
  #else
    #define DIG6_Q3 0
  #endif
#endif
#endif
#endif

#ifndef QUAD_5
  #undef SOLUTION
  #define SOLUTION ASSEMBLE(XJOIN(_, XJOIN(DIG1, XJOIN(DIG2, XJOIN(DIG3, XJOIN(DIG4, XJOIN(DIG5, DIG6)))))), 0, 0, 0, 0, 0)
#endif
#ifdef QUAD_5
  #ifndef QUAD_7
    #undef SOLUTION_QUAD1
    #define SOLUTION_QUAD1 ASSEMBLE(XJOIN(_, XJOIN(DIG1_Q1, XJOIN(DIG2_Q1, XJOIN(DIG3_Q1, XJOIN(DIG4_Q1, XJOIN(DIG5_Q1, DIG6_Q1)))))), 0, 0, 0, 0, 0)
  #endif
#endif
#ifdef QUAD_7
  #ifndef QUAD_8
    #undef SOLUTION_QUAD1
    #define SOLUTION_QUAD1 ASSEMBLE(XJOIN(_, XJOIN(DIG1_Q2, XJOIN(DIG2_Q2, XJOIN(DIG3_Q2, XJOIN(DIG4_Q2, XJOIN(DIG5_Q2, DIG6_Q2)))))), 0, 0, 0, 0, 0)
  #endif
#endif
#ifdef QUAD_8
  #ifndef QUAD_9
    #undef SOLUTION_QUAD2
    #define SOLUTION_QUAD2 ASSEMBLE(XJOIN(_, XJOIN(DIG1_Q3, XJOIN(DIG2_Q3, XJOIN(DIG3_Q3, XJOIN(DIG4_Q3, XJOIN(DIG5_Q3, DIG6_Q3)))))), 0, 0, 0, 0, 0)
  #endif
#endif

#undef SQRT_1
#undef SQRT_2
#undef SQRT_3
#undef SQRT_4
#undef SQRT_5
#undef SQRT_6
#undef SQRT_7

#undef SQRT_1_Q1
#undef SQRT_2_Q1
#undef SQRT_3_Q1
#undef SQRT_4_Q1
#undef SQRT_5_Q1
#undef SQRT_6_Q1
#undef SQRT_7_Q1

#undef SQRT_1_Q2
#undef SQRT_2_Q2
#undef SQRT_3_Q2
#undef SQRT_4_Q2
#undef SQRT_5_Q2
#undef SQRT_6_Q2
#undef SQRT_7_Q2

#undef SQRT_1_Q3
#undef SQRT_2_Q3
#undef SQRT_3_Q3
#undef SQRT_4_Q3
#undef SQRT_5_Q3
#undef SQRT_6_Q3
#undef SQRT_7_Q3
