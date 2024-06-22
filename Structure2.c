#include<stdio.h>

struct Demo
{
    int no;
    int Arr[3]; //Array declaration 1
    float f;
};
int main()
{
    struct Demo obj;

    obj.no = 10;

    obj.Arr[0] = 20;
    obj.Arr[1] = 30;
    obj.Arr[2] = 40;

    obj.f = 90.90;
    
    printf("Size of obj no is : %d \n",sizeof(obj.no));
    printf("Size of obj no is : %d \n",sizeof(obj.Arr[1]));
    printf("Size of obj no is : %d \n",sizeof(obj.f));

    return 0;
}