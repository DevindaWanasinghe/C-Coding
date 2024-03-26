#include <stdio.h>

int main(){
    int x,y, temp;

    printf("Enter number x: ");
    scanf("%d",&x);

    printf("enter number y: ");
    scanf("%d",&y);

    printf("x = %d\n",x);
    printf("y = %d\n",y);

    temp = x;
    x = y;
    y = temp;

    printf("\n\nAfter Swaping\n");
    
    printf("X is = %d",x);
    printf("\nY is = %d",y);


    return 0 ;


    
}