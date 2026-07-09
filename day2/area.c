// This program calculates the area of a rectangle
/*Area of a rectangle = length * width*/

#include <stdio.h>
int main (){
    int length = 5;
    int width = 10;
    int area = length * width;
    printf ("The area of the rectangle is %d\n", area);

    // or you can declare the variables in a single line since they all have the same type
    int length2 = 5, width2 = 10, area2 = length2 * width2;
    printf ("The area of the rectangle is %d\n", area2);
    return 0;
}