#include<stdio.h>

int main()
{
    char ch = 'A';
    int  i = 11;
    float f = 90.99f;
    double d = 90.88;

    char *cp = &ch;
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;

    printf("%c\n%d\n%f\n%f\n\n",*cp,*ip,*fp,*dp);

    void *vp = NULL;
    vp = &ch;
    printf("%c\n",*(char *)vp); //A
    vp = &i;
    printf("%d\n",*(int *)vp);  //11
    vp = &f;
    printf("%f\n",*(float *)vp);  //90.99f
    vp = &d;
    printf("%f\n",*(double *)vp); // 90.88

    return 0;
}
