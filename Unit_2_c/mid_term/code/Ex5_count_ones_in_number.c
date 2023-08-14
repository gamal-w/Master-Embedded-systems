#include <stdio.h>


int ones_of_binary(int n){
    int count=0,i,array[64]={0};
    for(i=0;n!=0,i<64;n/=2,i++){
        array[i]=n%2;
    }
    for(i=0;i<64;i++){
        if(array[i]==1){
            count++;
        }
    }
    return count;
}
int main(){
    setbuf(stdout,NULL);
    int number;
    printf("Enter the number:");

    scanf("%d",&number);
    printf("Then ones in %d is : %d ",number,ones_of_binary(number));

    return 0;
}