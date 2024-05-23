#include<stdio.h>
int multi (int a, int b)
{
    int c;
    c=a*b;
    return(c);
}
int add (int a, int b)
{
    int c;
    c=a+b;
    return(c);
}
int main()
{
    int x,y;
    x=50;
    y=50;
    int g = multi (x,y);
    int m = add (x,y);

    printf("multi Value is : %d\n",g);
    printf("Addition Value is : %d\n",m);

    return 0;
}