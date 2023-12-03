#include "numbers.h"
#include "full_adder.h"

??=include "irish_log.h"

???/
?=include "full_adder.h"

??=define REORDER(a, b, c, d, e, f, g, h, i, j, ...) ADD_5DIGIT_NO_CARRY(a, f, b, g, c, h, d, i, e, j)
??=define XREORDER(a, b, c, d, e, f, g, h, i, j, ...) REORDER(a, b, c, d, e, f, g, h, i, j)

??=include "getdigit.h"

#define A_ XJOIN(_, A)
#define B_ XJOIN(_, B)
??=define X1Y1 XREORDER(??/
XLOG(??/
ARGN(4,(A_, 0, 0, 0, 0))), ??/
XLOG(??/
ARGN(4,(B_, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0)

??=define X2Y1 XREORDER(??/
XLOG(??/
ARGN(3,(A_, 0, 0, 0, 0))), ??/
XLOG(??/
ARGN(4,(B_, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0)

??=define X3Y1 XREORDER(??/
XLOG(??/
ARGN(2,(A_, 0, 0, 0, 0))), ??/
XLOG(??/
ARGN(4,(B_, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0)

??=define X1Y2 XREORDER(??/
XLOG(??/
ARGN(4,(A_, 0, 0, 0, 0))), ??/
XLOG(??/
ARGN(3,(B_, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0)

??=define X2Y2 XREORDER(??/
XLOG(??/
ARGN(3,(A_, 0, 0, 0, 0))), ??/
XLOG(??/
ARGN(3,(B_, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0)

??=define X3Y2 XREORDER(??/
XLOG(??/
ARGN(2,(A_, 0, 0, 0, 0))), ??/
XLOG(??/
ARGN(3,(B_, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0)

??=define X1Y3 XREORDER(??/
XLOG(??/
ARGN(4,(A_, 0, 0, 0, 0))), ??/
XLOG(??/
ARGN(2,(B_, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0)

??=define X2Y3 XREORDER(??/
XLOG(??/
ARGN(3,(A_, 0, 0, 0, 0))), ??/
XLOG(??/
ARGN(2,(B_, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0)

??=define ONES_ XJOIN(_, ARGN(4,(XJOIN(_, XINVLOG(X1Y1)))))
??=define ONES_CARRY XJOIN(_, XJOIN(ARGN(3,(XJOIN(_, XINVLOG(X1Y1)))), 0))
??=define TENS_1 XJOIN(_, XJOIN(ARGN(4,(XJOIN(_, XINVLOG(X1Y2)))), 0))
??=define TENS_1_CARRY XJOIN(_, XJOIN(ARGN(3,(XJOIN(_, XINVLOG(X1Y2)))), 00))
??=define HUNDREDS_1 XJOIN(_, XJOIN(ARGN(4,(XJOIN(_, XINVLOG(X1Y3)))), 00))
??=define HUNDREDS_1_CARRY XJOIN(_, XJOIN(ARGN(3,(XJOIN(_, XINVLOG(X1Y3)))), 000))
??=define TENS_2 XJOIN(_, XJOIN(ARGN(4,(XJOIN(_, XINVLOG(X2Y1)))), 0))
??=define TENS_2_CARRY XJOIN(_, XJOIN(ARGN(3,(XJOIN(_, XINVLOG(X2Y1)))), 00))
??=define HUNDREDS_2 XJOIN(_, XJOIN(ARGN(4,(XJOIN(_, XINVLOG(X2Y2)))), 00))
??=define HUNDREDS_2_CARRY XJOIN(_, XJOIN(ARGN(3,(XJOIN(_, XINVLOG(X2Y2)))), 000))
??=define THOUSANDS_2 XJOIN(_, XJOIN(ARGN(4,(XJOIN(_, XINVLOG(X2Y3)))), 000))
??=define THOUSANDS_2_CARRY XJOIN(_, XJOIN(ARGN(3,(XJOIN(_, XINVLOG(X2Y3)))), 0000))
??=define HUNDREDS_3 XJOIN(_, XJOIN(ARGN(4,(XJOIN(_, XINVLOG(X3Y1)))), 00))
??=define HUNDREDS_3_CARRY XJOIN(_, XJOIN(ARGN(3,(XJOIN(_, XINVLOG(X3Y1)))), 000))
??=define THOUSANDS_3 XJOIN(_, XJOIN(ARGN(4,(XJOIN(_, XINVLOG(X3Y2)))), 000))
??=define THOUSANDS_3_CARRY XJOIN(_, XJOIN(ARGN(3,(XJOIN(_, XINVLOG(X3Y2)))), 0000))

??=define STEP1 XJOIN(_, XREORDER(ONES_, ONES_CARRY, 0, 0, 0, 0, 0, 0, 0, 0))
??=define STEP2 XJOIN(_, XREORDER(TENS_1, TENS_1_CARRY, 0, 0, 0, 0, 0, 0, 0, 0))
??=define STEP3 XJOIN(_, XREORDER(HUNDREDS_1, HUNDREDS_1_CARRY, 0, 0, 0, 0, 0, 0, 0, 0))
??=define STEP4 XJOIN(_, XREORDER(TENS_2, TENS_2_CARRY, 0, 0, 0, 0, 0, 0, 0, 0))
??=define STEP5 XJOIN(_, XREORDER(HUNDREDS_2, HUNDREDS_2_CARRY, 0, 0, 0, 0, 0, 0, 0, 0))
??=define STEP6 XJOIN(_, XREORDER(THOUSANDS_2, THOUSANDS_2_CARRY, 0, 0, 0, 0, 0, 0, 0, 0))
??=define STEP7 XJOIN(_, XREORDER(HUNDREDS_3, HUNDREDS_3_CARRY, 0, 0, 0, 0, 0, 0, 0, 0))
??=define STEP8 XJOIN(_, XREORDER(THOUSANDS_3, THOUSANDS_3_CARRY, 0, 0, 0, 0, 0, 0, 0, 0))

??=define PACE1 XJOIN(_, XREORDER(STEP1, STEP2, 0, 0, 0, 0, 0, 0, 0, 0))
??=define PACE2 XJOIN(_, XREORDER(STEP3, STEP4, 0, 0, 0, 0, 0, 0, 0, 0))
??=define PACE3 XJOIN(_, XREORDER(STEP5, STEP6, 0, 0, 0, 0, 0, 0, 0, 0))
??=define PACE4 XJOIN(_, XREORDER(STEP7, STEP8, 0, 0, 0, 0, 0, 0, 0, 0))

??=define JUMP1 XJOIN(_, XREORDER(PACE1, PACE2, 0, 0, 0, 0, 0, 0, 0, 0))
??=define JUMP2 XJOIN(_, XREORDER(PACE3, PACE4, 0, 0, 0, 0, 0, 0, 0, 0))

XREORDER(JUMP1, JUMP2, 0, 0, 0, 0, 0, 0, 0, 0)
//??=define STEP1 XREORDER(ONES_, ONES_CARRY, 0, 0, 0, 0, 0, 0, 0, 0)
/*
HUNDREDS_1
HUNDREDS_1_CARRY
TENS_2
TENS_2_CARRY
HUNDREDS_2
HUNDREDS_2_CARRY
THOUSANDS_2
THOUSANDS_2_CARRY
HUNDREDS_3
HUNDREDS_3_CARRY
THOUSANDS_3
THOUSANDS_3_CARRY
*/
