#include <stdio.h>
int main (){
    // declare variables
    int firstInt, secondInt;
    int sum;

    printf("Enter first integer: ");
    // fetch the input from the user
    scanf("%d", &firstInt);

    printf("Enter second integer: ");
    scanf("%d", &secondInt);

    // calculate the sum
    sum = firstInt + secondInt;
    printf("The sum of the numbers is: %d", sum);

    return 0;
}