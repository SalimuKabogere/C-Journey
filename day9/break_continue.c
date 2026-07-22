// using break to jump out of a loop
#include <stdio.h>
int main (){
    for (int i=1;i<=10;i++){
        if(i==2){
            continue; //skips 2 during execution of the loop
        }

        if(i==4){
            break; //stops when the loop gets to 4
        }
        printf("%d ", i); //prints 1 and 3
    }
    return 0;
}