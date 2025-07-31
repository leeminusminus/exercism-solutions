#include "grains.h"

uint64_t square(uint8_t index) {
    uint64_t i;
    for (i = 1; i < index; i *= index)
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
