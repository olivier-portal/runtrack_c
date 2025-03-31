#include <stdio.h>

void my_strcpy(char *dest, const char *src) {
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // Null-terminate the destination string
}

int main() {
    char source[] = "Hello, World!";
    char destination[50]; // Make sure this is large enough to hold the source string

    my_strcpy(destination, source);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}