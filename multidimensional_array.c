#include<stdio.h>
#include<stdlib.h>

int main()
{
  int multi_array [2] [3]={{1,2,3},{5,6,7}};
  for(int i =0;i<2;i++)
  {
    for(int j =0;j<3;j++)
    {
        printf("multi_array[%d][%d]=%d\n",i,j,multi_array[i][j]);
    }
  }
}
