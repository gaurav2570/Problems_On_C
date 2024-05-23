#include<stdio.h>

int main()
{
    printf("Character takes %d bytes in memory \n",sizeof(char));
    printf("Integer takes %d bytes in memory \n",sizeof(int));
    printf("Float takes %d bytes in memory \n",sizeof(float));
    printf("Long takes %d bytes in memory \n",sizeof(long));
    printf("Double takes %d bytes in memory \n",sizeof(double));

    return 0;
}