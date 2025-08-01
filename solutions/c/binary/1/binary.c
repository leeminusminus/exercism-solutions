#include "binary.h"
#include <string.h>

int convert(const char *input) {
    int len = strlen(input);
    int mag = 1;
    int sum = 0;
    int i, num;

    if (len < 1) return INVALID;

    for (i = len-1; i >= 0; i--) {
        num = input[i];
        if (!(num == '1' || num == '0'))
            return INVALID;
        else if (num == '1')
            sum += mag;
        
        mag *= 2;
    }
    return sum;
}
