#include <stdio.h>

int main(){
    int x,y,sum;

    printf("Enter 1st Integer No:"); //Enter 1st Integer
    scanf("%d", &x);

    printf("Enter 2nd Integer No:"); //Enter 2nd Integer
    scanf("%d", &y);

    sum = x+y; //sum of user input numbers
    
    printf("\nUser Entered Integer No: %d",sum);  //dispaly output

    return 0;

}