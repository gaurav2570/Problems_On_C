//Area of triangle

#include<stdio.h>
#include<math.h>

int main()
{
    float a= 0,b= 0,c= 0,s,area;
    printf("Enter the sides of triangle : \t\n");
    scanf("%f \n %f \n %f",&a,&b,&c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of a triangle is : %6.2f sq.units",area);

    return 0;
}