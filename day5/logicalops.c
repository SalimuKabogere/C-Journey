// this program is used to run ifs of logical operators.
// && (AND), || (OR), ! (NOT)
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number > 0 && number % 2 == 0) {
        printf("The number is positive and even.\n");
    } else if (number > 0 && number % 2 != 0) {
        printf("The number is positive but not even.\n");
    } else {
        printf("The number is not positive.\n");
    }
    return 0;
}