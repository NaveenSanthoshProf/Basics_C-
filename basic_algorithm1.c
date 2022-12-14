#include <stdio.h>
#include <stdlib.h>


int first(int a, int b)
{
  int sum;
  if (a==b)
  {
    sum=3*(a+b);
  }
  else
  {
    sum=(a+b);
  }
  return sum;
}

int third(int a, int b)
{
  return a==30||b==30||(a+b==30);
}


int fourth(int a)
{
  return abs(a-100)<=10||abs(a-200)<=10;
}

int main()
{
  /*printf("%d\n",first(1,2));
  printf("%d\n",first(2,2));
  printf("%d\n",third(25,5));
  printf("%d\n",third(20,30));
  printf("%d\n",third(20,25));
  printf("%d\n",fourth(103));
  printf("%d\n",fourth(90));
  printf("%d\n",fourth(89));*/
  printf("%d\n",2%10);

}
