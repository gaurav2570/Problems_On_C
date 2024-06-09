#include<stdio.h>

int main()
{
    int a = 0;
    printf("Enter the password :\t");
    scanf("%d",&a);
  

    switch (a)
    {
        case 1234 :
        printf("Your bank balance is : 700000 RS \n");
        break;
        case 1261:
        printf("Your bank balance is : 800000 RS \n");
        break;
        default :
        printf("Your password is worng");
        break;
    }
    return 0;


}