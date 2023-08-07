#include "stdio.h"
/*
this code to Multiply two floats in c!
*/

int main(){
    float value,value2;
    printf("Please Enter two value. !\n");
    fflush(stdin);fflush(stdout);
    scanf("%f",&value);
    scanf("%f",&value2);
    printf("The Multiply is %f \n",value*value2);
    return 0;
}