#include <stdio.h>
int main () {
    int a = 5, b = 10, temp;
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // swapping logic
    temp = a; //store the original value of a in temp

    a = b; //overwrite the value of a with the value of b
    b = temp; //overwrite the value of b with the original value of a stored in temp
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}