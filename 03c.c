//Rectangle Area and Perimeter:

#include<stdio.h>
int main(){
    float length, width;

    printf("Enter length of the Rectangle: ");
    scanf("%f",&length);

    printf("Enter width of the Rectangle: ");
    scanf("%f",&width);

    float area =length * width;
    float perimeter = 2 * (length + width);

    printf("Area: %.2f\n", area);
    printf("perimeter: %.2f\n", perimeter);

    return 0;
}
