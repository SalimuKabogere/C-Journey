//  this is for the switch statement
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number (1-3): ");
    scanf("%d", &number);
    switch (number) {
        case 1:
            printf("You entered one.\n");
            break;
        case 2:
            printf("You entered two.\n");
            break;
        case 3:
            printf("You entered three.\n");
            break;
        default:
            printf("You entered a number outside the range of 1-3.\n");
            break;
    }
    return 0;
}