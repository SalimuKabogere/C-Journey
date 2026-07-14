// this shows how the short if statement works in C17
#include <stdio.h>
int main () {
    int age;
    printf("How old are you?\n");
    scanf("%d", &age);
    int votingAge = 18;
    (age >= votingAge) ? printf("You are eligible to vote.\n") : printf("You are not eligible to vote.\n");
    return 0;
}