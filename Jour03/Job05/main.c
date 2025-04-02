#include <stdio.h>

int factorial(int number);

int main() {
    printf("Enter an integer number: \n");

    int number;
    scanf("%d", &number);

    printf("The result of the number's factorial %d is: %d", number, factorial(number));
    return 0;
}