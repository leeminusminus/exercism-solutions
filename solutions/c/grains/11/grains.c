#include "grains.h"

uint64_t square(uint8_t index) {
    if (index == 0) return 0;
    uint64_t i, num = 1;
    for (i = 1; i <= (uint64_t)index-1; i++)
        num *= 2;
    return num;
}
uint64_t total(void) {
    uint64_t sum = 0, i;
    for (i = 1; i <= 64; i++)
        sum += square(i);
    return sum;
}
