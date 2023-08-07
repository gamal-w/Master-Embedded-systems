#include "stdio.h"
/*
this code to make a simple calc!
*/

int main(){
    char operator;
    printf("Please Enter Operator either + or - or * or / : ");
    fflush(stdin);fflush(stdout);
    scanf("%c",&operator);
    int a,b,res=0;
    printf("Enter two nums:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    switch (operator)
    {
    case '+':
        res=a+b;
        printf("The sum is %d",res);
        break;
    case '-':
        res=a-b;
        printf("The sub is %d",res);
        break;
    case '*':
        res=a*b;
        printf("The mull is %d",res);
        break;
    case '/':
        res=a/b;
        printf("The div is %d",res);
        break;
    }
    
    return 0;
}