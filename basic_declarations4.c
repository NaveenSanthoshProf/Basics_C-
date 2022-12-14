#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int remainder_3(int n)
{
  int i;
  for (i=1;i<101;i++)
  {
    if (i%n==3)
    {
      printf("%d\n",i);
    }
  }
}

int max()
{
  int number[5],i,j,max=0,num_pos=0;
  printf("input 5 numbers:\n");
  for (i=0;i<5;i++)
  {
    scanf("%d",&number[i]);
  }
  for (j=0;j<5;j++)
  {
    if (number[j]>max)
    {
      max=number[j];
      num_pos=j;
    }
  }
  printf("%d\n",max);
  printf("%d\n",num_pos+1);
}

void password_check()
{
  int x=10;
  while (x!=0);
  {
  char password[20]="pass";
  char check_pass[20];
  printf("password:");
  scanf("%s",&check_pass);
  printf("%s %s\n",password,check_pass);
  if(strcmp(password,check_pass)==0)
  {
    printf("correct\n");
    x=0;
  }
  else
  {
    printf("incorect");
  }
  }
}

int div_seven()
{
  int i,x,y;
  printf("enter 1st number:");
  scanf("%d",&x);
  printf("enter 2nd number:");
  scanf("%d",&y);
  for (i=x;i<y;i++)
  {
    if (i%7==2|i%7==3)
    {
      printf("%d\n",i);
    }
  }
}


int print_lines()
{
  int j,n;
  int i=1;
  int x=0;
  printf("input the number of lines:\n");
  scanf("%d",&n);
  for (j=0;j<n;j++)
  {
    while(x<3)
    {
      printf("%d ",i++);
      x++;
    }
    x=0;
    printf("\n" );
    }
    return 0;
}

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
  average= total/a;
  printf("total marks = %f\n",average);
}






int main()
{
  /*int x;
  printf("enter the number:");
  scanf("%d",&x);
  remainder_3(x);
  max();
  password_check();
  div_seven();
  print_lines();*/
  average();

}
