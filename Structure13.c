#include<stdio.h>

struct Demo
{
    int id_no;
    char name[10];
    char des [10];
    int salary;
};
int main()
{
    struct Demo employee;

    printf("Empolyee id No : \n");
    scanf("%d",&employee.id_no);
    printf("Empolyee Name : \n");
    scanf("%s",&employee.name);
    printf("Empolyee Designation : \n");
    scanf("%s",&employee.des);
    printf("Empolyee salary : \n");
    scanf("%d",&employee.salary);

    printf("\nDetails of employee \n");
    printf("Employee id : %d \n",employee.id_no);
    printf("Employee Name : %s \n",employee.name);
    printf("Employee Designation : %s \n",employee.des);
    printf("Employee salary %d \n",employee.salary);

    return 0;
}