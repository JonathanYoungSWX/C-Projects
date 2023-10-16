typedef struct {
    float x;
    float y;
} Position;

typedef struct {
    float temperature;
    Position position;
} Temperature;

Temperature average_temperature(Temperature t1, Temperature t2);

void test_average_temperature();