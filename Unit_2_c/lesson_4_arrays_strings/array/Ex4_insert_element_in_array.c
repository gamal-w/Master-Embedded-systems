# include "stdio.h"

/**
 * 
 * this program to insert element in arrayarray
 * 
*/
int main(void){
    int n;
    printf("Enter the numebr of Elements: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&n);
    int nums[n],ins,pos;
    printf("Enter the Elements: ");
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    printf("Enter the number to be inserted: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&ins);
    printf("Enter the position: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&pos);
    int newArr[n+1];
    for(i=0;i<n;i++){
        if(i==pos-1){
            newArr[i]=ins;
            break;
        }else{
        newArr[i]=nums[i];
        }
    }
    for(i=pos-1;i<n;i++){
        newArr[i+1]=nums[i];
    }
    for(i=0;i<n+1;i++){
        printf("%d ",newArr[i]);
    }
    
    return 0;
}