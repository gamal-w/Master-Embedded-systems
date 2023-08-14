#include <stdio.h>

void reverse(int arr[],int size){
    int i;
    printf("array after reverse is : ");
    for(i=size-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}

int main(){


    int size ,arr[100],i;
    printf("please enter the size: ");fflush(stdout);
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("Enter the element %d : ",i+1);fflush(stdout);
        scanf("%d",&arr[i]);
    }
    printf("the array besore reverse: ");fflush(stdout);
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);fflush(stdout);
    }
    printf("\n");
    reverse(arr,size);

    return 0;
}