#include <stdio.h>


void is_prime(int n,int m){
    int i,j,arr[100],flag,count=0;
    for(i=n;i<=m;i++){
        flag=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            arr[count]=i;
            count++;
        }
    }

    printf("primes number between %d and %d is: ",n,m);
    for(i=0;i<count;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    setbuf(stdout,NULL);
    int n,m;
    printf("Enter the raneg:\n");
    scanf("%d %d",&n,&m);
    is_prime(n,m);

    return 0;
}