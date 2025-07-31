#include "resistor_color.h"
#include<stdlib.h>

resistor_band_t color_code(int color) {
    return color;
}
resistor_band_t * colors() {
    resistor_band_t * color_list = (resistor_band_t *) malloc(sizeof(resistor_band_t)*10);
    for (int i = 0; i < 10; i++)
        *(color_list+i) = color_code(i);
    return color_list;
}
