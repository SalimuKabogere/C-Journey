// nested ifs are used to execute a block of code only if multiple conditions are true. In this example, we will check if a number is positive and even.
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number > 0) {
        if (number % 2 == 0) {
            printf("The number is positive and even.\n");
        } else {
            printf("The number is positive but not even.\n");
        }
    } else {
        printf("The number is not positive.\n");
    }
    return 0;
}