#ifndef MILLIONS
  #define MILLIONS 0
#elif MILLIONS == 0
  #undef MILLIONS
  #define MILLIONS 1
#elif MILLIONS == 1
  #undef MILLIONS
  #define MILLIONS 2
#endif
#if MILLIONS < 2
  #undef DIGITS
  #undef TENS
  #undef HUNDREDS
  #undef THOUSANDS
  #undef TEN_THOUSANDS
  #undef HUNDRED_THOUSANDS
  #include <digits.h>
  #include <tens.h>
  #include <hundreds.h>
  #include <thousands.h>
  #include <ten_thousands.h>
  #include <hundred_thousands.h>
  #include <millions.h>
#endif
