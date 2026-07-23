// Scoping functions to show the difference of local and global variables
#include <stdio.h>

// global variable
int globalVar = 10;

// declare a function that uses a local variable
void localScopeFunction() {
    // local variable
    int localVar = 20;
    printf("Inside localScopeFunction: localVar = %d, globalVar = %d\n", localVar, globalVar);
}

int main (){
    printf("Inside main: globalVar = %d\n", globalVar);
    localScopeFunction();
    // trying to access localVar here will result in an error because it is out of scope
    // printf("Inside main: localVar = %d\n", localVar); // Uncommenting this line will cause a compilation error
    return 0;
}