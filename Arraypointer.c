#include<stdio.h>

int main()
{
    int Arr[5] = {10,20,30,40,50};

    printf("%d\n",Arr);  //Base address
    printf("%d\n",&Arr); //Base address

    printf("%d\n",Arr+1);  //Base address
    printf("%d\n",&Arr+1); //Whole Base address

    printf("%d\n",Arr[3]); // 40
    printf("%d\n",*(Arr+3)); //40
    printf("%d\n",*(3+Arr)); //40
    printf("%d\n",3[Arr]);  //40

    return 0;
}