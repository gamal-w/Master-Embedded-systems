#include <stdio.h>

int main(){
    
    int arr[15],size,i ;
    int*ptr=arr;
    printf("Enter the size of array [max is 15] : ");fflush(stdout);fflush(stdin);
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("Enter element %d: ",i+1);fflush(stdout);fflush(stdin);
        scanf("%d",ptr);ptr++;
    }
    ptr--;
    for(i=size;i>0;i--){
        printf("element %d is : %d\n",i,*ptr);fflush(stdout);fflush(stdin);
        ptr--;
    }

    
    return 0;
}