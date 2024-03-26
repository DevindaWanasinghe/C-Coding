#include <stdio.h>

int main(){
    char inputword;

    printf("Enter any Character:");
    scanf("%c",&inputword);   //user input character asign  for variable

    if (inputword >= 'A' &&  inputword <= 'Z') //Checking have A to Z (&& = AND)
    {
        printf("UPPERCASE\n");
    }
    else if (inputword >= 'a' && inputword <= 'z')  //checking have a to z (&& = AND)
    {
        printf("lowercase\n");
    }
    else{
        printf("Invalid Input\n"); //print invalid input

    }
        

    return 0 ;
    
    
}