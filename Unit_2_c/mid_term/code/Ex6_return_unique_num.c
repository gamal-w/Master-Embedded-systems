#include <stdio.h>


int unique_element(int arr[],int size){
// this function return one unique value in array 
// if there are more unique values --> the answer will be not correct.
//if the array have number that its occurence is odd it will output wrong too.
    int unique=0,i;
    
    for(i=0;i<size;i++){
        unique^=arr[i];
    }

    return unique;

    //the output of this function true with test cases in the question.. 
}

int unique_element_2(int arr[],int size){
    int unique,i,j;
    for(int i=0;i<size;i++){
        unique=1;
        for(j=0;j<size;j++){
            if(i!=j&&arr[i]==arr[j]){
                unique=0;break;
            }
        }
       if(unique)return arr[i];
    }
    return -1 ;//if there is not a unique number..
}
int main(){
    setbuf(stdout,NULL);
    int arr[100],size,i;
    printf("Enter the size: ");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("the unique number is: %d",unique_element_2(arr,size));

    return 0;
}