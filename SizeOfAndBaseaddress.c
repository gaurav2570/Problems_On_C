#include<stdio.h>

int main()
{
   
    char ch= 'A';
    int i = 20;
    float f = 12.31f;
    double d = 89.90;

    printf("Size of Character is : %d Bytes\n",sizeof(char));
    printf("Size of integar is : %d Bytes\n",sizeof(i));
    printf("Size of float is : %d Bytes\n",sizeof(f));
    printf("Size of Double is : %d Bytes\n\n",sizeof(d));

    printf("Base address of Character is : %u \n",&ch);
    printf("Base address of integar is : %u \n",&i);
    printf("Base address of float is : %u \n",&f);
    printf("Base address of Double is : %u\n",&d);
   
   return 0;
}