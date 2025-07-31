#include "darts.h"

uint8_t score(coordinate_t position) {
    double distance = sqrt(
        position.x * position.x + position.y * position.y
    );
    if (distance <= 1.0)
        return 10;
    else if (distance <= 5.0)
        return 5;
    else if (distance <= 10.0)
        return 1;
    else
        return 0;
}
