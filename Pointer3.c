#include<stdio.h>
int main ()
{
    int no = 21;  //21
    int *p = &no; // &no Address in computer 
    int *a = &no; //21
    int **q = &p; 
    int **b = &p;
    int ***r = &q;
    int ****x = &r;
    int *****y = &x;

    printf("%d \n",no); //21
    printf("%u \n",&no); //Address in computer
    printf("%u \n",*a); //21
    printf("%u \n",&p); 
    printf("%u \n",**b);
    printf("%u \n",&q);
    printf("%u \n",****x);
    printf("%u \n",*****y);

    return 0;
}