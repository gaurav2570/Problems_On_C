#include<stdio.h>
//Find area of a circle
int main()
{
    float Radius = 0.0f;
    const float pi = 3.14f;
    float Area = 0.0f;

    printf("Enter the size of radius : \n");
    scanf("%f",&Radius);

    Area = pi*Radius*Radius;

    printf("Area of a circle is : %6.2f \n",Area);
    return 0;
}