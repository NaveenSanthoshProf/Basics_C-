#include<stdio.h>
#include<stdlib.h>

int Product(int a, int b)
{
  return(a*b);
}



int main()
{
  int x,y;
  printf("enter 2 numbers\n");

  printf("number 1\n");
  scanf("%d",&x);

  printf("number 2\n");
  scanf("%d",&y);

  int prod;
  prod = Product(x,y);

  printf("The product is %d",prod);

}
