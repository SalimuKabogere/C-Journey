#include <stdio.h>

// function declaration
void myFunction (int myNumbers[5]){
    for(int i=0; i<5; i++){
        printf("%d\n", myNumbers[i]);
    }
}

// lets create a function that convert a temperature from Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius){
    return (celsius * 9/5) + 32;
}

int main(){
    int myNumbers[5] = {10, 20, 30, 40, 50};
    // function call
    myFunction(myNumbers);
    // function call for temperature conversion
    float celsius = 25.0;
    float fahrenheit = celsiusToFahrenheit(celsius);
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}