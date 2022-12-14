#include<stdio.h>
#include<stdlib.h>

void My_Function()
{
  printf("sum = %d\n",10+123);
  printf("my first function.\n");
}

void Sum(int a , int b)
{
  int sum=a+b;
  printf("sum is equal to %d\n",sum);
}

int main()
{
  int x,y;
  printf("enter 2 numbers\n");
  printf("number 1\n");
  scanf("%d",&x);
  printf("number 2\n");
  scanf("%d",&y);

  Sum(x,y);
  My_Function();
  Sum(100,10);
  Sum(123,124);
  Sum(-123,-21);
}
