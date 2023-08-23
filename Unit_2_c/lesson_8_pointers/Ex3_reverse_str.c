#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    printf("input string: ");fflush(stdout);fflush(stdin);
    scanf("%s",str);
    int len=strlen(str);
    char *ptr=(str+len-1);
    while(len--){
        printf("%c",*ptr);
        ptr--;
    }


    return 0;
}