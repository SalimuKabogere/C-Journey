#include <stdio.h>
int main () {
    // declare variables to use
    char operator;
    float num1, num2;

    // ask the user to enter an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    // make sure the operator is valid
    if (operator != '+' && operator != '-' && operator != '*' && operator != '/') {
        printf("Error! Invalid operator.");
        return 1; // exit the program with an error code
    }

    // ask the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // use switch statement to perform the calculation based on the operator
    switch (operator) {
        case '+':
            printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
            } else {
                printf("Error! Division by zero.");
            }
        default:
            printf("Error! Invalid operator.");
    }

    return 0;
}