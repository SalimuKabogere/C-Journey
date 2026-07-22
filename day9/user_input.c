// this program shows how to get user input in C
#include <stdio.h>
int main (){
    char full_name[50];
    printf("Enter your full name: ");
    // to print the full name with spaces, we can use fgets instead of scanf. 
    // fgets reads a line from the specified stream and stores it into the string pointed to by full_name. It stops when either (n-1) characters are read, the newline character is read, or the end-of-file is reached, whichever comes first.
    fgets(full_name, sizeof(full_name), stdin); // read a line from standard input and store it in full_name
    printf("Hello, %s!\n", full_name); //if the name is Kabogere Salimu, with a space, it will only print Kabogere because scanf stops reading at the first whitespace character. To read a full name with spaces, you can use fgets instead of scanf.
    return 0;
}