#include <stdio.h>
void reverse_fun(int array[],int size){
    int reverse[100],i;
    for(i=0;i<size>0;i++){
        reverse[i]=array[size-i-1];
    }
    printf("after reversing: ");
    for(i=0;i<size>0;i++){
        printf("%d ",reverse[i]);fflush(stdout);
    }
}
int main(){

    int array[100],size,i;
    printf("Enter the size of array: ");fflush(stdout);
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("Enter the Element %d: ",i+1);fflush(stdout);
        scanf("%d",&array[i]);
    }
    reverse_fun(array,size);
    return 0;
}