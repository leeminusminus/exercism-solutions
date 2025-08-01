#include "eliuds_eggs.h"

unsigned int egg_count(unsigned int n) {
    unsigned int sum = 0, cmp = 1;

    while (n >= cmp) {
        sum += (n & cmp) / cmp;
        cmp <<= 1;
    }

    return sum;
}