#include "stdio.h"
/*
this code to swap two nums c!
*/

int main(){
    float a,b;
    printf("Please Enter a. !\n");
    scanf("%f",&a);
    fflush(stdin);fflush(stdout);
    printf("Please Enter b. !\n");
    fflush(stdin);fflush(stdout);
    scanf("%f",&b);
    a+=b;
    b=a-b;
    a-=b;
    /*
    basic method --> by using anthor variable..
    float test;
    test=a;
    a=b;
    b=test;
    */
    printf("After swapping\na: %f\nb: %f \n",a,b);
    return 0;
}