#include<stdio.h>

int main()
{
    char cArr[4] = {'A','B','C','D'};

    int iArr[4] = {11,21,51,101};

    float fArr[4] = {10.5f,20.5f,30.5f,40.5f};

    double dArr[4] = {11.0,21.0,51.0,101.0};

    printf("%c %c %c %c \n",cArr[0],cArr[1],cArr[2],cArr[3]);
    printf("%d %d %d %d \n",iArr[0],iArr[1],iArr[2],iArr[3]);
    printf("%6.2f %6.2f %6.2f %6.2f \n",fArr[0],fArr[1],fArr[2],fArr[3]);
    printf("%f %f %f %f \n",dArr[0],dArr[1],dArr[2],dArr[3]);

    return 0;

}