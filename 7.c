#include <stdio.h>

int main(){
    int x,y,max; //Variable Define

    printf("Enter 1st Number: "); 
    scanf("%d",&x); //Input 1st Number declaration for x variable

    printf("Enter 2nd Number: ");
    scanf("%d",&y); //Input 2nd Number declaration for y variable

    if (max = (x > y) ? x : y){    //max variable asign for true variable (x) or false variable (y)
        printf("Max Number is: %d", max);  //max value is print
    }
    else{
        printf("ZERO");
    }

    return 0;
    
}