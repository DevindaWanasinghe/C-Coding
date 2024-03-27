//02. Arithmetic Operations

#include<stdio.h>
int main(){
    int num1, num2;

    printf("Enter Your 1st Integer Number: ");
    scanf("%d",&num1);

    printf("Enter your 2nd Integer Number: ");
    scanf("%d",&num2);

    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Product: %d\n", num1 * num2);

    if (num2 != 0){
        printf("Quotient: %f\n",(float)num1 / num2);
    }
    else{
        printf("Cannot divide by zero,\n");
    }


    return 0;

}
