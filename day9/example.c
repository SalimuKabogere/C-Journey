#include <stdio.h>
int main (){
    int myNumbers[] = {25, 50, 75, 100, -45, 0, 5, 10, 15, 20};
    int length = sizeof(myNumbers)/sizeof(myNumbers[0]); //calculates the length of the array
    /*
    How the total length of the array is calculated:
    sizeof(myNumbers) returns the total number of bytes used by the array.
    sizeof(myNumbers[0]) returns the number of bytes used by the first element of the array.
    Dividing the total number of bytes by the number of bytes used by the first element gives the total number of elements in the array, which is the length of the array.
    In this case, the total number of bytes used by the array is 40 (10 elements * 4 bytes per int), 
    and the number of bytes used by the first element is 4 (1 element * 4 bytes per int).
    Therefore, the length of the array is 40 / 4 = 10.
    */

    printf("%d\n", myNumbers[0]); //prints 25
    printf("%d\n", myNumbers[1]); //prints 50
    printf("%d\n", length); //prints 10

    // skip the negative number in the array and stop when a 20 is found
    for (int i = 0; i < length; i++){
        if (myNumbers[i] < 0){
            continue;
        }
        if (myNumbers[i] == 20){
            break;
        }
        printf("%d ", myNumbers[i]);
    }

    return 0;
}