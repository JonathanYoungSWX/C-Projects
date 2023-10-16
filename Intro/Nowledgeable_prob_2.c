#include <stdio.h>
#include <stdbool.h>

int main() {
    bool vb = false;
    int vi = 10;
    float vf = 3.5;
    char vc = 'i';

    printf("Boolean variable (vb): %s\n", vb ? "true" : "false");
    printf("Integer variable (vi): %d\n", vi);
    printf("Real variable (vf): %.2f\n", vf);
    printf("Character variable (vc): %c\n", vc);

    return 0;
}
