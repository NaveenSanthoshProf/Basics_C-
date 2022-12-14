#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main()
{
  char my_string[6]={'H','e','l','l','o','\0'};
  char other_string[]="helloagain";
  char copy_string[12];
  printf("my string value=%s\n",my_string);
  printf("my other string value=%s\n",other_string);

  strcpy(copy_string,other_string);
  strcat(my_string,other_string);

  printf("my copied string value=%s\n",copy_string);
  printf("my concated string value=%s\n",my_string);
}
