#include <stdio.h>

int main(){
    int x,c;

    printf("Enter Number: ");
    scanf("%d", &x);

    c = x % 2;

    if( c == 0){
        printf("%d is a Even Number",x);
    }
    else if(c == 1){
        printf("%d is a odd number",x);
    }
    else{
        printf("Invalid input");
    }
    return 0;
}