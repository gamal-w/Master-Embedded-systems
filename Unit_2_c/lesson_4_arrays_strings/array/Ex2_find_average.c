# include "stdio.h"

/**
 * 
 * this program to output the average of some data
 * 
*/
int main(void){
    int n;
    printf("please Enter the number of data: \n");
    fflush(stdin);fflush(stdout);
    scanf("%d",&n);
    float array[n],sum=0;
    int i;
    for(i=0;i<n;i++){
        printf("Enter Number: ");
        scanf("%f",&array[i]);
        sum+=array[i];
    }
    printf("the average is: %.2f\n",(sum/n));
    return 0;
}