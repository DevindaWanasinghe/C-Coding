//Celsius to Fahrenheit

#include<stdio.h>
int main(){
    float celsius, fahrenheit;

    printf("Enter Temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5)+ 32;

    printf("Temperature in Fahrenheit: %.1f\n", fahrenheit);

    return 0;

}
