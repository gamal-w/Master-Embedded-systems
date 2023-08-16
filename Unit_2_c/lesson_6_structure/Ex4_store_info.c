#include <stdio.h>


struct student_info
{
    char name[50];
    int roll;
    float marks;
};

int main(){
    setbuf(stdout,NULL);
    struct student_info student[10];int i;
    printf("Enter information of students: \n");
    for(i=0;i<10;i++){
        printf("Enter roll number: ");fflush(stdout);fflush(stdin);
        scanf("%d",&student[0].roll);
        printf("Enter name: ");fflush(stdout);fflush(stdin);
        gets(student[0].name);
        printf("Enter marks: ");fflush(stdout);fflush(stdin);
        scanf("%f",&student[0].marks);
        printf("----------------------------\n");
    }


    printf("Displaying Information: \n");
    for(i=0;i<10;i++){
        printf("Information of roll number :%d\nName: %s\nMarks: %.1f\n  \
        -----------------------\n",student[0].roll,student[0].name,student[0].marks);
    }
    return 0;
}