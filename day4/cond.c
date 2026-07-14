// this is conditionals but using a boolean
#include <stdio.h>
#include <stdbool.h>
int main () {
    int temperature;
    
    printf("What is the temperature?\n");
    scanf("%d", &temperature);
    bool isHot = temperature >30;
    if(isHot) {
        printf("It's hot outside!\n");
    }else {
        printf("It's not hot outside!\n");
    }
    return 0;
}