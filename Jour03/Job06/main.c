#include <stdio.h>

int fibonaci(int *n);

int main() {
    printf("Enter an integer to get the Fibonacci number at that position:\n");

    int number;
    scanf("%d", &number);

    printf("The result of the fibonaci's number at position %d is: %d\n", number, fibonaci(&number));

    printf("No input: %d\n", fibonaci(NULL));   // simulate "no argument"
    return 0;
}