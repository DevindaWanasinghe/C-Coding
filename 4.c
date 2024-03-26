#include <stdio.h>

float main(){
    float x,y; //Floating Variable

    printf("Enter 1st Floating No:"); //Display Enter user 1st input
    scanf("%f", &x); //input variable

    
    printf("Enter Floating No:"); //Display Enter user 2nd input
    scanf("%f", &y); //input variable

    float product = x * y ;
    
    printf("\nUser Entered No product: %.2f",product); //dispaly output

    return 0;

}