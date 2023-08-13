# include "stdio.h"
#include "string.h"
/**
 * 
 * this program to to find if the prime numbers in interval..
 * 
*/
void is_prime(int x,int  y);
int main(void){
    int x,y;
    printf("Enter two numbers: \n");
    fflush(stdin);fflush(stdout);
    scanf("%d %d",&x,&y);
    is_prime(x, y);

    return 0;
}
void is_prime(int x,int y){
    int i,j,prime,count=0,flag=1;
    int g[100];
    for(i=x;i<=y;i++){
        prime=1;
        for ( j = 2; j< i; j++)
        {
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime==1){
            g[count]=i;
            count++;
        }
    }
    if(count){
        printf("Primes between %d and %d is: ",x,y);
        for(i=0;i<count;i++){
            printf("%d ",g[i]);
        }
    }
    else{
        printf("Primes Not found.....");
    }
}