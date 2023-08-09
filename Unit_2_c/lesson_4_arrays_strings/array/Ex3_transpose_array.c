# include "stdio.h"

/**
 * 
 * this program to find the transpose of array
 * 
*/
int main(void){
    int row,colm;
    printf("Enter the rows: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&row);
    printf("Enter the columns: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&colm);
    float a[row][colm],transpose[colm][row];
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<colm;j++){
            printf("Enter the value array[%d][%d]: ",i,j);
            fflush(stdin);fflush(stdout);
            scanf("%f",&a[i][j]);
        }
    }
    printf("You Entered the array :\n");
    for(i=0;i<row;i++){
        for(j=0;j<colm;j++){
            printf( "%.2f ",a[i][j]);
          transpose[j][i]=a[i][j];
        }
        printf("\n");
    }

     printf("The transpose Array is :\n");
    for(i=0;i<colm;i++){
        for(j=0;j<row;j++){
            printf( "%.2f ",transpose[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}