#include "stdio.h"
/*
this code to output the sum of int  c!
*/

int main(){
    int a,sum=0;
    printf("Please Enter the number\n");
    fflush(stdin);fflush(stdout);
    scanf("%d",&a);
    int i;
    for(i=0;i<=a;i++){
        sum+=i;
    }
    printf("The sum is: %d",sum);
    return 0;
}