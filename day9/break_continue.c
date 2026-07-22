// using break to jump out of a loop
#include <stdio.h>
int main (){
    for (int i=1;i<=10;i++){
        // if(i==4){
        //     break; // execution jumps out of the loop when i is 4
        // }

        // for continue, it skips the execution of the loop when i is 4 and continues with the next iteration
        if(i==4){
            continue; // skips the rest of the loop when i is 4
        }
        printf("%d ", i); //prints 1 2 3 5 6 7 8 9 10
    }
    return 0;
}