#include <stdio.h>

int main() {
    // Declaring two floats with some random values
    float num1 = 5.7, num2 = 3.2;

    // Doing some basic math and showing results (2 decimal places)
    printf("The sum is: %.2f\n", num1 + num2);
    printf("The difference is: %.2f\n", num1 - num2);
    printf("The multiplication result is: %.2f\n", num1 * num2);
    printf("The division result is: %.2f\n", num1 / num2);

    // Using modulus to find remainder of a division
    int int1 = 10, int2 = 3;
    printf("The remainder of %d divided by %d is: %d\n", int1, int2, int1 % int2);

    // Working with characters
    char letter = 'A';
    printf("The character is: %c\n", letter);
    printf("The ASCII value of '%c' is: %d\n", letter, letter);

    // Asking the user for input (integer and float)
    int userInt;
    float userFloat;
    printf("Enter an integer: ");
    scanf("%d", &userInt);
    printf("Enter a floating-point number: ");
    scanf("%f", &userFloat);

    // Showing what the user entered
    printf("You entered integer: %d and floating-point number: %.2f\n", userInt, userFloat);

    // Playing with incrementing a variable
    int incrementVar = 5;
    printf("Initial value of incrementVar: %d\n", incrementVar);
    printf("Pre-increment: %d\n", ++incrementVar);  // Increases first, then prints
    printf("Post-increment: %d\n", incrementVar++); // Prints first, then increases
    printf("Value after post-increment: %d\n", incrementVar); // Final value after both increments

    return 0;
}
