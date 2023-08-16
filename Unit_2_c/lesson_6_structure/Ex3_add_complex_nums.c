#include <stdio.h>


struct complex
{
    float real;
    float im;
};


int main(){
    setbuf(stdout,NULL);
    
    struct complex d1,d2,sum;
    printf("Enter the 1st number:\n");
    printf("Enter real: ");
    scanf("%f",&d1.real);
    printf("Enter imaginary: ");
    scanf("%f",&d1.im);
    printf("Enter the 2st number:\n");
    printf("Enter real: ");
    scanf("%f",&d2.real);
    printf("Enter imaginary: ");
    scanf("%f",&d2.im);

    sum.real=d1.real+d2.real;
    sum.im=d1.im+d2.im;
    printf("sum of numbers is: %.1f+%.1fi",sum.real,sum.im);    
    return 0;
}