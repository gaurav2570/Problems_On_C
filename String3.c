#include<stdio.h>

int main()
{
    char Arr[40];

    printf("Enter your name : ");
    scanf("%[^'\n']s",Arr);

    printf("Your name is : %s",Arr);

    return 0;
}