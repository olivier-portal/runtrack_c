#include <stdio.h>

int factorial(int *number);

int main() {
    printf("Enter an integer number: \n");

    int number;
    scanf("%d", &number);

    printf("The result of the number's factorial %d is: %d\n", number, factorial(&number));

    printf("No input: %d\n", factorial(NULL));   // simulate "no argument"
    return 0;
}