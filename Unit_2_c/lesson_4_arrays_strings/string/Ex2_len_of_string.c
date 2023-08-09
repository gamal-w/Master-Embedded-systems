# include "stdio.h"
#include "string.h"
/**
 * 
 * this program to count the freq of char in string
 * 
*/
int main(void){
    char string[1000];
    printf("Enter a string: ");
    gets(string);
    int i,count=0;
    for(i=0;i<strlen(string);i++){
        if(string[i]=!0){
            count++;
        }
    }
    printf("Length of string is: %d",count);

    return 0;
}