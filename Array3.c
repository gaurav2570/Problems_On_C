#include<stdio.h>

int main()
{

    int Arr[5] = {10,20,30,40,50}; //member initialization
    int Brr[] = {10,20,30,40,50};
    int Crr[7] = {10,20,30};

    int Drr[3]; // member by member initialization
    Drr[0] = 10;
    Drr[1] = 20;
    Drr[2] = 30;

    int Err[4] = {10,20,30,40};
    const int Frr[4] = {10,20,30,40};

    Err[1] = 21; //Allowed
    //Brr[1] = 21; Not Alowed

    Arr[2]++;   //Allowed
    //Brr[2]++;   Not Alowed

    printf("%d %d %d %d %d \n",Arr[0],Arr[1],Arr[2],Arr[3],Arr[4]);
    printf("%d %d %d %d %d \n",Brr[0],Brr[1],Brr[2],Brr[3],Brr[4]);
    printf("%d %d %d \n",Crr[0],Crr[1],Crr[2]);
    printf("%d %d %d \n",Drr[0],Drr[1],Drr[2]);
    printf("%d \n",Err[1]);
    printf("%d \n",Arr[2]);
    
    return 0;

}