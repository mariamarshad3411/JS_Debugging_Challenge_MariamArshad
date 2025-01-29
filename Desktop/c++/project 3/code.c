#include <stdio.h>

int main() {
    float num1 = 5.7, num2 = 3.2;

    printf("The sum is: %.2f\n", num1 + num2);
    printf("The difference is: %.2f\n", num1 - num2);
    printf("The multiplication result is: %.2f\n", num1 * num2);
    printf("The division result is: %.2f\n", num1 / num2);

    int int1 = 10, int2 = 3;
    printf("The remainder of %d divided by %d is: %d\n", int1, int2, int1 % int2);

    char letter = 'A';
    printf("The character is: %c\n", letter);
    printf("The ASCII value of '%c' is: %d\n", letter, letter);

    int userInt;
    float userFloat;
    printf("Enter an integer: ");
    scanf("%d", &userInt);
    printf("Enter a floating-point number: ");
    scanf("%f", &userFloat);
    printf("You entered integer: %d and floating-point number: %.2f\n", userInt, userFloat);

    int incrementVar = 5;
    printf("Initial value of incrementVar: %d\n", incrementVar);

    printf("Pre-increment: %d\n", ++incrementVar);
    printf("Post-increment: %d\n", incrementVar++);
    printf("Value after post-increment: %d\n", incrementVar);

    return 0;
}
