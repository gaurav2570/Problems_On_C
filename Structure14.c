#include<stdio.h>

struct Demo
{
    int id_no;
    char name[10];
    int salary;
};
int main()
{
    struct Demo e[3];
    int i =0;

    for(i=1;i<=3;i++)
    {
        printf("\nEmpolyee id No : \n");
        scanf("%d",&e[i].id_no);
        printf("Empolyee Name : \n");
        scanf("%s",&e[i].name);
        printf("Empolyee salary : \n");
        scanf("%d",&e[i].salary);
    }
    printf("\nDetails of employee");

    for(i=1;i<=3;i++)
    {
        printf("\nID NO : %d \n Employee Name : %s \n Emplyee Salary : %d",e[i].id_no,e[i].name,e[i].salary);
    }
    return 0;
}