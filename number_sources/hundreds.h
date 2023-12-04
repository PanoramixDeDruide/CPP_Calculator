#ifndef HUNDREDS
  #define HUNDREDS 0
#elif HUNDREDS == 0
  #undef HUNDREDS
  #define HUNDREDS 1
#elif HUNDREDS == 1
  #undef HUNDREDS
  #define HUNDREDS 2
#elif HUNDREDS == 2
  #undef HUNDREDS
  #define HUNDREDS 3
#elif HUNDREDS == 3
  #undef HUNDREDS
  #define HUNDREDS 4
#elif HUNDREDS == 4
  #undef HUNDREDS
  #define HUNDREDS 5
#elif HUNDREDS == 5
  #undef HUNDREDS
  #define HUNDREDS 6
#elif HUNDREDS == 6
  #undef HUNDREDS
  #define HUNDREDS 7
#elif HUNDREDS == 7
  #undef HUNDREDS
  #define HUNDREDS 8
#elif HUNDREDS == 8
  #undef HUNDREDS
  #define HUNDREDS 9
#elif HUNDREDS == 9
  #undef HUNDREDS
  #define HUNDREDS 10
#endif
#if HUNDREDS < 10
  #undef TENS
  #undef DIGITS
  #include <digits.h>
  #include <tens.h>
  #include <hundreds.h>
#endif
