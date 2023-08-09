# include "stdio.h"

/**
 * 
 * this program to output the sum of two arrays
 * 
*/
int main(void){
    float array1[2][2],array2[2][2];
    int i,j;
    printf("please Enter the values of the first array: \n");
    fflush(stdin);fflush(stdout);
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("enter the element arrar1[%d][%d] of the first array: ",i,j);
            //fflush(stdin);fflush(stdout);
            scanf("%f",&array1[i][j]);
        }
    }
    printf("please Enter the values of the second array: \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("enter the element arrar2[%d][%d] of the second array: ",i,j);
            fflush(stdin);fflush(stdout);
            scanf("%f",&array2[i][j]);
            //now the sum is array one ..
            // to avoid make anthor loop to sum.
            array1[i][j]+=array2[i][j];
        }
    }
    printf("the sum array is\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%.2f ",array1[i][j]);
        }
        printf("\n");
    }

    return 0;
}