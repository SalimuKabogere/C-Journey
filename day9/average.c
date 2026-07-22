// this program calcualates the average of ages
#include <stdio.h>
int main (){
    int age[] = {12, 15, 20, 25, 30};
    int sum = 0;
    int count = sizeof(age) / sizeof(age[0]);
    for (int i = 0; i < count; i++){
        sum += age[i];
    }
    double average = (double)sum / count;
    printf("The average age is: %.2f\n", average);
    return 0;
}