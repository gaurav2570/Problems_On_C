#include<stdio.h>

int add(int a, int b)
{
    int c;
    c =a+b;
    return(c);
}
int sub(int a, int b)
{
    int d;
    d =a-b;
    return(d);
}
int div(int a, int b)
{
    int e;
    e =a/b;
    return(e);
}
int main()
{
    int a= 0;
    int b= 0;

    printf("Enter the first value : \n");
    scanf("%d",&a);
    
    printf("Enter the second value : \n");
    scanf("%d",&b);

    int c = add (a,b);
    int d = sub (a,b);
    int e = div (a,b);
    

    printf("Addition is : %d \n",c);
    printf("Sutraction is : %d \n",d);
    printf("Division is : %d \n",e);

    return 0;
}