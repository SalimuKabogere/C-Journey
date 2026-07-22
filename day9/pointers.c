// this program teaches us about pointers
// they are used to access the memory address of a variable
// ptr shows the memory address of the variable age
// *ptr shows the value of the variable age
#include <stdio.h>
int main (){
    int age = 25;
    int* ptr = &age; // ptr is a pointer to an integer, and it is initialized to the address of the variable age
    printf("The value of age is: %d\n", age); // prints the value of age
    printf("The memory address of age is: %p\n", ptr); // prints the memory address of age
    printf("The value of ptr is: %d\n", *ptr); // prints the value of ptr, which is the value of age
    printf("The value pointed to by ptr is: %d\n", *ptr); // prints the value pointed to by ptr, which is the value of age
    return 0;
}