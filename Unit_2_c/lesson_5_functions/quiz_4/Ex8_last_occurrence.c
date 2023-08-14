#include <stdio.h>

int last_occurrence(int arr[],int size){
    int num,i;
    printf("Enter the the number to get its last occurrence: ");fflush(stdout);
    scanf("%d",&num);
    for(i=size-1;i>=0;i){
        if(arr[i]==num)
        return i+1;
        else return -1;
    }
}

int main(){
    int numbers[100],size,i,flag;
    printf("Enter the size: ");fflush(stdout);
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("Enter the element %d: ",i+1);fflush(stdout);
        scanf("%d",&numbers[i]);
    }
    flag=last_occurrence(numbers,size);
    printf("last occurrence is: %d",flag);
    return 0;
}