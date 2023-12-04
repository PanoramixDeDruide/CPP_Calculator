#ifndef HUNDRED_THOUSANDS
  #define HUNDRED_THOUSANDS 0
#elif HUNDRED_THOUSANDS == 0
  #undef HUNDRED_THOUSANDS
  #define HUNDRED_THOUSANDS 1
#elif HUNDRED_THOUSANDS == 1
  #undef HUNDRED_THOUSANDS
  #define HUNDRED_THOUSANDS 2
#elif HUNDRED_THOUSANDS == 2
  #undef HUNDRED_THOUSANDS
  #define HUNDRED_THOUSANDS 3
#elif HUNDRED_THOUSANDS == 3
  #undef HUNDRED_THOUSANDS
  #define HUNDRED_THOUSANDS 4
#elif HUNDRED_THOUSANDS == 4
  #undef HUNDRED_THOUSANDS
  #define HUNDRED_THOUSANDS 5
#elif HUNDRED_THOUSANDS == 5
  #undef HUNDRED_THOUSANDS
  #define HUNDRED_THOUSANDS 6
#elif HUNDRED_THOUSANDS == 6
  #undef HUNDRED_THOUSANDS
  #define HUNDRED_THOUSANDS 7
#elif HUNDRED_THOUSANDS == 7
  #undef HUNDRED_THOUSANDS
  #define HUNDRED_THOUSANDS 8
#elif HUNDRED_THOUSANDS == 8
  #undef HUNDRED_THOUSANDS
  #define HUNDRED_THOUSANDS 9
#elif HUNDRED_THOUSANDS == 9
  #undef HUNDRED_THOUSANDS
  #define HUNDRED_THOUSANDS 10
#endif
#if HUNDRED_THOUSANDS < 10
  #undef DIGITS
  #undef TENS
  #undef HUNDREDS
  #undef THOUSANDS
  #undef TEN_THOUSANDS
  #include <digits.h>
  #include <tens.h>
  #include <hundreds.h>
  #include <thousands.h>
  #include <ten_thousands.h>
  #include <hundred_thousands.h>
#endif
