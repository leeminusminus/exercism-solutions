#include "resistor_color.h"

resistor_band_t color_code(int color) {
    return color;
}
resistor_band_t * colors() {
    static resistor_band_t color_list[] = {
        COLORS
    };
    return color_list;
}
