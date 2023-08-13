#include "stdio.h"

int power_(int,int);
int main(){
    int base,power;
    printf("Enter the base: ");
    scanf("%d",&base);
    printf("Enter the power: ");
    scanf("%d",&power);
    printf("%d^%d = %d",base,power,power_(base,power));
    return 0;
}


int power_(int base,int power){
    if(power!=0){
        return base*power_(base,power-1);
    }
    else{
        return 1;
    }
}