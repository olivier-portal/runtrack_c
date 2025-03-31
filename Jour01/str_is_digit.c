#include <stdio.h>
int char_is_digit(char c) {
    if (c >= '0' && c <= '9') {
        return 1; // true
    } else {
        return 0; // false
    }
}

int str_is_digit(char *str) {
    int is_digit = 0;
    while (str[is_digit])
    {
        if (!char_is_digit(str[is_digit])) {
            return 0; // false
        }
        is_digit++;
    }
    return 1; // true
}

int main() {
    char *test1 = "54326";
    char *test2 = "54a236";

    printf("%d\n", str_is_digit(test1));
    printf("%d\n", str_is_digit(test2));

    return 0;
}