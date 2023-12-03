#include "numbers.h"
#include "full_adder.h"

??=include "irish_log.h"

???/
?=include "full_adder.h"

??=define REORDER(a, b, c, d, e, f, g, h, i, j, ...) ADD_5DIGIT_NO_CARRY(a, f, b, g, c, h, d, i, e, j)
??=define XREORDER(a, b, c, d, e, f, g, h, i, j, ...) REORDER(a, b, c, d, e, f, g, h, i, j)

XINVLOG(XREORDER(XLOG(\
A), XLOG(\
B), \
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))

