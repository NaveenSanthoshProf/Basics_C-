#include<stdio.h>
#include<stdlib.h>

void getvalue(int *pointer)
{
  *pointer=10000;
  return;
}

int main()
{
  int get_val;
  getvalue(&get_val);

  printf("the value of get_val=%d",get_val);
}
