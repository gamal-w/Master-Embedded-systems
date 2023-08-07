#include "stdio.h"
/*
this code to check if the num is positive or not  c!
*/

int main(){
    float a;
    printf("Please Enter the number\n");
    fflush(stdin);fflush(stdout);
    scanf("%f",&a);
    if(a>0){
        printf("%.2f is positive",a);
    }
    else if(a<0){
        printf("%.2f is Negative",a);
    }
    else{
        printf("you Entered Zero");
    }
    return 0;
}