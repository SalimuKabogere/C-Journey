// the do while loop is similar to the while loop, 
// except that the condition is evaluated after the execution of the loop body. 
// This means that the loop body will always execute at least once, regardless of whether the condition is true or false.

#include <stdio.h>
int main() {
    int choice;
    do {
        printf("Welcome User\n");
        printf("1. Withdraw\n");
        printf("2. Deposit\n");
        printf("3. Check Balance\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 3);
    return 0;
}

/*
The program is asking if the user is entering the right choice
If the choice is btn 1-3, then continue with the rest of the program, else keep asking the user to enter the right choice.
*/ 