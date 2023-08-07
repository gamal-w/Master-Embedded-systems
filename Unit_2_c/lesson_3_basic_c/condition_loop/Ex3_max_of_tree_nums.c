#include "stdio.h"
/*
this code to output the max of three nums  c!
*/

int main(){
    float a,b,c;
    printf("Please Enter three numbers\n");
    fflush(stdin);fflush(stdout);
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if(a>c&&c>b){
        printf("The max is %f",a);
    }
    else if(c>a&&c>b){
        printf("The max is %f",c);
    }
    else if(b>a&&b>c){
        printf("The max is %f",b);
    }
    
    return 0;
}