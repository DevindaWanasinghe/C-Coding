#include <stdio.h>

int main(){
    int x,y,c;
    char choose;


    printf("Enter 1st value: ");
    scanf(" %d",&x);

    printf("Enter 2nd value: ");
    scanf(" %d",&y);

     printf("\na  = add\n");
     printf("b  = sub\n");
     printf("c  = mul\n");
     printf("d  = div\n");

     printf("Pleas Enter your choose: ");
     scanf(" %c",&choose);

    if(choose == 'a'){
        c = x + y;
        printf("add is %d",c);
    } 
    else if(choose == 'b'){
        c = x - y;
        printf("sub is %d",c);
    }
     else if(choose == 'c'){
        c = x * y;
        printf("mul is %d",c);
    } 
     else if(choose == 'd'){
        c = x / y;
        printf("div is %d",c);
    }
    else{
        printf("invalid input");
    }

    return 0;
    


}