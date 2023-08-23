#include <stdio.h>

typedef struct Employee{
    char* name;
    int id;

}Employee;

int main(){
    Employee emp1={"Alex",1002},emp2={"gamal",2003},emp3={"mona",1997};
    Employee *arr[]={&emp1,&emp2,&emp3};
    Employee (*(*ptr)[3])=&arr;

    printf("Employee name is :  %s\n",(*(*ptr+1))->name);
    printf("Employee id is : %d \n",(**(*ptr+1)).id);

    return 0;
}