#include "grains.h"

uint64_t square(uint8_t index) {
    return (1 << ((uint64_t)index-1));
}
uint64_t total(void) {
    return UINT64_MAX;
}
