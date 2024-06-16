#include<stdio.h>

int main()
{
    int x = 11;
    const int y = 11; //Read only Variable

    x++;      //Allowed
    x--;      //Allowed
    x = 21;   //Allowed

  //  y++;     //NotAllowed
  //  y--;     //NotAllowed
  //  y = 21;  //NotAllowed

    return 0;
}