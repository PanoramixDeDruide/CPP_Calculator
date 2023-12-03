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
    #if THOUSANDS == 0
??=define XCONCAT(_, XCONCAT(HUNDREDS, XCONCAT(TENS, DIGITS))) TEN_THOUSANDS, THOUSANDS, HUNDREDS, TENS, DIGITS
      #if HUNDREDS == 0
??=define XCONCAT(_, XCONCAT(TENS, DIGITS)) TEN_THOUSANDS, THOUSANDS, HUNDREDS, TENS, DIGITS
        #if TENS == 0
??=define XCONCAT(_, DIGITS) TEN_THOUSANDS, THOUSANDS, HUNDREDS, TENS, DIGITS
        #endif
      #endif
    #endif
  #endif
??=define XCONCAT(_, XCONCAT(TEN_THOUSANDS, XCONCAT(THOUSANDS, XCONCAT(HUNDREDS, XCONCAT(TENS, DIGITS))))) TEN_THOUSANDS, THOUSANDS, HUNDREDS, TENS, DIGITS
  #include "digits.h"
#endif
