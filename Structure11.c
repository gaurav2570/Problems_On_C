#include<stdio.h>

#pragma pack(1)
struct Demo
{
    int i;
    char ch;
    float f;
    double d;
};
int main()
{
    struct Demo obj;

    printf("Size of objectis : %lu \n",sizeof(obj));

    return 0;
}