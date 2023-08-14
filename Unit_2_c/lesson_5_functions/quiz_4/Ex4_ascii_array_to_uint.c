#include <stdio.h>

#include<string.h>

int convert(char num[],int size){
    int i,number=0;
    for(i=0;i<size;i++){
        if(num[i]!='\0'){
            number=number*10+(num[i]-'0');
        }
    }
    return number;
}


int main(){
    char numbers[100];
    printf("Enter the digits: ");
    gets(numbers);
    int size =strlen(numbers);
    printf("you enter the num : %d",convert(numbers,size));

    return 0;
}