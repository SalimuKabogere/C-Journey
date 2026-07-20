// the while loop will always run as long as the condition is true

#include <stdio.h>
int main(){
    int count = 3;

    while (count > 0) {
        printf("%d\n", count);
        count --;
    }
    printf("Happy New Year!\n");
    return 0;
}

// this program will print the numbers 3, 2, and 1, each on a new line, as long as the variable 'count' is greater than 0. 
// The loop decrements 'count' by 1 in each iteration until it reaches 0, at which point the loop terminates.