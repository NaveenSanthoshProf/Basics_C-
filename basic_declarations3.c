#include<stdio.h>
#include<stdlib.h>


int months()
{
  int num;
  printf("num=");
  scanf("%d",&num);
  switch (num)
  {
    case 1:printf("january\n");
    break;
    case 2:printf("feb\n");
    break;
    case 3:printf("march\n");
    break;
    case 4:printf("april\n");
    break;
    case 5:printf("may\n");
    break;
    case 6:printf("june\n" );
    break;
    case 7:printf("july\n");
    break;
    case 8:printf("august\n");
    break;
    case 9:printf("sep\n");
    break;
    case 10:printf("oct\n");
    break;
    case 11:printf("nov\n");
    break;
    case 12:printf("dec\n");
    break;
  }
}

int even_numbers()
{
int i;
for (i=1;i<51;i++)
{
  if (i%2 == 0)
  {
      printf("%d  ",i);
  }
}
}

int count_neg()
{
  int i;
  int number[5];
  int negative=0;
  int positive=0;
  printf("input first number");
  scanf("%d",&number[0]);
  printf("input 2 number");
  scanf("%d",&number[1]);
  printf("input 3 number");
  scanf("%d",&number[2]);
  printf("input 4 number");
  scanf("%d",&number[3]);
  printf("input 5 number");
  scanf("%d",&number[4]);

  for (i=0;i<5;i++)
  {
    if (number[i] < 0)
    negative += 1;
    else
    positive+=1;
  }
  printf("negative:%d\n",negative);
  printf("positive:%d\n",positive);

}

int square()
{
  int n,i,sq;
  printf("enter the specified number:\n");
  scanf("%d",&n);
  for (i=0;i<n+1;i++)
  {
    if (i%2 == 0)
    {
    sq=i*i;
    printf("%d\n",sq);
    }
  }
}






int main()
{
  /*months();*/
  /*even_numbers();
  count_neg();*/
  square();

}
