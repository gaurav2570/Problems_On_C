#include<stdio.h>

int main()
{
    int a = 0;
    printf("Enter the password :\t");
    scanf("%d",&a);

    if(a == 1234)
    {
        printf("Your bank balance is : 700000 RS \n");
    }
    else if (a == 1261)
    {
        printf("Your bank balance is : 800000 RS \n");
    }
    else
    {
        printf("Your password is worng");
    }
    return 0;

}