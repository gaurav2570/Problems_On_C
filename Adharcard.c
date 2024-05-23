#include<stdio.h>

int main()
{
    int No1;
    printf("Enter your Password :\n");
    scanf("%d",&No1);

    if(No1 == 1234)
    {
        printf("Your information is :\n ");
        printf("Gaurav Vilas Mahajan \n Plot No - 38 ");
    }
    if (No1 == 1263)
    {
        printf("Your information is :\n ");
        printf("Gaurav Mahajan \n Plot No - 38 ");
    }
    else
    {
        puts("Worng Password");
    }

    return 0;  
}