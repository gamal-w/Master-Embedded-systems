#include <stdio.h>

int main(){
    int var=70;
    printf("the address of variable is %x and the value is %d\n",&var,var);fflush(stdout);
    int *ptr=&var;
    printf("the address of pointer is %x and the value is %d \n",ptr,*ptr);fflush(stdout);
    var=100;
    printf("the value of variable assigned to 100 now\n");
    printf("the address of pointer is %x and the value is %d \n",ptr,*ptr);fflush(stdout);
    *ptr=120;
    printf("the value of pointer assigned to 120 now\n");
    printf("the address of variable is %x and the value is %d\n",&var,var);fflush(stdout);


    return 0;
}