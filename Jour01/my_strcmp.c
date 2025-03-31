#include <stdio.h>

int my_strcmp(char *s1, char *s2) {
    int i = 0;
    while (s1[i] && s2[i]) {
        if (s1[i] != s2[i]) {
            return 0; // false
        }
        i++;
    } 
    return (s1[i] == s2[i]); // check if the length is the same
}
int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "World";

    printf("%d\n", my_strcmp(str1, str2)); // Should print 1 (true)
    printf("%d\n", my_strcmp(str1, str3)); // Should print 0 (false)

    return 0;
}