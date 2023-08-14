#include <stdio.h>
#include <math.h>
#include <string.h>

void reverse_words(char string[],int size){
    int i;
    int start=0;
    //reversing all sentense..
    for(i=0;i<size/2;i++ ){
        char temp=string[i];
        string[i]=string[size-i-1];
        string[size-i-1]=temp;
    }
    //printf("%s",string);
    
    //reverse words.
    for(i=0;i<=size;i++){
        if(string[i]==' '|| string[i]=='\0'){
            int end=i-1;
            while(start<end){
                char temp=string[start];
                string[start]=string[end];
                string[end]=temp;
                start++;
                end--;
            }
            start=i+1;
        }
    }
    printf("%s",string);
}


int main(){

    char string[100];
    printf("Enter the string: ");
    gets(string);
    int size=strlen(string);
    reverse_words(string,size);

    return 0;
}