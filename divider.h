#include <processed_numbers.h>
#include <full_adder.h>
#include <utils.h>
#include <getdigit.h>

#undef A_DIV_
#define A_DIV_ XJOIN(_, A)
#undef B_DIV_
#define B_DIV_ XJOIN(_, B)

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
#undef SOLUTION4
#undef SOLUTION7
#undef SOLUTION8
#undef SOLUTION9
#undef SOLUTION10
#undef SOLUTION11
#undef SOLUTION12
#undef SOLUTION13
#undef SOLUTION14

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
  #if ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0) >= B
    #undef SQRT_2
    #define SQRT_2
    #undef G
    #undef H
    #define G 9
    #define H B
    #include <multiplier.h>
    #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
      #undef G
      #define G 8
      #include <multiplier.h>
      #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
        #undef G
        #define G 7
        #include <multiplier.h>
        #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
          #undef G
          #define G 6
          #include <multiplier.h>
          #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
            #undef G
            #define G 5
            #include <multiplier.h>
            #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
              #undef G
              #define G 4
              #include <multiplier.h>
              #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
                #undef G
                #define G 3
                #include <multiplier.h>
                #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
                  #undef G
                  #define G 2
                  #include <multiplier.h>
                  #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))), 0, 0, 0, 0, 0)
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
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0))))), , 0, 0, 0, 0, 0) >= B
    #define DIG2 0
    #undef SQRT_2
    #define SQRT_2
    #undef G
    #undef H
    #define G 9
    #define H B
    #include <multiplier.h>
    #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
      #undef G
      #define G 8
      #include <multiplier.h>
      #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
        #undef G
        #define G 7
        #include <multiplier.h>
        #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
          #undef G
          #define G 6
          #include <multiplier.h>
          #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
            #undef G
            #define G 5
            #include <multiplier.h>
            #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
              #undef G
              #define G 4
              #include <multiplier.h>
              #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                #undef G
                #define G 3
                #include <multiplier.h>
                #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
                  #undef G
                  #define G 2
                  #include <multiplier.h>
                  #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0))))), 0, 0, 0, 0, 0)
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
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0) >= B
    #define DIG2 0
    #define DIG3 0
    #undef SQRT_2
    #define SQRT_2
    #undef G
    #undef H
    #define G 9
    #define H B
    #include <multiplier.h>
    #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
      #undef G
      #define G 8
      #include <multiplier.h>
      #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
        #undef G
        #define G 7
        #include <multiplier.h>
        #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
          #undef G
          #define G 6
          #include <multiplier.h>
          #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
            #undef G
            #define G 5
            #include <multiplier.h>
            #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
              #undef G
              #define G 4
              #include <multiplier.h>
              #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                #undef G
                #define G 3
                #include <multiplier.h>
                #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
                  #undef G
                  #define G 2
                  #include <multiplier.h>
                  #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))))), 0, 0, 0, 0, 0)
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
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0) >= B
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
    #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
      #undef G
      #define G 8
      #include <multiplier.h>
      #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
        #undef G
        #define G 7
        #include <multiplier.h>
        #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
          #undef G
          #define G 6
          #include <multiplier.h>
          #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
            #undef G
            #define G 5
            #include <multiplier.h>
            #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
              #undef G
              #define G 4
              #include <multiplier.h>
              #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                #undef G
                #define G 3
                #include <multiplier.h>
                #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
                  #undef G
                  #define G 2
                  #include <multiplier.h>
                  #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(4, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0))))))), 0, 0, 0, 0, 0)
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
  #elif ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0) >= B
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
    #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
      #undef G
      #define G 8
      #include <multiplier.h>
      #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
        #undef G
        #define G 7
        #include <multiplier.h>
        #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
          #undef G
          #define G 6
          #include <multiplier.h>
          #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
            #undef G
            #define G 5
            #include <multiplier.h>
            #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
              #undef G
              #define G 4
              #include <multiplier.h>
              #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                #undef G
                #define G 3
                #include <multiplier.h>
                #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
                  #undef G
                  #define G 2
                  #include <multiplier.h>
                  #if SOLUTION3 > ASSEMBLE(XJOIN(_, XJOIN(ARGN(0, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)), ARGN(5, (XJOIN(_, SOLUTION4), 0, 0, 0, 0, 0)))))))), 0, 0, 0, 0, 0)
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
  #ifdef SOLUTION4
    #define Q SOLUTION4
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
    #ifdef SOLUTION4
      #define Y SOLUTION4
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
      #ifdef SOLUTION4
        #define Y1 SOLUTION4
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
      #define Y1 SOLUTION10
    #else
      #ifdef SOLUTION8
        #define Y1 SOLUTION8
      #else
        #ifdef SOLUTION4
          #define Y1 SOLUTION4
        #else
          #define Y1 A
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

#undef SOLUTION
#define SOLUTION ASSEMBLE(XJOIN(_, XJOIN(DIG1, XJOIN(DIG2, XJOIN(DIG3, XJOIN(DIG4, XJOIN(DIG5, DIG6)))))), 0, 0, 0, 0, 0)

#undef SQRT_1
#undef SQRT_2
#undef SQRT_3
#undef SQRT_4
#undef SQRT_5
#undef SQRT_6
#undef SQRT_7
