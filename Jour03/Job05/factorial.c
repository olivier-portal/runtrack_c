#include <stdio.h>

int factorial(int *number) {
    if (number == NULL) {
        return 0;
    }

    if (*number < 0) {
        return -1;
    }

    int result = 1;
    for (int i = 1; i <= *number; i++) {
        result *= i;
    }
    return result;
}