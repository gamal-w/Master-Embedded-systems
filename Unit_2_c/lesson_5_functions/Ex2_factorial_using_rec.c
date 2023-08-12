#include "stdio.h"

int factorial_by_recursion(int);
int main(){
    printf("Enter Positive number: ");
    int num;
    scanf("%d",&num);
    printf("Factorial of %d is = %d",num,factorial_by_recursion(num));
    return 0;
}
int factorial_by_recursion(int num){
    if(num!=1){
        return num *factorial_by_recursion(num-1);
        // if we call factorial_by_recursion(num--) it will output infinite loop...
    }
}