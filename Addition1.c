#include<stdio.h>

int main()
{
    int a;
    int b;
    int sum;

    printf("Enter the first value : \n");
    scanf("%d",&a);

    printf("Enter the second value : \n");
    scanf("%d",&b);

    sum = a+b;
    printf("Addition of A & B are :%d ",sum);

    return 0;
}