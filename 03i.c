// Circle Area & Circumference:

#include<stdio.h>
#define PI 3.14

int main(){
    float radius;

    printf("Enter the radius of Circle: ");
    scanf("%f", &radius);

    float area = PI * radius * radius;
    float circumference = 2 * PI * radius;

    printf("Area is: %.2f\n", area);
    printf("Circumference is: %.2f\n", circumference);

    return 0;


}
