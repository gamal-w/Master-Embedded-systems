#include <stdio.h>


int reverse_digits(int n){
    int reverse=0;
    while(n!=0){
        reverse=reverse*10+(n%10);
        n/=10;
    }
    return reverse;
}
int main(){
    int num;
    setbuf(stdout,NULL);
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("the reverse of %d is %d",num,reverse_digits(num));
    return 0;
}