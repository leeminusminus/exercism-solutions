#include "grains.h"

uint64_t square(uint8_t index) {
    if (index == 0) return 0;
    uint64_t num = 1;
    uint8_t i;
    for (i = 1; i <= index-1; i++)
        num *= 2;
    return num;
}
uint64_t total(void) {
    uint64_t sum, i;
    for (i = 1; i <= 64; i++)
        sum += square(i);
    return sum;
}
