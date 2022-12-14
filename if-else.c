#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("please enter the age:");
    scanf("%d",&age);
    if(age >= 15)
    {
      printf("The age more.");
      if (age/15 == 1)
      {
        printf("it works");
      }
      else
      {
        printf("it is working");
      }
    }
    else if(age == 16)
    {
      printf("random");
    }
    else
    {
      printf("printing age");
    }

}
