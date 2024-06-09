// Accepts your age in years and convert into equivalent number of second

#include<stdio.h.>

int main()
{
    int age= 0;
    float age_in_sec= 0;
    printf("Enter the age in years : \n");
    scanf("%d",&age);

    age_in_sec= (365.2525*24*60*60)*age;
    printf("Your age in second is : %6.2f sec",age_in_sec);

    return 0;
}