#include <stdio.h>


struct student_info
{
    char name[50];
    int roll;
    float marks;
};

int main(){
    setbuf(stdout,NULL);
    struct student_info student1;
    printf("Enter information of students: \n");
    printf("Enter name: ");
    gets(student1.name);
    printf("Enter roll number: ");
    scanf("%d",&student1.roll);
    printf("Enter marks: ");
    scanf("%f",&student1.marks);
    printf("Displaying Information: \n");
    printf("Name: %s\nRoll: %d\nMarks: %f",student1.name,student1.roll,student1.marks);
    return 0;
}