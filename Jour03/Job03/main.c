#include <stdio.h>

int power(int number, int power);

int main() {
    printf("Enter an integer number: \n");

    int number;
    scanf("%d", &number);

    int pow;
    printf("Enter an integer power: \n");
    scanf("%d", &pow);

    printf("The result of %d power by %d is: %d", number, pow, power(number, pow));
    return 0;
}