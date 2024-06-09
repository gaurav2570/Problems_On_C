//Find average of three number

#include<stdio.h>

int main()
{
    float a= 0,b= 0,c= 0,avg= 0;
    printf("Enter three numbers : \t\n");
    scanf("%f \n %f \n %f",&a,&b,&c);

    avg= (a+b+c)/3;
    printf("Average of numbers is : %6.2f \t",avg);

    return 0;

}