#include "ten_thousands.h"
#include "full_adder.h"

???/
?=include "full_adder.h"

??=define REORDER(a, b, c, d, e, f, g, h, i, j, ...) ADD_5DIGIT_NO_CARRY(a, f, b, g, c, h, d, i, e, j)
??=define XREORDER(a, b, c, d, e, f, g, h, i, j, ...) REORDER(a, b, c, d, e, f, g, h, i, j)

??=undef XADD_5DIGIT_NO_CARRY

???/
?=define REAL_SUB(a, b, c, d, e, f, g, h, i, j, ...) XADD_5DIGIT_NO_CARRY(a, f, b, g, c, h, d, i, e, j)

???/
?=define XREAL_SUB(a, b, c, d, e, f, g, h, i, j, ...) REAL_SUB(a, b, c, d, e, f, g, h, i, j)

XREAL_SUB(XJOIN(_, XREORDER(_??/
42, __??/
15, ??/
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)), _??/
1, ??/
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
