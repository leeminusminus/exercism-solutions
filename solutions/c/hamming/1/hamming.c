#include "hamming.h"
#include <string.h>


int compute(const char *lhs, const char *rhs) {
    if (strlen(lhs) != strlen(rhs)) return -1;

    size_t i, count = 0;
    for (i = 0; i < strlen(lhs); i++)
        if (lhs[i] != rhs[i])
            count++;
    return count;
}
