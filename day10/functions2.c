#include <stdio.h>

// function declaration
void myFunction (int myNumbers[5]){
    for(int i=0; i<5; i++){
        printf("%d\n", myNumbers[i]);
    }
}

int main(){
    int myNumbers[5] = {10, 20, 30, 40, 50};
    // function call
    myFunction(myNumbers);
    return 0;
}