#include<stdio.h>
#include<stdlib.h>

int Sum_array(int myarray[],int size)
{
  int sum=0;
  for(int i = 0 ; i < size; i++)
  {
      sum+=myarray[i];
  }
    return sum;
}

int main()
{
  int myarray[6]={10,20,30,40,50,60};
  int arraysum = Sum_array(myarray,6);

  printf("my sum = %d\n",arraysum);
}
