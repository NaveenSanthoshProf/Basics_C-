#include <stdio.h>
#include <stdlib.h>

int average()
{
  int i;
  int a=0;
  int total=0;
  int marks[99];
  float average;
  printf("Input marks:\n");
  for(i=0;;i++)
  {
    scanf("%d",&marks[i]);
    if (marks[i]<=0)
    {
      break;
    }
    a++;
    total += marks[i];
  }
  printf("total marks = %d\n",total);
  average=(float)total/(float)a;
  printf("total marks = %f\n",average);
}


int value_s()
{
float s=0;
int i;
for (i=1;i<=50;i++)
{
  s+=(float)1/i;
}
printf("%.2f\n",s);
}

int divisor(int n)
{
  int i;
  for(i=1;i<=n;i++)
  {
    if (n%i==0)
    {
      printf("%d\n",i);
    }
  }
  return 0;
}

int triple_array()
{
  int i;
  int array[6];
  printf("enter number\n");
  scanf("%d",&array[0]);
  for (i=1;i<=6;i++)
  {
    array[i]=3*array[i-1];
  }
  printf("%d\n",array[0]);
  printf("%d\n",array[1]);
  printf("%d\n",array[2]);
  printf("%d\n",array[3]);
  printf("%d\n",array[4]);
  printf("%d\n",array[5]);
  printf("%d\n",array[6]);
}

int small_number()
{
  int smallest,pos;
  int i,j;
  int arra[5];
  printf("enter the numbers:");
  for(i=0;i<=5;i++)
  {
    scanf("%d",&arra[i]);
  }
  smallest=arra[0];
  printf("trial%d\n",smallest);
  for(j=0;j<=5;j++)
  {
    if (smallest>arra[j])
    {
      smallest=arra[j];
      pos=j+1;
    }
  }
  printf("smallest value : %d\n",smallest);
  printf("position: %d\n",pos);
}
int enumeration()
{
  enum week{sun,mon,tue,wed,thus,fri,sat};
  printf("%d\n",sun);
}

int main()
{
  /*average();
  value_s();
  value_cons_s();
  divisor(45);
  triple_array();
  small_number();*/
  enumeration();
}
