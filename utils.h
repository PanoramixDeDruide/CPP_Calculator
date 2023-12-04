#pragma once

#define SUM(a, b, c, d, e, f, g, h, i, j, k, l, ...) ADD_6DIGIT_NO_CARRY(a, g, b, h, c, i, d, j, e, k, f, l)
#define XSUM(a, b, c, d, e, f, g, h, i, j, k, l, ...) SUM(a, b, c, d, e, f, g, h, i, j, k, l)

#define ADD_CARRY(a, b, c, d, e, f, g, h, i, j, k, l, ...) ADD_6DIGIT_WITH_CARRY(a, g, b, h, c, i, d, j, e, k, f, l)
#define XADD_CARRY(a, b, c, d, e, f, g, h, i, j, k, l, ...) ADD_CARRY(a, b, c, d, e, f, g, h, i, j, k, l)
