// these are comparison operators
/*
They are used to check if the value is equal to, 
not equal to, greater than, less than, greater than or equal to, 
and less than or equal to another value. The result of a comparison operation is either true (1) or false (0).
*/

#include <stdio.h>
int main (){
    int a = 10;
    int b = 20;
    printf("%d\n",a>b); //prints 0, which means false, because 10 is not greater than 20
    printf("%d\n",a<b); //prints 1, which means true, because 10 is less than 20
    printf("%d\n",a==b); //prints 0, which means false, because 10 is not equal to 20
    return 0;
}