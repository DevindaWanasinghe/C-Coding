// sum and Average:
#include<stdio.h>

int main(){
    float num1, num2, num3, sum, avg;

    printf("Enter Any 3 Numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

     sum = num1 + num2 + num3;
     avg = (sum/3);

    printf("Sum of given numbers: %f\n", sum);
    printf("Average of given numbers: %f\n", avg);

    return 0;

}
