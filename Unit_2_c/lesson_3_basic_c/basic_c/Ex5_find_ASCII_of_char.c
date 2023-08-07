#include "stdio.h"
/*
this code to find the ASCII of char c!
*/

int main(){
    char value;
    printf("Please Enter character. !\n");
    fflush(stdin);fflush(stdout);
    scanf("%c",&value);
    printf("The ASCII of %c is %d \n",value,value);
    return 0;
}