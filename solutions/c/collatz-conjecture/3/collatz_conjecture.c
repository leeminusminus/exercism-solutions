#include "collatz_conjecture.h"

int steps(int start) {
    if (start < 1) return ERROR_VALUE;
    int i;
    for (i = 0; start != 1; i++)
        if (start % 2 == 0)
            start = start / 2;
        else
            start = start * 3 + 1;
    return i;
}
