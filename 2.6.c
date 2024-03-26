#include <stdio.h>

int main(){
    int x, sum;

    printf("Enter Three Digit Number: ");
    scanf("%d", &x);
    int i = 0;
    char num [x];
    for(i =0; i <3; i++){
         sum = sum + i;
         i = i+1;
    }
    return 0;
}