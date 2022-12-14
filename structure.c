#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
  char name[20];
  int id;
  float percentage;
};


int main()
{
  struct student record1;

  record1.id = 047;
  strcpy(record1.name,"Naveen");
  record1.percentage=99.99;

  printf("the id is  %d\n",record1.id);
  printf("the name is  %s\n",record1.name);
  printf("the percentage is  %f\n",record1.percentage);

  return 0;
}
