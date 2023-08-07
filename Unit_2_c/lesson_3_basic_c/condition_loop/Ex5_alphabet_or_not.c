#include "stdio.h"
/*
this code to check if the char is aphabet or not  c!
*/

int main(){
    char a;
    printf("Please Enter the character\n");
    fflush(stdin);fflush(stdout);
    scanf("%c",&a);
    if((a>=65&&a<=90)||(a>=97&&a<=122)){
        printf("%c is Alphabet",a);
    }
    else{
        printf("%c is Not Alphabet",a);
    }
    return 0;
}