#include "ten_thousands.h"
#include "full_adder.h"
??=define REORDER(a, b, c, d, e, f, g, h, i, j, ...) ADD_5DIGIT(a, f, b, g, c, h, d, i, e, j)
??=define XREORDER(a, b, c, d, e, f, g, h, i, j, ...) REORDER(a, b, c, d, e, f, g, h, i, j)
XREORDER(_??/
1, _??/
99999, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
