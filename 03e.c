// Check Even or Odd

#include<stdio.h>
int main (){
    int num1;

    printf("Enter an Integer: ");
    scanf("%d", &num1);

    if (num1% 2 == 0){
        printf("%d is even Number.\n", num1);
    }
    else{
        printf("%d is odd Number.\n", num1);
    }
    return 0;
}
