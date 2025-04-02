#include <stdio.h>

int my_sqrt(int number);

int main() {
    printf("Enter an integer number: \n");

    int number;
    scanf("%d", &number);

    printf("The result of the square root of the number %d is: %d", number, my_sqrt(number));
    return 0;
}