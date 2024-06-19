#include<stdio.h>

int main ()
{
    int x = 11;
    int *y = &x;

    printf("%d \n",x);  //11
    printf("%u \n",&x); // Address in computer 2686780
    printf("%d \n",sizeof(x)); //4
    printf("%d \n",y);  // same &x = 2686780
    printf("%u \n",&y); // compurt address 2686776
    printf("%u \n",sizeof(y)); // 4 (Pointer size is 8 but Old compailer show 4 bytes) 
    printf("%u \n",*(&x)); //11

    return 0;
}