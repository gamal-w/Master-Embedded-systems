#include <stdio.h>

int main(){

    char alpha[27];
    int i;
    char* ptr=alpha;
    for(i=0;i<26;i++){
        *ptr=i+'A';
        ptr++;
    }
    ptr=alpha;
    //print the values
    for(i=0;i<26;i++){
        printf("%c ",*ptr);
        ptr++;
    }

    return 0;
}