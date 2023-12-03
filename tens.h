#ifndef TENS
  #define TENS 0
#elif TENS == 0
  #undef TENS
  #define TENS 1
#elif TENS == 1
  #undef TENS
  #define TENS 2
#elif TENS == 2
  #undef TENS
  #define TENS 3
#elif TENS == 3
  #undef TENS
  #define TENS 4
#elif TENS == 4
  #undef TENS
  #define TENS 5
#elif TENS == 5
  #undef TENS
  #define TENS 6
#elif TENS == 6
  #undef TENS
  #define TENS 7
#elif TENS == 7
  #undef TENS
  #define TENS 8
#elif TENS == 8
  #undef TENS
  #define TENS 9
#elif TENS == 9
  #undef TENS
  #define TENS 10
#endif
#if TENS < 10
  #undef DIGITS
  #include "digits.h"
  #include "tens.h"
#endif
