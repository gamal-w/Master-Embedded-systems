#include<stdio.h>

#define Pi 3.14
#define area(r) (Pi*r*r)

int main(){

    float r;
    printf("Enter the radius: ");
    scanf("%f",&r);
    printf("the area is : %.2f",area(r));
    return 0;
}