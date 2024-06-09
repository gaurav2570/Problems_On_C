#include<stdio.h>
int main()
{
    int standard = 0;

    printf("Primary school portal : \n");
    printf("Enter your standard : \t");
    scanf("%d",&standard);

    if(standard == 1)
    {
        printf("Your exam is at 1 PM \n");
    }
     if(standard == 2)
    {
        printf("Your exam is at 2 PM \n");
    }
     if(standard == 3)
    {
        printf("Your exam is at 3 PM \n");
    }
     if(standard == 4)
    {
        printf("Your exam is at 4 PM \n");
    }
    else
    {
        printf("Invalid standard \n");
    }
    return 0;
}