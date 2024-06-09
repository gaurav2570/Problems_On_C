#include<stdio.h>

int main()
{
    int age = 0;
    printf("Enter your age : \n");
    scanf("%d",&age);

    switch (age)
    {
        case 15 :
        printf("Your name is Nilesh \n");
        break;
        case 20 :
        printf("Your name is Varad \n");
        break;
        case 25 :
        printf("Your name is Ganu \n");
        break;
        default :
        printf("Invalid information");
        break;
    }
    return 0;


}