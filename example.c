#include <stdio.h>

int main(void) {
  // Suppose we have two constants BOB and JOE in our code that we want to add, then store the result in a variable.
  // Solution is as follows, trailing space in #define is necessary
  #ifndef BOB
  # define BOB 420
  #endif
  #ifndef JOE
  # define JOE 69
  #endif
  #undef A
  #undef B
  #define A BOB
  #define B JOE
  #include <adder.h>
  int i = SOLUTION;

  printf("%d + %d = %d\n", BOB, JOE, i);

  // Now suppose you want to multiply the values of the ROMEO and JULIET macros later in the code. Simply do as follows.
  #ifndef ROMEO
  # define ROMEO 123456
  #endif
  #ifndef JULIET
  # define JULIET 2
  #endif
  #undef A
  #undef B
  #define A ROMEO
  #define B JULIET
  #include <multiplier.h>
  i = SOLUTION;
  printf("%d * %d = %d\n", ROMEO, JULIET, i);

  // Finally, subtraction. Here we go, subtract Y from X.

  #ifndef X
  # define X 123456
  #endif
  #ifndef Y
  # define Y 98765
  #endif
  #undef A
  #undef B
  #define A X
  #define B Y
  #include <subtractor.h>
  i = SOLUTION;
  printf("%d - %d = %d\n", X, Y, i);
  return (0);
}
