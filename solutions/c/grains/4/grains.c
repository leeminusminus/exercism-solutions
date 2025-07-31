#include "grains.h"

uint64_t square(uint8_t index) {
    uint64_t i, num = 1;
    for (i = 0; i < (uint64_t)index; i++)
        num *= 2;
    return num;
}
uint64_t total(void) {
    uint64_t sum, i;
    for (i = 0; i < 64; i++) {
        sum += square(i);
    }
    return sum;
}
