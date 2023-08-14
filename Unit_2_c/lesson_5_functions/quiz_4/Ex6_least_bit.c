#include <stdio.h>
int least_bit(int num){
    num=num >>3;
    if(num&1){
        return 1;
    }else return 0;
}
int main(){
    int num,bit,c,temp;
    printf("Enter the number: ");fflush(stdout);
    scanf("%d",&num);
    printf("%d in its binary system is: ",num);
    for(c=21;c>=0;c--){
        temp=num>>c;
        if(temp&1) printf("1");
        else printf("0");
    }
    printf("\n");
    num=least_bit(num);
    num?printf("4th least significant bit is: 1\n"):printf("4th least significant bit is: 0\n");
    return 0;
}