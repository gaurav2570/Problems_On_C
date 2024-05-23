#include<stdio.h>

int main()
{
    int x,y,c;

    printf("Enter the Number in x : \n");
    scanf("%d",&x);
    printf("Enter the Number in y: \n");
    scanf("%d",&y);
    printf("Number before swap in x : %d \n",x);
    printf("Number before swap in y : %d \n",y);
    c=x;
    x=y;
    y=c;

    printf("Number after swap in x : %d \n",x);
    printf("Number after swap in y : %d \n",y);

    return 0;
}