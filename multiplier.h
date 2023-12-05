#include <processed_numbers.h>
#include <full_adder.h>
#include <getdigit.h>
#include <irish_log.h>
#include <utils.h>

#undef A_
#undef B_

#define A_ XJOIN(_, A)
#define B_ XJOIN(_, B)

#undef X1Y1
#undef X1Y2
#undef X1Y3
#undef X1Y4
#undef X1Y5
#undef X1Y6

#undef X2Y1
#undef X2Y2
#undef X2Y3
#undef X2Y4
#undef X2Y5
#undef X2Y6

#undef X3Y1
#undef X3Y2
#undef X3Y3
#undef X3Y4
#undef X3Y5
#undef X3Y6

#undef X4Y1
#undef X4Y2
#undef X4Y3
#undef X4Y4
#undef X4Y5
#undef X4Y6

#undef X1Y1
#undef X2Y2
#undef X3Y3
#undef X4Y4
#undef X5Y5
#undef X6Y6

#undef X1Y1
#undef X2Y2
#undef X3Y3
#undef X4Y4
#undef X5Y5
#undef X6Y6

#define X1Y1 XSUM(XLOG(ARGN(5,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(5,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X2Y1 XSUM(XLOG(ARGN(4,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(5,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X3Y1 XSUM(XLOG(ARGN(3,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(5,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X4Y1 XSUM(XLOG(ARGN(2,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(5,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X5Y1 XSUM(XLOG(ARGN(1,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(5,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X6Y1 XSUM(XLOG(ARGN(0,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(5,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X1Y2 XSUM(XLOG(ARGN(5,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(4,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X2Y2 XSUM(XLOG(ARGN(4,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(4,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X3Y2 XSUM(XLOG(ARGN(3,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(4,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X4Y2 XSUM(XLOG(ARGN(2,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(4,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X5Y2 XSUM(XLOG(ARGN(1,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(4,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X6Y2 XSUM(XLOG(ARGN(0,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(4,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X1Y3 XSUM(XLOG(ARGN(5,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(3,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X2Y3 XSUM(XLOG(ARGN(4,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(3,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X3Y3 XSUM(XLOG(ARGN(3,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(3,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X4Y3 XSUM(XLOG(ARGN(2,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(3,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X5Y3 XSUM(XLOG(ARGN(1,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(3,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X6Y3 XSUM(XLOG(ARGN(0,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(3,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X1Y4 XSUM(XLOG(ARGN(5,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(2,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X2Y4 XSUM(XLOG(ARGN(4,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(2,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X3Y4 XSUM(XLOG(ARGN(3,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(2,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X4Y4 XSUM(XLOG(ARGN(2,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(2,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X5Y4 XSUM(XLOG(ARGN(1,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(2,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X6Y4 XSUM(XLOG(ARGN(0,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(2,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X1Y5 XSUM(XLOG(ARGN(5,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(1,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X2Y5 XSUM(XLOG(ARGN(4,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(1,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X3Y5 XSUM(XLOG(ARGN(3,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(1,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X4Y5 XSUM(XLOG(ARGN(2,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(1,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X5Y5 XSUM(XLOG(ARGN(1,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(1,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X6Y5 XSUM(XLOG(ARGN(0,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(1,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X1Y6 XSUM(XLOG(ARGN(5,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(0,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X2Y6 XSUM(XLOG(ARGN(4,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(0,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X3Y6 XSUM(XLOG(ARGN(3,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(0,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X4Y6 XSUM(XLOG(ARGN(2,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(0,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X5Y6 XSUM(XLOG(ARGN(1,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(0,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#define X6Y6 XSUM(XLOG(ARGN(0,(A_, 0, 0, 0, 0, 0))), XLOG(ARGN(0,(B_, 0, 0, 0, 0, 0))), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)

#undef ONES_
#undef ONES_CARRY_
#undef TENS_1
#undef TENS_1_CARRY
#undef TENS_2
#undef TENS_2_CARRY
#undef HUNDREDS_1
#undef HUNDREDS_1_CARRY
#undef HUNDREDS_2
#undef HUNDREDS_2_CARRY
#undef HUNDREDS_3
#undef HUNDREDS_3_CARRY
#undef THOUSANDS_1
#undef THOUSANDS_1_CARRY
#undef THOUSANDS_2
#undef THOUSANDS_2_CARRY
#undef THOUSANDS_3
#undef THOUSANDS_3_CARRY
#undef THOUSANDS_4
#undef THOUSANDS_4_CARRY
#undef TEN_THOUSANDS_1
#undef TEN_THOUSANDS_1_CARRY
#undef TEN_THOUSANDS_2
#undef TEN_THOUSANDS_2_CARRY
#undef TEN_THOUSANDS_3
#undef TEN_THOUSANDS_3_CARRY
#undef TEN_THOUSANDS_4
#undef TEN_THOUSANDS_4_CARRY
#undef TEN_THOUSANDS_5
#undef TEN_THOUSANDS_5_CARRY
#undef HUNDRED_THOUSANDS_1
#undef HUNDRED_THOUSANDS_2
#undef HUNDRED_THOUSANDS_3
#undef HUNDRED_THOUSANDS_4
#undef HUNDRED_THOUSANDS_5
#undef HUNDRED_THOUSANDS_6

#define ONES_ XJOIN(_, ARGN(5,(XJOIN(_, XINVLOG(X1Y1)))))
#define ONES_CARRY XJOIN(_, XJOIN(ARGN(4,(XJOIN(_, XINVLOG(X1Y1)))), 0))
#define TENS_1 XJOIN(_, XJOIN(ARGN(5,(XJOIN(_, XINVLOG(X1Y2)))), 0))
#define TENS_1_CARRY XJOIN(_, XJOIN(ARGN(4,(XJOIN(_, XINVLOG(X1Y2)))), 00))
#define HUNDREDS_1 XJOIN(_, XJOIN(ARGN(5,(XJOIN(_, XINVLOG(X1Y3)))), 00))
#define HUNDREDS_1_CARRY XJOIN(_, XJOIN(ARGN(4,(XJOIN(_, XINVLOG(X1Y3)))), 000))
#define THOUSANDS_1 XJOIN(_, XJOIN(ARGN(5,(XJOIN(_, XINVLOG(X1Y4)))), 000))
#define THOUSANDS_1_CARRY XJOIN(_, XJOIN(ARGN(4,(XJOIN(_, XINVLOG(X1Y4)))), 0000))
#define TEN_THOUSANDS_1 XJOIN(_, XJOIN(ARGN(5,(XJOIN(_, XINVLOG(X1Y5)))), 0000))
#define TEN_THOUSANDS_1_CARRY XJOIN(_, XJOIN(ARGN(4,(XJOIN(_, XINVLOG(X1Y5)))), 00000))
#define HUNDRED_THOUSANDS_1 XJOIN(_, XJOIN(ARGN(5,(XJOIN(_, XINVLOG(X1Y6)))), 00000))
#define TENS_2 XJOIN(_, XJOIN(ARGN(5,(XJOIN(_, XINVLOG(X2Y1)))), 0))
#define TENS_2_CARRY XJOIN(_, XJOIN(ARGN(4,(XJOIN(_, XINVLOG(X2Y1)))), 00))
#define HUNDREDS_2 XJOIN(_, XJOIN(ARGN(5,(XJOIN(_, XINVLOG(X2Y2)))), 00))
#define HUNDREDS_2_CARRY XJOIN(_, XJOIN(ARGN(4,(XJOIN(_, XINVLOG(X2Y2)))), 000))
#define THOUSANDS_2 XJOIN(_, XJOIN(ARGN(5,(XJOIN(_, XINVLOG(X2Y3)))), 000))
#define THOUSANDS_2_CARRY XJOIN(_, XJOIN(ARGN(4,(XJOIN(_, XINVLOG(X2Y3)))), 0000))
#define TEN_THOUSANDS_2 XJOIN(_, XJOIN(ARGN(5,(XJOIN(_, XINVLOG(X2Y4)))), 0000))
#define TEN_THOUSANDS_2_CARRY XJOIN(_, XJOIN(ARGN(4,(XJOIN(_, XINVLOG(X2Y4)))), 00000))
#define HUNDRED_THOUSANDS_2 XJOIN(_, XJOIN(ARGN(5,(XJOIN(_, XINVLOG(X2Y5)))), 00000))
#define HUNDREDS_3 XJOIN(_, XJOIN(ARGN(5,(XJOIN(_, XINVLOG(X3Y1)))), 00))
#define HUNDREDS_3_CARRY XJOIN(_, XJOIN(ARGN(4,(XJOIN(_, XINVLOG(X3Y1)))), 000))
#define THOUSANDS_3 XJOIN(_, XJOIN(ARGN(5,(XJOIN(_, XINVLOG(X3Y2)))), 000))
#define THOUSANDS_3_CARRY XJOIN(_, XJOIN(ARGN(4,(XJOIN(_, XINVLOG(X3Y2)))), 0000))
#define TEN_THOUSANDS_3 XJOIN(_, XJOIN(ARGN(5,(XJOIN(_, XINVLOG(X3Y3)))), 0000))
#define TEN_THOUSANDS_3_CARRY XJOIN(_, XJOIN(ARGN(4,(XJOIN(_, XINVLOG(X3Y3)))), 00000))
#define HUNDRED_THOUSANDS_3 XJOIN(_, XJOIN(ARGN(5,(XJOIN(_, XINVLOG(X3Y4)))), 00000))
#define THOUSANDS_4 XJOIN(_, XJOIN(ARGN(5,(XJOIN(_, XINVLOG(X4Y1)))), 000))
#define THOUSANDS_4_CARRY XJOIN(_, XJOIN(ARGN(4,(XJOIN(_, XINVLOG(X4Y1)))), 0000))
#define TEN_THOUSANDS_4 XJOIN(_, XJOIN(ARGN(5,(XJOIN(_, XINVLOG(X4Y2)))), 0000))
#define TEN_THOUSANDS_4_CARRY XJOIN(_, XJOIN(ARGN(4,(XJOIN(_, XINVLOG(X4Y2)))), 00000))
#define HUNDRED_THOUSANDS_4 XJOIN(_, XJOIN(ARGN(5,(XJOIN(_, XINVLOG(X4Y3)))), 00000))
#define TEN_THOUSANDS_5 XJOIN(_, XJOIN(ARGN(5,(XJOIN(_, XINVLOG(X5Y1)))), 0000))
#define TEN_THOUSANDS_5_CARRY XJOIN(_, XJOIN(ARGN(4,(XJOIN(_, XINVLOG(X5Y1)))), 00000))
#define HUNDRED_THOUSANDS_5 XJOIN(_, XJOIN(ARGN(5,(XJOIN(_, XINVLOG(X5Y2)))), 00000))
#define HUNDRED_THOUSANDS_6 XJOIN(_, XJOIN(ARGN(5,(XJOIN(_, XINVLOG(X6Y1)))), 00000))

#undef STEP1
#undef STEP2
#undef STEP3
#undef STEP4
#undef STEP5
#undef STEP6
#undef STEP7
#undef STEP8
#undef STEP9
#undef STEP10
#undef STEP11
#undef STEP12
#undef STEP13
#undef STEP14
#undef STEP15
#undef STEP16
#undef STEP17
#undef STEP18

#define STEP1 XJOIN(_, XSUM(ONES_, ONES_CARRY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define STEP2 XJOIN(_, XSUM(TENS_1, TENS_1_CARRY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define STEP3 XJOIN(_, XSUM(HUNDREDS_1, HUNDREDS_1_CARRY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define STEP4 XJOIN(_, XSUM(THOUSANDS_1, THOUSANDS_1_CARRY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define STEP5 XJOIN(_, XSUM(TEN_THOUSANDS_1, TEN_THOUSANDS_1_CARRY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define STEP6 XJOIN(_, XSUM(HUNDRED_THOUSANDS_1, TENS_2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define STEP7 XJOIN(_, XSUM(TENS_2_CARRY, HUNDREDS_2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define STEP8 XJOIN(_, XSUM(HUNDREDS_2_CARRY, THOUSANDS_2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define STEP9 XJOIN(_, XSUM(THOUSANDS_2_CARRY, TEN_THOUSANDS_2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define STEP10 XJOIN(_, XSUM(TEN_THOUSANDS_2_CARRY, HUNDRED_THOUSANDS_2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define STEP11 XJOIN(_, XSUM(HUNDREDS_3, HUNDREDS_3_CARRY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define STEP12 XJOIN(_, XSUM(THOUSANDS_3, THOUSANDS_3_CARRY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define STEP13 XJOIN(_, XSUM(TEN_THOUSANDS_3, TEN_THOUSANDS_3_CARRY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define STEP14 XJOIN(_, XSUM(HUNDRED_THOUSANDS_3, THOUSANDS_4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define STEP15 XJOIN(_, XSUM(THOUSANDS_4_CARRY, TEN_THOUSANDS_4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define STEP16 XJOIN(_, XSUM(TEN_THOUSANDS_4_CARRY, HUNDRED_THOUSANDS_4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define STEP17 XJOIN(_, XSUM(TEN_THOUSANDS_5, TEN_THOUSANDS_5_CARRY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define STEP18 XJOIN(_, XSUM(HUNDRED_THOUSANDS_5, HUNDRED_THOUSANDS_6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))

#define PAGE1
#define PAGE2
#define PAGE3
#define PAGE4
#define PAGE5
#define PAGE6
#define PAGE7
#define PAGE8
#define PAGE9

#define PACE1 XJOIN(_, XSUM(STEP1, STEP2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define PACE2 XJOIN(_, XSUM(STEP3, STEP4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define PACE3 XJOIN(_, XSUM(STEP5, STEP6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define PACE4 XJOIN(_, XSUM(STEP7, STEP8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define PACE5 XJOIN(_, XSUM(STEP9, STEP10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define PACE6 XJOIN(_, XSUM(STEP11, STEP12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define PACE7 XJOIN(_, XSUM(STEP13, STEP14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define PACE8 XJOIN(_, XSUM(STEP15, STEP16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define PACE9 XJOIN(_, XSUM(STEP17, STEP18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))

#undef JUMP1
#undef JUMP2
#undef JUMP3
#undef JUMP4

#define JUMP1 XJOIN(_, XSUM(PACE1, PACE2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define JUMP2 XJOIN(_, XSUM(PACE3, PACE4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define JUMP3 XJOIN(_, XSUM(PACE5, PACE6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define JUMP4 XJOIN(_, XSUM(PACE7, PACE8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))

#undef LEAGUE1
#undef LEAGUE2

#define LEAGUE1 XJOIN(_, XSUM(JUMP1, JUMP2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
#define LEAGUE2 XJOIN(_, XSUM(JUMP3, JUMP4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))

#undef MARATHON1

#define MARATHON1 XJOIN(_, XSUM(LEAGUE1, LEAGUE2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))

#undef SOLUTION

#define SOLUTION XJOIN(___, XSUM(MARATHON1, PACE9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))

