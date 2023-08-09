# include "stdio.h"
#include "string.h"
/**
 * 
 * this program to count the freq of char in string
 * 
*/
int main(void){
    char string[1000],string2[1000];
    printf("Enter a string: ");
    fflush(stdin);fflush(stdout);
    gets(string);
    int i,j,count=strlen(string);
    for(i=count-1,j=0;i>=0;i--,j++){
        string2[j]=string[i];
    }
    printf("Reverse string is: %s",string2);

    return 0;
}