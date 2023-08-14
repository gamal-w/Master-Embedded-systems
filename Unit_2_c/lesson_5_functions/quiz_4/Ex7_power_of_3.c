#include <stdio.h>
#include<math.h>
int power_of_3(int n){

    //math way..
    double power=log(n)/log(3);
    return (power-(int)power)==0;
}

int power_way2(int n){
    if(n<=0){
        return -1;
    }
    while (n%3==0)
    {
        n/=3;
    }
    if(n==1)
    return 1;
    else return -1;
}

int power_way3(int n){
    return n>0 && 1162261467%n==0;
}
int main(){

    int num;
    printf("please enter the num: ");fflush(stdout);
    scanf("%d",&num);
    power_way2(num)==1?printf("%d ==> 0\n",num):printf("%d ==> 1\n",num);
    power_of_3(num)?printf("%d ==> 0\n",num):printf("%d ==> 1\n",num);
    power_way3(num)?printf("%d ==> 0",num):printf("%d ==> 1",num);

    return 0;
}