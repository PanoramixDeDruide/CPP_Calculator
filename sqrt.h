#include <processed_numbers.h>
#include <full_adder.h>
#include <utils.h>
#include <getdigit.h>

#define A_SQRT_ XJOIN(_, A)

#undef CIFY
#define CIFY(a1, a2, a3, a4, a5, a6, b1, b2, b3, b4, b5, b6, ...) XJOIN(___, XJOIN(ARGN(2, (a1, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (a1, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (a1, 0, 0, 0, 0, 0)), XJOIN(ARGN(5, (a1, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (a2, 0, 0, 0, 0, 0)), ARGN(5, (a2, 0, 0, 0, 0, 0))))))))

#undef PAIR0
#undef PAIR1
#undef PAIR2
#undef PAIR3

#define PAIR1 0, 0, 0, 0, ARGN(4, (A_SQRT_, 0, 0, 0, 0, 0)), ARGN(5, (A_SQRT_, 0, 0, 0, 0, 0))
#define PAIR2 0, 0, 0, 0, ARGN(2, (A_SQRT_, 0, 0, 0, 0, 0)), ARGN(3, (A_SQRT_, 0, 0, 0, 0, 0))
#define PAIR3 0, 0, 0, 0, ARGN(0, (A_SQRT_, 0, 0, 0, 0, 0)), ARGN(1, (A_SQRT_, 0, 0, 0, 0, 0))

#undef SQRT_1
#define SQRT_1
#undef C
#define C 0
#undef D
#define D 20

#include <multiplier.h>

#undef E
#undef F
#define E SOLUTION1
#define F 9

#include <adder.h>
#undef SQRT_2
#define SQRT_2

#undef G
#define G SOLUTION2
#undef H
#define H 9

#include <multiplier.h>
#undef Y
#undef OUT1
#if SOLUTION3 > ASSEMBLE(PAIR3, 0, 0, 0, 0, 0)
  #undef E
  #undef F
  #define E SOLUTION1
  #define F 8

  #include <adder.h>

  #undef SQRT_2
  #define SQRT_2

  #undef G
  #define G SOLUTION2
  #undef H
  #define H 8
  #include <multiplier.h>
  #if SOLUTION3 > ASSEMBLE(PAIR3, 0, 0, 0, 0, 0)
    #undef E
    #undef F
    #define E SOLUTION1
    #define F 7

    #include <adder.h>

    #undef SQRT_2
    #define SQRT_2

    #undef G
    #define G SOLUTION2
    #undef H
    #define H 7
    #include <multiplier.h>
    #if SOLUTION3 > ASSEMBLE(PAIR3, 0, 0, 0, 0, 0)
      #undef E
      #undef F
      #define E SOLUTION1
      #define F 6

      #include <adder.h>

      #undef SQRT_2
      #define SQRT_2

      #undef G
      #define G SOLUTION2
      #undef H
      #define H 6
      #include <multiplier.h>
      #if SOLUTION3 > ASSEMBLE(PAIR3, 0, 0, 0, 0, 0)
        #undef E
        #undef F
        #define E SOLUTION1
        #define F 5

        #include <adder.h>

        #undef SQRT_2
        #define SQRT_2

        #undef G
        #define G SOLUTION2
        #undef H
        #define H 5
        #include <multiplier.h>
        #if SOLUTION3 > ASSEMBLE(PAIR3, 0, 0, 0, 0, 0)
          #undef E
          #undef F
          #define E SOLUTION1
          #define F 4

          #include <adder.h>

          #undef SQRT_2
          #define SQRT_2

          #undef G
          #define G SOLUTION2
          #undef H
          #define H 4
          #include <multiplier.h>
          #if SOLUTION3 > ASSEMBLE(PAIR3, 0, 0, 0, 0, 0)
            #undef E
            #undef F
            #define E SOLUTION1
            #define F 3

            #include <adder.h>

            #undef SQRT_2
            #define SQRT_2

            #undef G
            #define G SOLUTION2
            #undef H
            #define H 3
            #include <multiplier.h>
            #if SOLUTION3 > ASSEMBLE(PAIR3, 0, 0, 0, 0, 0)
              #undef E
              #undef F
              #define E SOLUTION1
              #define F 2

              #include <adder.h>

              #undef SQRT_2
              #define SQRT_2

              #undef G
              #define G SOLUTION2
              #undef H
              #define H 2
              #include <multiplier.h>
              #if SOLUTION3 > ASSEMBLE(PAIR3, 0, 0, 0, 0, 0)
                #undef E
                #undef F
                #define E SOLUTION1
                #define F 1

                #include <adder.h>

                #undef SQRT_2
                #define SQRT_2

                #undef G
                #define G SOLUTION2
                #undef H
                #define H 1
                #include <multiplier.h>
                #if SOLUTION3 > ASSEMBLE(PAIR3, 0, 0, 0, 0, 0)
                  #define Y 0
                  #define OUT1 0
                #else
                  #define Y SOLUTION3
                  #define OUT1 1
                #endif
              #else
                #define Y SOLUTION3
                #define OUT1 2
              #endif
            #else
              #define Y SOLUTION3
              #define OUT1 3
            #endif
          #else
            #define Y SOLUTION3
            #define OUT1 4
          #endif
        #else
          #define Y SOLUTION3
          #define OUT1 5
        #endif
      #else
        #define Y SOLUTION3
        #define OUT1 6
      #endif
    #else
      #define Y SOLUTION3
      #define OUT1 7
    #endif
  #else
    #define Y SOLUTION3
    #define OUT1 8
  #endif
#else
  #define Y SOLUTION3
  #define OUT1 9
#endif
#undef I
#define I ASSEMBLE(PAIR3, 0, 0, 0, 0, 0)
#undef J
#define J Y
#include <subtractor.h>
#undef C1
#define C1 CIFY(XJOIN(_, SOLUTION4), PAIR2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#undef SQRT_3
#define SQRT_3
#define K OUT1
#define L 20
#include <multiplier.h>

#undef M
#undef N

#define M SOLUTION5
#define N 9
#include <adder.h>

#undef SQRT_4
#define SQRT_4

#undef O
#define O SOLUTION6
#undef P
#define P 9
#include <multiplier.h>
#undef Y2
#undef OUT2
#undef OUT
#if SOLUTION7 > C1
  #undef M
  #undef N
  #define M SOLUTION5
  #define N 8

  #include <adder.h>

  #undef SQRT_4
  #define SQRT_4

  #undef O
  #define O SOLUTION6
  #undef P
  #define P 8
  #include <multiplier.h>
  #if SOLUTION7 > C1
    #undef M
    #undef N
    #define M SOLUTION5
    #define N 7

    #include <adder.h>

    #undef SQRT_4
    #define SQRT_4

    #undef O
    #define O SOLUTION6
    #undef P
    #define P 7
    #include <multiplier.h>
    #if SOLUTION7 > C1
      #undef M
      #undef N
      #define M SOLUTION5
      #define N 6

      #include <adder.h>

      #undef SQRT_4
      #define SQRT_4

      #undef O
      #define O SOLUTION6
      #undef P
      #define P 6
      #include <multiplier.h>
      #if SOLUTION7 > C1
        #undef M
        #undef N
        #define M SOLUTION5
        #define N 5

        #include <adder.h>

        #undef SQRT_4
        #define SQRT_4

        #undef O
        #define O SOLUTION6
        #undef P
        #define P 5
        #include <multiplier.h>
        #if SOLUTION7 > C1
          #undef M
          #undef N
          #define M SOLUTION5
          #define N 4

          #include <adder.h>

          #undef SQRT_4
          #define SQRT_4

          #undef O
          #define O SOLUTION6
          #undef P
          #define P 4
          #include <multiplier.h>
          #if SOLUTION7 > C1
            #undef M
            #undef N
            #define M SOLUTION5
            #define N 3

            #include <adder.h>

            #undef SQRT_4
            #define SQRT_4

            #undef O
            #define O SOLUTION6
            #undef P
            #define P 3
            #include <multiplier.h>
            #if SOLUTION7 > C1
              #undef M
              #undef N
              #define M SOLUTION5
              #define N 2

              #include <adder.h>

              #undef SQRT_4
              #define SQRT_4

              #undef O
              #define O SOLUTION6
              #undef P
              #define P 2
              #include <multiplier.h>
              #if SOLUTION7 > C1
                #undef M
                #undef N
                #define M SOLUTION5
                #define N 1

                #include <adder.h>

                #undef SQRT_4
                #define SQRT_4

                #undef O
                #define O SOLUTION6
                #undef P
                #define P 1
                #include <multiplier.h>
                #if SOLUTION7 > C1
                  #define Y2 0
                  #define OUT2 0
                #else
                  #define Y2 SOLUTION7
                  #define OUT2 1
                #endif
              #else
                #define Y2 SOLUTION7
                #define OUT2 2
              #endif
            #else
              #define Y2 SOLUTION7
              #define OUT2 3
            #endif
          #else
            #define Y2 SOLUTION7
            #define OUT2 4
          #endif
        #else
          #define Y2 SOLUTION7
          #define OUT2 5
        #endif
      #else
        #define Y2 SOLUTION7
        #define OUT2 6
      #endif
    #else
      #define Y2 SOLUTION7
      #define OUT2 7
    #endif
  #else
    #define Y2 SOLUTION7
    #define OUT2 8
  #endif
#else
#  define Y2 SOLUTION7
#  define OUT2 9
#endif
#define OUT XJOIN(OUT1, OUT2)

#undef Q
#define Q C1
#undef R
#define R Y2
#include <subtractor.h>
#undef C2
#define C2 CIFY(XJOIN(_, SOLUTION8), PAIR1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)

#undef SQRT_5
#define SQRT_5
#undef S
#undef T
#define S OUT
#define T 20
#include <multiplier.h>
#undef U
#undef V
#define U SOLUTION9
#define V 9
#include <adder.h>

#undef SQRT_6
#define SQRT_6

#undef W
#define W SOLUTION10
#undef X
#define X 9
#include <multiplier.h>
#undef Y3
#undef OUT3
#undef OUT_UNITS
#if SOLUTION11 > C2
  #undef U
  #undef V
  #define U SOLUTION9
  #define V 8

  #include <adder.h>

  #undef SQRT_6
  #define SQRT_6

  #undef W
  #define W SOLUTION10
  #undef X
  #define X 8
  #include <multiplier.h>
#if SOLUTION11 > C2
  #undef U
  #undef V
  #define U SOLUTION9
  #define V 7

  #include <adder.h>

  #undef SQRT_6
  #define SQRT_6

  #undef W
  #define W SOLUTION10
  #undef X
  #define X 7
  #include <multiplier.h>
#if SOLUTION11 > C2
  #undef U
  #undef V
  #define U SOLUTION9
  #define V 6

  #include <adder.h>

  #undef SQRT_6
  #define SQRT_6

  #undef W
  #define W SOLUTION10
  #undef X
  #define X 6
  #include <multiplier.h>
#if SOLUTION11 > C2
  #undef U
  #undef V
  #define U SOLUTION9
  #define V 5

  #include <adder.h>

  #undef SQRT_6
  #define SQRT_6

  #undef W
  #define W SOLUTION10
  #undef X
  #define X 5
  #include <multiplier.h>
#if SOLUTION11 > C2
  #undef U
  #undef V
  #define U SOLUTION9
  #define V 4

  #include <adder.h>

  #undef SQRT_6
  #define SQRT_6

  #undef W
  #define W SOLUTION10
  #undef X
  #define X 4
  #include <multiplier.h>
#if SOLUTION11 > C2
  #undef U
  #undef V
  #define U SOLUTION9
  #define V 3

  #include <adder.h>

  #undef SQRT_6
  #define SQRT_6

  #undef W
  #define W SOLUTION10
  #undef X
  #define X 3
  #include <multiplier.h>
#if SOLUTION11 > C2
  #undef U
  #undef V
  #define U SOLUTION9
  #define V 2

  #include <adder.h>

  #undef SQRT_6
  #define SQRT_6

  #undef W
  #define W SOLUTION10
  #undef X
  #define X 2
  #include <multiplier.h>
#if SOLUTION11 > C2
  #undef U
  #undef V
  #define U SOLUTION9
  #define V 1

  #include <adder.h>

  #undef SQRT_6
  #define SQRT_6

  #undef W
  #define W SOLUTION10
  #undef X
  #define X 1
  #include <multiplier.h>
#if SOLUTION11 > C2
                  #define Y3 0
                  #define OUT3 0
                #else
                  #define Y3 SOLUTION11
                  #define OUT3 1
                #endif
              #else
                #define Y3 SOLUTION11
                #define OUT3 2
              #endif
            #else
              #define Y3 SOLUTION11
              #define OUT3 3
            #endif
          #else
            #define Y3 SOLUTION11
            #define OUT3 4
          #endif
        #else
          #define Y3 SOLUTION11
          #define OUT3 5
        #endif
      #else
        #define Y3 SOLUTION11
        #define OUT3 6
      #endif
    #else
      #define Y3 SOLUTION11
      #define OUT3 7
    #endif
  #else
    #define Y3 SOLUTION11
    #define OUT3 8
  #endif
#else
#  define Y3 SOLUTION11
#  define OUT3 9
#endif
#define OUT_UNITS ASSEMBLE(XJOIN(_, XJOIN(OUT, OUT3)), 0, 0, 0, 0, 0)
#undef SOLUTION
#define SOLUTION OUT_UNITS
#undef SQRT_1
#undef SQRT_2
#undef SQRT_3
#undef SQRT_4
#undef SQRT_5
#undef SQRT_6
