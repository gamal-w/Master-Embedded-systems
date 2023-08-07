#include "stdio.h"
/*
this code to check if the char is vowel or not  c!
*/

int main(){
    char val;
    printf("Please Enter the character.\n> ");
    fflush(stdin);fflush(stdout);
    scanf("%c",&val);
    if(val=='a'||val=='A'||val=='e'||val=='E'||val=='o'||val=='O'||
          val=='i'||val=='I'||val=='u'||val=='U'){
            printf("%c is Vowel..",val);

    }
    else{
        printf("%c is consonant..",val);
    }
    return 0;
}