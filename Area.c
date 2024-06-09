#include<stdio.h>

//Find the area and circumference of a circule with radius r

int main()
{
    float r=0,cir=0,area=0;
    printf("Enter the radius of circle : \t");
    scanf("%f",&r);

    cir= 2*22.0/7*r;
    area= 22.0/7*r*r;

    printf("Circumference of a circle is : %f \t\n",cir);
    printf("Area of a circle is : %f \t",area);

    return 0;
}