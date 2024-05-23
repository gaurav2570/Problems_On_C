#include<stdio.h>

int main()
{
    int const a = 5;
    int b;
    int c;

    printf("Enter the 2nd Value :");
    scanf("%d",&b);

    c = a+b;
    printf("Addition is : %d",c);

    return 0;
}