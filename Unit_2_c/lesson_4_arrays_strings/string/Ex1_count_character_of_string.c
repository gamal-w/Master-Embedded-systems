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
    printf("Enter a character to find frequancy: ");
    int i,count=0;
    char ch;
    scanf("%c",&ch);
    for(i=0;i<strlen(string);i++){
        if(string[i]==ch){
            count++;
        }
    }
    printf("The Frequency of %c is: %d",ch,count);

    return 0;
}