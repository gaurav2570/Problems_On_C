#include<stdio.h>
int main()
{
    int a =0;
    int b =0;
    printf("Enter the marks :\t");
    scanf("%d",&a);

    if (a>=275)
    {
        printf("\nYour first %c\n\n",1);
        printf("Enter your attandance :\t");
        scanf("%d",&b);
        if (b>=25)
        {
            printf("\nYour passed exam %c \n",1);
        }
        else
        {
            printf("\nSorry your attandance is low you fail \n");
        }       
    }
    else if (a>=250)
    {
        printf("\nYour second %c \n\n",1);
        printf("Enter your attandance :\t\n");
        scanf("%d",&b);
        if (b>=25)
        {
            printf("\nYou passed exam %c \n",1);
        }
        else
        {
            printf("\nSorry your attandance is low you fail");
        }       
    }
    else 
    {
        printf("\nYour marks is low you fail");
    }
    return 0;
}