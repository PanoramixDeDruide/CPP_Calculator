#ifndef THOUSANDS
  #define THOUSANDS 0
#elif THOUSANDS == 0
  #undef THOUSANDS
  #define THOUSANDS 1
#elif THOUSANDS == 1
  #undef THOUSANDS
  #define THOUSANDS 2
#elif THOUSANDS == 2
  #undef THOUSANDS
  #define THOUSANDS 3
#elif THOUSANDS == 3
  #undef THOUSANDS
  #define THOUSANDS 4
#elif THOUSANDS == 4
  #undef THOUSANDS
  #define THOUSANDS 5
#elif THOUSANDS == 5
  #undef THOUSANDS
  #define THOUSANDS 6
#elif THOUSANDS == 6
  #undef THOUSANDS
  #define THOUSANDS 7
#elif THOUSANDS == 7
  #undef THOUSANDS
  #define THOUSANDS 8
#elif THOUSANDS == 8
  #undef THOUSANDS
  #define THOUSANDS 9
#elif THOUSANDS == 9
  #undef THOUSANDS
  #define THOUSANDS 10
#endif
#if THOUSANDS < 10
  #undef DIGITS
  #undef TENS
  #undef HUNDREDS
  #include <digits.h>
  #include <tens.h>
  #include <hundreds.h>
  #include <thousands.h>
#endif
