#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "typedef.h"

int main() {

    srand((unsigned)time(NULL));

    // Generate two random numbers using /dev/urandom
    int8 a = rand() % ((INT8_MAX / 2) + 1);
    int8 b = rand() % ((INT8_MAX / 2) + 1);

    printf("Hello, World! The random seed is: %" PRId8 "\n", a + b);
    return 0;
}
