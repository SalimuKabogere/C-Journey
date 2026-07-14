// these follow the syntax of;
/*
if (condition) {
    // code to execute if condition is true
} else {
    // code to execute if condition is false
}
*/

#include <stdio.h>
int main (){
    int age;
    printf("How old are you?\n");
    scanf("%d", &age);
    int votingAge = 18;

    if (age >= votingAge) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }
    return 0;
}
