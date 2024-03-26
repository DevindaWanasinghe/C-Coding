#include <stdio.h>

int main (){
    char ch;

    printf ("Enter Letter: ");
    scanf("%c", &ch);

   

    if(ch =='A'||ch=='E'|| ch== 'I'|| ch =='O'|| ch=='U'|| ch=='a'|| ch=='e'|| ch=="i"|| ch=='o'|| ch=='u'){
        printf("%c is Vowel",ch);
    }
    else{
        printf("%c is Cocenant",ch);
    }

    return 0;
}