#include <stdio.h>
int clear_bit(int num,int bit){
    num &=~(1<<bit);

    return  num;
}
int main(){
    int num,bit;
    printf("Enter the number: ");fflush(stdout);
    scanf("%d",&num);
    printf("Enter the position of the bit: ");fflush(stdout);
    scanf("%d",&bit);
    num=clear_bit(num,bit);
    printf("the number after clear the bit is : %d",num);
    return 0;
}