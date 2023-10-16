#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "header.h"

Temperature average_temperature(Temperature t1, Temperature t2) {
    Temperature avg;
    avg.temperature = (t1.temperature + t2.temperature) / 2;
    avg.position = t1.position;
    return avg;
}

void test_average_temperature() {
    Temperature t1 = { 20.0, { 0, 0 } };
    Temperature t2 = { 30.0, { 0, 0 } };
    Temperature avg = average_temperature(t1, t2);
    assert(avg.temperature == 25.0);
}

