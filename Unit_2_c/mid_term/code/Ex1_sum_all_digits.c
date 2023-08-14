#include <stdio.h>

int sum_digits(int n){
    int sum=0;
    while(n!=0){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}
int main(){
    setbuf(stdout,NULL);
    int num;
    printf("Enter th num: ");
    scanf("%d",&num);
    printf("Sum of digits is: %d",sum_digits(num));
    return 0;
}