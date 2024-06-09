//Accept number for user check whether that number is even or odd

#include<stdio.h>

int main()
{
    int a= 0;
    int b= 0;

    printf("Enter the Number : \t");
    scanf("%d",&a);

    b=a%2;

    if(b == 0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd ");
    }

    return 0;
}