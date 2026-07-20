// the syntax for the for loop is as follows:
/*
for (initialization; condition; increment/decrement) {
    // code to be executed
}
*/

// program to print the sum of even number btn 0 and 10

#include <stdio.h>
int main() {
    int sum = 0;
    for (int i = 0; i <= 10; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    printf("The sum of even numbers between 0 and 10 is: %d\n", sum);
    return 0;
}

// int main (){
//     int sum = 0;
//     for (int i = 0; i <=10; i+=2) {
//         sum+=i;
//     }
//     printf("The sum of even numbers between 0 and 10 is: %d\n", sum);
//     return 0;
// }   