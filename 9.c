#include <stdio.h>

int main(){
    char ch[100];
    int x,y,year;

    printf("Enter Your Name: ");
    scanf("%s",ch);

    printf("Enter Your Birth Year: ");
    scanf("%d",&x);

    printf("\nEnter Current Year: ");
    scanf("%d",&y);

    year = y - x;

    printf("\n%s Age is: %d",ch,year);

    return 0;

}