#include <stdio.h> 

int max_ones_btw_two_zeros(int n){
    int max_ones=0,found_zero=0,curent_ones=0;
    while(n>0){
        if(n&1){
            if(found_zero){
                curent_ones++;
                if(curent_ones>max_ones){
                    max_ones=curent_ones;
                }

            }
        }
        else{
            found_zero=1;
            curent_ones=0;
        }
        n>>=1;
    }
    return max_ones;
}

int main(){
    int num;
    setbuf(stdout,NULL);
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("the max ones of between two zeros in the number %d is: %d",num,max_ones_btw_two_zeros(num));

    return 0;
}