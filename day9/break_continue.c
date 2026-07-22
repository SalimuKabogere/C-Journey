// using break to jump out of a loop
#include <stdio.h>
int main (){
    for (int i=1;i<=10;i++){
        if(i==4){
            break; // execution jumps out of the loop when i is 4
        }
        printf("%d ", i); //prints 1 2 3
    }
    return 0;
}