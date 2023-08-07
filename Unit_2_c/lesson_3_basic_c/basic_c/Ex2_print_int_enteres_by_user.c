#include "stdio.h"
/*
this code to print interger Entered by the user in c!
*/

int main(){
    int value;
    printf("Please Enter the interger value. !\n");
    fflush(stdin);fflush(stdout);
    scanf("%d",&value);
    printf("The value is %d \n",value);
    return 0;
}