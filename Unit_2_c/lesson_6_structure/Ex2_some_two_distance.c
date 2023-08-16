#include <stdio.h>


struct distance
{
    int feet;
    float inch;
};


int main(){

    setbuf(stdout,NULL);
    
    struct distance d1,d2,sum;
    printf("Enter the 1st distance:\n");
    printf("Enter feet: ");
    scanf("%d",&d1.feet);
    printf("Enter inch: ");
    scanf("%f",&d1.inch);
    printf("Enter the 2st distance:\n");
    printf("Enter feet: ");
    scanf("%d",&d2.feet);
    printf("Enter inch: ");
    scanf("%f",&d2.inch);

    sum.feet=d1.feet+d2.feet;
    sum.inch=d1.inch+d2.inch;
    if(sum.inch>12){
        sum.inch-=12.0;
        ++sum.feet;
    }
    printf("sum of distance is:%d\'%.1f\"",sum.feet,sum.inch);


    return 0;
}