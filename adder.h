#include <processed_numbers.h>
#include <full_adder.h>
#include <utils.h>

#undef SOLUTION

#define SOLUTION XJOIN(___, XADD_CARRY(XJOIN(_, A), XJOIN(_, B), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
