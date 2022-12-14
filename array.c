#include<stdio.h>
#include<stdlib.h>

int main()
{
  int My_array [5] = {10,20,30,40,50};

  int x =My_array[1];
  printf("the value is %d\n",x);

  My_array[2]=100;

  for(int i=0;i<6;i++)
  {
    printf("element[%d]=%d\n",i,My_array[i]);
  }


}
