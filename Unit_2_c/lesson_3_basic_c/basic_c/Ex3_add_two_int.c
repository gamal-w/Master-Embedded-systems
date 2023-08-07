#include "stdio.h"
/*
this code to add two integers in c!
*/

int main(){
    int value,value2;
    printf("Please Enter two value. !\n");
    fflush(stdin);fflush(stdout);
    scanf("%d",&value);
    scanf("%d",&value2);
    printf("The sum is %d \n",value+value2);
    return 0;
}