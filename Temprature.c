#include<stdio.h>

//Convert tempearature in fahrenheit to celsius

int main()
{
    float f= 0,c= 0;
    printf("Enter temperature in fahrenheit : \n");
    scanf("%f",&f);

    c = (f-32)*5/9;
    printf("Temprature in Celsius %6.2f",c);

    return 0;
}