#include <stdio.h>
int main (){
    int a=10;
    int b=20;
    int quotient=a/b;
    printf("The quotient of %d and %d is %d\n", a, b, quotient);

    int c = (float)a / b; // This will cause a warning because of implicit conversion from float to int
    printf("The quotient of %d and %d is %d\n", a, b, c);   

    // if you want to get the quotient as a float, you should declare c as a float or a double
    float d = (float)a / b; // This will give the correct result as a float
    printf("The quotient of %d and %d is %.2f\n", a, b, d);
    return 0;
}