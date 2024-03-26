#include <stdio.h>

int main(){
    int num1;

    printf("Enter any Integer:"); //Display inputut Number
    scanf("%d",&num1);

    if (num1 > 1) //Checking Greater than 1
    {
        printf("Positive Number\n"); 
    }
    else if(num1 < 0){ //Checking less than 0
        printf("Negitive Number\n");
    }
    else{
        printf("Zero"); 
    }

    return 0;
    


}