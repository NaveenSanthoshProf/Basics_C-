#include <stdio.h>
#include<stdlib.h>

int g=25;

void Num_print()
{
  printf("globalnew = %d\n",g);

}

int main()
{
  int g=10;
  printf("global = %d\n",g);
  Num_print();
}
