#include <stdio.h>
/*

swapping two arrays with different size..
*/
int main(){
    int array_1[10],array_2[10],temp[10],i;

    printf("Enter the first array of length 10 .\n");
    fflush(stdout);fflush(stdin);
    for(i=0;i<10;i++){
        scanf("%d",&array_1[i]);
    }

    printf("Enter the second array of length 5 .\n");
    fflush(stdout);fflush(stdin);
    for(i=0;i<5;i++){
        scanf("%d",&array_2[i]);
    }
    //print before swapping
    printf("----------------Before swapping -----------------\n");
    printf("frist array: ");
    for(i=0;i<10;i++){
        printf("%d ",array_1[i]);
    }
    printf("\nsecond array: ");
    for(i=0;i<5;i++){
        printf("%d ",array_2[i]);
    }

    //swapping..
    for(i=0;i<10;i++){
        temp[i]=array_1[i];
        array_1[i]=array_2[i];
        array_2[i]=temp[i];
    }

    //after swapping 
    printf("\n-----------------After swapping-------------------\n");
    printf("first array: ");
    fflush(stdout);fflush(stdin);
    for(i=0;i<5;i++){
        printf("%d ",array_1[i]);
    }

    printf("\nsecond array: ");
    fflush(stdout);fflush(stdin);
    for(i=0;i<10;i++){
        printf("%d ",array_2[i]);
    }
    return 0;
}