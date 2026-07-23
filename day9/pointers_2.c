#include <stdio.h>
int main (){
    int age[5] = {12, 15, 20, 25, 30};
    int *ptr = age; // ptr is a pointer to an integer, and it is initialized to the address of the first element of the array age (12)
    printf("The value of age[0] is: %d\n", *ptr);
    ptr++; // increment the pointer to point to the next element of the array (15)
    printf("The value of age[1] is: %d\n", *ptr); // prints the value of age[1], which is 15
    ptr++; // increment the pointer to point to the next element of the array (20)
    printf("The value of age[2] is: %d\n", *ptr); // prints the value of age[2], which is 20
    ptr++; // increment the pointer to point to the next element of the array (25)
    printf("The value of age[3] is: %d\n", *ptr); // prints the value of age[3], which is 25
    ptr++; // increment the pointer to point to the next element of the array (30)
    printf("The value of age[4] is: %d\n", *ptr ); // prints the value of age[4], which is 30
    return 0;

}