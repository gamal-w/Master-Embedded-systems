#include <stdio.h>
#include <string.h>
int main(){

    char username[100], userinput[100];
    printf("Enter the string: ");
    fflush(stdout);fflush(stdin);
    gets(username);
    printf("Enter the user name: ");
    fflush(stdout);fflush(stdin);
    gets(userinput);
    if(!stricmp(username,userinput)){
        printf("Identical.");
    }
    else printf("Different.");
    return 0;
}