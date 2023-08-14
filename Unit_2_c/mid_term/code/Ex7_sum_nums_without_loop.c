#include <stdio.h>

int sum(int n){
    return n*(n+1)/2;
}

int main(){

    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("the sum from 1 to %d is : %d",n,sum(n));
  
    return 0;
}