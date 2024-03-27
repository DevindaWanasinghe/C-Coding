//01. Convert Integer to Floating-Point Number
#include<stdio.h>
int main(){
    int intNum;
    printf("Enter an Integer Number: ");
    scanf("%d", &intNum);

    float floatNum = (float)intNum;

    printf("Floating-Point Number is: %.2f\n" , floatNum);

    return 0;

}


