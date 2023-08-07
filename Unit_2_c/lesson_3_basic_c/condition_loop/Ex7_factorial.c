#include "stdio.h"
/*
this code to output factorial  c!
*/

int main(){
    int a,sum=1;
    printf("Please Enter the number\n");
    fflush(stdin);fflush(stdout);
    scanf("%d",&a);
    if(a!=0&&a>0){
        int i;
        for(i=1;i<=a;i++){
            sum*=i;
        }
        printf("The Factorial of %d is: %d",a,sum);
    }
    else if(a==0){printf("the Factorial of 0 is 1 ..");}
    else{
        printf("Error!!!! Factorial of negative doesn't exist ..");
    }
    return 0;
}