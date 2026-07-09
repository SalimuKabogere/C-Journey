/*I will write a C program that prints my name, DOB and mobile*/

#include <stdio.h>
int main (){
    char name[] = "Salimu Kabogere";
    char dob[] = "2000-01-01";
    char mobile[] = "+250 788 123 456";
    
    printf ("My name is %s\n", name);
    printf ("My date of birth is %s\n", dob);
    printf ("My mobile number is %s\n", mobile);

    // or you can use pointers to ddeclare strings
    char *my_name_ptr="Salimu Kabogere";
    char *dob_ptr="2000-01-01";
    char *mobile_ptr="+250 788 123 456";    

    // print the results
    printf ("My name is %s\n", my_name_ptr);
    printf ("My date of birth is %s\n", dob_ptr);
    printf ("My mobile number is %s\n", mobile_ptr);

    // use \t to add a tab space between the name, dob and mobile number
    printf("My name is:\t%s\n", my_name_ptr);
    printf("My date of birth is:\t%s\n", dob_ptr);
    printf("My mobile number is:\t%s\n", mobile_ptr);

    return 0;
}