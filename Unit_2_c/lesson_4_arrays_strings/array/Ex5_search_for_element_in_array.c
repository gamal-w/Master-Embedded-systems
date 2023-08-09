# include "stdio.h"

/**
 * 
 * this program to search for element in arrayarray
 * 
*/
int main(void){
    int n;
    printf("Enter the numebr of Elements: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&n);
    int nums[n],num;
    printf("Enter the Elements: \n");
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    printf("Enter the number to be searched: \n");
    fflush(stdin);fflush(stdout);
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(nums[i]==num){
            printf("Number found at location: %d",i+1);
            return 0;
        }
    }
    printf("The number Not found...");
    return 0;
}