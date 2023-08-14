#include <stdio.h>
#include <math.h>

double square_root_1(int n){
     return sqrt(n);
}

double square_root_2(int m){return pow(2,.5*log2(m));}

int main(){
    int num;
    printf("please Enter the number: ");
    scanf("%d",&num);

    printf("the square root of %d is : %.3lf",num,square_root_1(num));
    return 0;
}