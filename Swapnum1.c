#include<stdio.h>

int main()
{
    int x,y,z,d;

    printf("Enter the Number in x : \n");
    scanf("%d",&x);
    printf("Enter the Number in y: \n");
    scanf("%d",&y);
    printf("Enter the Number in z: \n");
    scanf("%d",&z);

    printf("Number before swap in x : %d \n",x);
    printf("Number before swap in y : %d \n",y);
    printf("Number before swap in z : %d \n \n",z);
    d=x;
    x=y;
    y=z;
    z=d;

    printf("Number after swap in x : %d \n",x);
    printf("Number after swap in y : %d \n",y);
    printf("Number after swap in z : %d \n",z);

    return 0;
}