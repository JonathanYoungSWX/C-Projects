#include "lib.h"
#include <stdio.h>

Position* average_position(Position* positions, int n_values) {
    float sum_x = 0.0;
    float sum_y = 0.0;
    for (int i = 0; i < n_values; i++) {
        sum_x += positions[i].x;
        sum_y += positions[i].y;
    }
    static Position result;
    result.x = sum_x / n_values;
    result.y = sum_y / n_values;
    return &result;
}

