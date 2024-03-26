#include <stdio.h>

int main(){
    float x,y,area;

    printf("Enter length: ");
    scanf("%f",&x);

    printf("Enter width: ");
    scanf("%f",&y);

    area = x * y ;

    printf("Perimeter is rectangle: %.2f",area);

    return 0;

    
}