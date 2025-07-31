#include "grains.h"

uint64_t square(uint8_t index) {
    uint64_t i, num;
    for (i = 0, num = 1; i < index; num *= 2, i++)
        ;
    return i;
}
uint64_t total(void) {
    uint64_t sum, i;
    for (i = 0; i < 64; i++) {
        sum += square(i);
    }
    return sum;
}
