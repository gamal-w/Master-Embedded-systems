#include "stdio.h"
#include "string.h"
void reverse_string();
int main(){
    printf("Enter string : ");
    reverse_string();
    return 0;
}

void reverse_string(){
    char c;
    scanf("%c",&c);
    if(c!='\n'){
        reverse_string(c);
        printf("%c",c);
    }
}