#include <stdio.h>
void my_putchar(char c) {
    putchar(c);
    return c;
}
int main() {
    my_putchar('A');
    return 0;
}