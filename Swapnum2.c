#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter the number : ");
    scanf("%d %d",&a,&b);
    printf("Number before swap : %d \n",a);
    printf("Number before swap : %d \n \n",b);

    b=a+b;
    a=b-a;
    b=b-a;

    printf("Number after swap : %d\n",a);
    printf("Number after swap : %d\n",b);
    
    return 0;
}