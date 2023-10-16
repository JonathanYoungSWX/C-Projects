#include <stdio.h>
#include "lib.h"

int main() {
    Position positions[] = {{1.0, 2.0}, {3.0, 4.0}, {5.0, 6.0}};
    int n_values = sizeof(positions) / sizeof(Position);
    Position* result = average_position(positions, n_values);
    printf("Average position: (%f, %f)\n", result->x, result->y);
}

