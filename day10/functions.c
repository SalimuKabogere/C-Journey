// functions are blocks of code that execute when called
#include <stdio.h>
// function declaration
void greet(){
    printf("Hello, World!\n");  
}

// function to calculate the sum of two integers
int sum(int a, int b){
    return a+b;
}

void calculateSum(){
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    int result = sum(a, b);
    printf("The sum of %d and %d is: %d\n", a, b, result);
}

int main(){
    // function call
    greet();
    int result = sum(5, 10);
    printf("The sum of 5 and 10 is: %d\n", result);
    calculateSum();
    return 0;
}