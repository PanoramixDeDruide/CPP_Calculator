#ifndef TEN_THOUSANDS
  #define TEN_THOUSANDS 0
#elif TEN_THOUSANDS == 0
  #undef TEN_THOUSANDS
  #define TEN_THOUSANDS 1
#elif TEN_THOUSANDS == 1
  #undef TEN_THOUSANDS
  #define TEN_THOUSANDS 2
#elif TEN_THOUSANDS == 2
  #undef TEN_THOUSANDS
  #define TEN_THOUSANDS 3
#elif TEN_THOUSANDS == 3
  #undef TEN_THOUSANDS
  #define TEN_THOUSANDS 4
#elif TEN_THOUSANDS == 4
  #undef TEN_THOUSANDS
  #define TEN_THOUSANDS 5
#elif TEN_THOUSANDS == 5
  #undef TEN_THOUSANDS
  #define TEN_THOUSANDS 6
#elif TEN_THOUSANDS == 6
  #undef TEN_THOUSANDS
  #define TEN_THOUSANDS 7
#elif TEN_THOUSANDS == 7
  #undef TEN_THOUSANDS
  #define TEN_THOUSANDS 8
#elif TEN_THOUSANDS == 8
  #undef TEN_THOUSANDS
  #define TEN_THOUSANDS 9
#elif TEN_THOUSANDS == 9
  #undef TEN_THOUSANDS
  #define TEN_THOUSANDS 10
#endif
#if TEN_THOUSANDS < 10
  #undef DIGITS
  #undef TENS
  #undef HUNDREDS
  #undef THOUSANDS
  #include <digits.h>
  #include <tens.h>
  #include <hundreds.h>
  #include <thousands.h>
  #include <ten_thousands.h>
#endif
