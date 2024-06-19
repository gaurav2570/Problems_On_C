#include<stdio.h>

int main()
{
    int Arr[3][3] = {11,21,51,10,20,30,40,50,60}; //2D Array Member initialisation

    Arr[0][0] = 11;  // 2D member by Member initialisation
    Arr[0][1] = 21;
    Arr[0][2] = 51;

    Arr[1][0] = 10;
    Arr[1][1] = 20;
    Arr[1][2] = 30;

    Arr[2][0] = 40;
    Arr[2][1] = 50;
    Arr[2][2] = 60;

    printf("%d %d %d",Arr[0][0],Arr[0][1],Arr[0][2]);

    return 0;
}