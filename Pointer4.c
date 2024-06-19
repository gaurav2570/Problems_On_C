#include<stdio.h>
int main()
{
    int Arr[5] = {11,21,51,101,111};

    int *p = Arr;

    int *q = &(Arr[4]);

    printf("%u \n",&p); //Address in compuert
    printf("%u \n",*p); //11
    printf("%u \n",&q); //Address in compuert
    printf("%u \n",*q); //111
    printf("%d \n",sizeof(Arr)); //20
    printf("%d \n",sizeof(p)); //4
    return 0;
}