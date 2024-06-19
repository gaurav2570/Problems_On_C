#include<stdio.h>

int main()
{
    int Arr[4] = {11,21,51,101};

    printf("Base address of array : %d \n",Arr);

    printf("Base address of first element of array : %d \n",(&Arr[0]));

    printf("Base address of second element : %d \n",(&Arr[1]));

    printf("first element : %d \n",Arr[0]);

    printf("size of whole element : %d \n",sizeof(Arr));

    printf("size of second element of array : %d \n",sizeof(Arr[1]));

    return 0;
}