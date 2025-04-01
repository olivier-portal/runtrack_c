#include <stdio.h>
void my_putstr(char greetings[]) {
    printf("%s", greetings);
}
int main() {
    my_putstr("Alice");
    return 0;
}