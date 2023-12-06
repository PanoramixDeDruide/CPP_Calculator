#pragma once

#define SUM(a, b, c, d, e, f, g, h, i, j, k, l, ...) ADD_6DIGIT_NO_CARRY(a, g, b, h, c, i, d, j, e, k, f, l)
#define XSUM(a, b, c, d, e, f, g, h, i, j, k, l, ...) SUM(a, b, c, d, e, f, g, h, i, j, k, l)

#define ADD_CARRY(a, b, c, d, e, f, g, h, i, j, k, l, ...) ADD_6DIGIT_WITH_CARRY(a, g, b, h, c, i, d, j, e, k, f, l)
#define XADD_CARRY(a, b, c, d, e, f, g, h, i, j, k, l, ...) ADD_CARRY(a, b, c, d, e, f, g, h, i, j, k, l)

#define ASSEMBLE(a1, a2, a3, a4, a5, a6, ...) XJOIN(___, XJOIN(ARGN(0, (a1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (a1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (a1, 0, 0, 0, 0, 0)), XJOIN(ARGN(3, (a1, 0, 0, 0, 0, 0)), XJOIN(ARGN(4, (a1, 0, 0, 0, 0, 0)), ARGN(5, (a1, 0, 0, 0, 0, 0))))))))
