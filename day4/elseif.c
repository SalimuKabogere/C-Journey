// else if is used to add multiple conditions to an if statement.
// it is used to check for multiple conditions and execute different blocks of code based on which condition is true.

#include <stdio.h>
int main () {
    int age;
    printf("How old are you?\n");
    scanf("%d", &age);
    int votingAge = 18;
    int seniorAge = 65;

    if (age >= seniorAge) {
        printf("You are a senior citizen.\n");
    } else if (age >= votingAge) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }
    return 0;
}