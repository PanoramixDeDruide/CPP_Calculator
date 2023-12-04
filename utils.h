#pragma once

#define REORDER(a, b, c, d, e, f, g, h, i, j, k, l, ...) ADD_6DIGIT_WITH_CARRY(a, g, b, h, c, i, d, j, e, k, f, l)
#define XREORDER(a, b, c, d, e, f, g, h, i, j, k, l, ...) REORDER(a, b, c, d, e, f, g, h, i, j, k, l)
