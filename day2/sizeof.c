// getting the size of variables used

#include <stdio.h>
int main (){
    int age=20;
    float amount=100.5;
    char name[]="Salimu Kabogere";
    double balance=1000.50;
    printf("The size of age is %zu bytes\n", sizeof(age));
    printf("The size of amount is %zu bytes\n", sizeof(amount));
    printf("The size of name is %zu bytes\n", sizeof(name));
    printf("The size of balance is %zu bytes\n", sizeof(balance));
    return 0;
}