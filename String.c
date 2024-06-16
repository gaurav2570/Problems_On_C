#include<stdio.h>

int main()
{
    char ch [10];
    int Count = 0;
    int i = 1;

    printf("Enter the words you want display on screen \n");
    scanf("%s",&ch);

    printf("Enter How many times you want display on screen \n");
    scanf("%d",&Count);

    for(i=1; i <= Count ; i++)
    {
        printf("%s \n",ch);
    }

    return 0;
}