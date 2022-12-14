#include <stdio.h>
#include<stdlib.h>

int main()
{
  int val_array[3]={10,20,30};
  int *pointer_a[3];

  for (int i = 0;i<3;i++)
  {
    pointer_a[i] = &val_array[i];
  }
  for (int i = 0;i<3;i++)
  {
    printf("value of the val_array[%d]=%d\n",i,*pointer_a[i]);
  }


}
