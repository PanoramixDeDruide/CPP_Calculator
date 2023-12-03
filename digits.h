#ifndef ANTI_0
  #define ANTI_0 9
#endif
#ifndef ANTI_1
  #define ANTI_1 8
#endif
#ifndef ANTI_2
  #define ANTI_2 7
#endif
#ifndef ANTI_3
  #define ANTI_3 6
#endif
#ifndef ANTI_4
  #define ANTI_4 5
#endif
#ifndef ANTI_5
  #define ANTI_5 4
#endif
#ifndef ANTI_6
  #define ANTI_6 3
#endif
#ifndef ANTI_7
  #define ANTI_7 2
#endif
#ifndef ANTI_8
  #define ANTI_8 1
#endif
#ifndef ANTI_9
  #define ANTI_9 0
#endif
#define ANTI(x) ANTI_##x
#define XANTI(x) ANTI(x)

#ifndef DIGITS
  #define DIGITS 0
#elif DIGITS == 0
  #undef DIGITS
  #define DIGITS 1
#elif DIGITS == 1
  #undef DIGITS
  #define DIGITS 2
#elif DIGITS == 2
  #undef DIGITS
  #define DIGITS 3
#elif DIGITS == 3
  #undef DIGITS
  #define DIGITS 4
#elif DIGITS == 4
  #undef DIGITS
  #define DIGITS 5
#elif DIGITS == 5
  #undef DIGITS
  #define DIGITS 6
#elif DIGITS == 6
  #undef DIGITS
  #define DIGITS 7
#elif DIGITS == 7
  #undef DIGITS
  #define DIGITS 8
#elif DIGITS == 8
  #undef DIGITS
  #define DIGITS 9
#elif DIGITS == 9
  #undef DIGITS
  #define DIGITS 10
#endif
#define CONCAT(a, b) a##b
#define XCONCAT(a, b) CONCAT(a, b)
#if DIGITS < 10
  #ifndef TENS
    #define TENS 0
  #endif
  #ifndef HUNDREDS
    #define HUNDREDS 0
  #endif
  #ifndef THOUSANDS
    #define THOUSANDS 0
  #endif
  #ifndef TEN_THOUSANDS
    #define TEN_THOUSANDS 0
  #endif
  #if TEN_THOUSANDS == 0
??=define XCONCAT(_, XCONCAT(THOUSANDS, XCONCAT(HUNDREDS, XCONCAT(TENS, DIGITS)))) TEN_THOUSANDS, THOUSANDS, HUNDREDS, TENS, DIGITS
??=define XCONCAT(__, XCONCAT(THOUSANDS, XCONCAT(HUNDREDS, XCONCAT(TENS, DIGITS)))) XANTI(TEN_THOUSANDS), XANTI(THOUSANDS), XANTI(HUNDREDS), XANTI(TENS), XANTI(DIGITS)
    #if THOUSANDS == 0
??=define XCONCAT(_, XCONCAT(HUNDREDS, XCONCAT(TENS, DIGITS))) TEN_THOUSANDS, THOUSANDS, HUNDREDS, TENS, DIGITS
??=define XCONCAT(__, XCONCAT(HUNDREDS, XCONCAT(TENS, DIGITS))) XANTI(TEN_THOUSANDS), XANTI(THOUSANDS), XANTI(HUNDREDS), XANTI(TENS), XANTI(DIGITS)
      #if HUNDREDS == 0
??=define XCONCAT(_, XCONCAT(TENS, DIGITS)) TEN_THOUSANDS, THOUSANDS, HUNDREDS, TENS, DIGITS
??=define XCONCAT(__, XCONCAT(TENS, DIGITS)) XANTI(TEN_THOUSANDS), XANTI(THOUSANDS), XANTI(HUNDREDS), XANTI(TENS), XANTI(DIGITS)
        #if TENS == 0
??=define XCONCAT(_, DIGITS) TEN_THOUSANDS, THOUSANDS, HUNDREDS, TENS, DIGITS
??=define XCONCAT(__, DIGITS) XANTI(TEN_THOUSANDS), XANTI(THOUSANDS), XANTI(HUNDREDS), XANTI(TENS), XANTI(DIGITS)
        #endif
      #endif
    #endif
  #endif
??=define XCONCAT(_, XCONCAT(TEN_THOUSANDS, XCONCAT(THOUSANDS, XCONCAT(HUNDREDS, XCONCAT(TENS, DIGITS))))) TEN_THOUSANDS, THOUSANDS, HUNDREDS, TENS, DIGITS
??=define XCONCAT(__, XCONCAT(TEN_THOUSANDS, XCONCAT(THOUSANDS, XCONCAT(HUNDREDS, XCONCAT(TENS, DIGITS))))) XANTI(TEN_THOUSANDS), XANTI(THOUSANDS), XANTI(HUNDREDS), XANTI(TENS), XANTI(DIGITS)
  #include "digits.h"
#endif
