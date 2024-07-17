#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd = 0;
    char Arr[20];
    int Ret = 0;

    fd = open("Marvellous.txt",O_RDWR);

    Ret = read(fd,Arr,10); //(Kashatun wachayecha,kashat wachayecha,kiti wachayecha)
    printf("Data is : %s\n",Arr);

    close(fd);
    return 0;
}