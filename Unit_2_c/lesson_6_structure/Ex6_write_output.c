#include <stdio.h>

//#pragma pack(1)
union job
{
    char name[32];
    float salary;
    int work_no;
};
struct job2
{
    char name[32];
    float salary;
    int work_no;
};
int main(){
    union job u1;
    struct job2 u2;
    printf("%d %d",sizeof(u1),sizeof(u2));

    return 0;
}
