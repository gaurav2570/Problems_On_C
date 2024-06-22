#include<stdio.h>

struct Demo
{
    int i; 
    float f;
};
int main()
{
    struct Demo Arr[3];


    Arr.i[0] = 10;
    Arr.f[0] = 10.5;

    Arr.i[1] = 20;
    Arr.f[1] = 20.5;

    Arr.i[2] = 30;
    Arr.f[2] = 30.5;
    
    return 0;
}