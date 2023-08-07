#include "stdio.h"
/*
this code to check if the num is odd or even  c!
*/

int main(){
    int num;
    printf("Please Enter the Number:\n> ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&num);
    num%2==0?printf("Then %d is even",num):printf("Then %d is odd",num);
    return 0;
}