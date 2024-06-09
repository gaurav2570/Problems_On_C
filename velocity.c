// The velocity of an object is given in km/hr. convert velocity from km/hr to m/sec.

#include<stdio.h>

int main()
{
    float v_in_K= 0,v_in_M= 0;
    printf("Enter velocity in km/hr : \t");
    scanf("%f",&v_in_K);

    v_in_M= v_in_K*5/18;
    printf("Vlocity in m/hr is : %6.2f",v_in_M);

    return 0;
}