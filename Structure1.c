#include<stdio.h>

struct Demo
{
    int no;
    float f;
    int x;
    float d;
};
int main()
{
    struct Demo obj1;
    struct Demo obj2;

    obj1.no = 11;
    obj1.f = 10.5;
    obj1.x = 21;
    obj1.d = 20.5;

    obj1.no = 51;
    obj1.f = 50.5;
    obj1.x = 101;
    obj1.d = 60.5;

    printf("Size of structure object1 is : %d \n",sizeof(obj1));
    printf("Size of structure object variable is : %d \n",sizeof(obj1.no));
    printf("Size of structure object1 is : %d \n",sizeof(obj2));

    return 0;
}