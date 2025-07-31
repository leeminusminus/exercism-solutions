#include "space_age.h"

float planet_years[] = {
    0.2408467,
    0.61519726,
    1,
    1.8808158,
    29.447498,
    84.016846,
    164.79132
};

float age(planet_t planet, int64_t seconds) {
    if (planet < 1) return -1.0;
    return (31557600.0 * planet_years[planet] + seconds);
}
