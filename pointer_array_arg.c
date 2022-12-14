#include<stdio.h>
#include<stdlib.h>

int getsum(int *arr_val,int size)
{
  int sum =0 ;
  for (int i=0;i<size;i++)
  {
    sum += arr_val[i];
  }
  return sum;
}

int main()
{
  int my_array[5]={10,20,30,40,50};
  int mysum=getsum(my_array,5);

  printf("the sum=%d",mysum);

}
