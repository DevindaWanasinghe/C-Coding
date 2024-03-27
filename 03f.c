// Sum of Digits:

#include<stdio.h>
int main(){
    int num, sum;
    int first, middle, last;

    printf("Enter any 3 digits Number: ");
    scanf("%d", &num);

    first = (num/100);
    middle = (num/10)%10;
    last = (num%100)%10;

    sum = (first + middle + last);

    printf("sum of three digits of You Entered Numbers: %d", sum);

    return 0;
}
