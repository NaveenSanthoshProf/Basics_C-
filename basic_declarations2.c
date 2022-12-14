#include<stdio.h>
#include<stdlib.h>

int area_rectangle(int l,int h)
{
  int area;
  area=l*h;
  return area;
}

int perimeter(int l, int h)
{
  int permtr=(2*l)+(2*h);
  return permtr;
}

int year_converter()
{
  int days;
  int weeks;
  int years;
  printf("Input the number of days:");
  scanf("%d",&days);
  years = days/365;
  days= days-((years*365)+(weeks*7));
  weeks = (days%365)/7;
  printf("years %d\n",years);
  printf("weeks %d\n",weeks);
  printf("days %d\n",days);
}

int sum()
{
  int x,y;
  printf("Input the 1st number:");
  scanf("%d",&x);
  printf("Input the 2ndnumber:");
  scanf("%d",&y);
  int sum;
  sum=x+y;
  printf("the sum is %d:",sum);
}

int max(int x,int y,int z)
{
  int result;
  int maximum;
  result=(x+y+abs(x-y))/2;
  maximum=(result+z+abs(result-z))/2;
  printf("the max is %d\n",maximum);
}

int distance_points()
{
  float x1,x2,y1,y2;
  float distance;
  printf("Input the x1:");
  scanf("%f",&x1);
  printf("Input the x2:");
  scanf("%f",&x2);
  printf("Input the y1:");
  scanf("%f",&y1);
  printf("Input the y2:");
  scanf("%f",&y2);
  distance = ((x2-x2)*2+(y2-y1)*2);
  printf("%f",distance);
}

int sum_odd()
{
  int i;
  int numbers[5];
  int sum=0;
  printf("enter the first number:");
  scanf("%d",&numbers[0]);
  printf("enter the second number:");
  scanf("%d",&numbers[1]);
  printf("enter the third number:");
  scanf("%d",&numbers[2]);
  printf("enter the fourth number:");
  scanf("%d",&numbers[3]);
  printf("enter the fifth number:");
  scanf("%d",&numbers[4]);

  for (i=0;i<5;i++)
  {
    if (numbers[i]%2 != 0)
    {
      sum+=numbers[i];
    }
  }
  printf("%d",sum);
}


int main()
{
  char m='M';
  char x='X';
  char l='L';
  int area_calculated;
  int permtr_calculated;
  int years;
  int weeks;
  int days;
  printf("The reverse of %c%c%c is %c%c%c\n",x,m,l,l,m,x);

  area_calculated=area_rectangle(7,5);
  printf("the area of the rectangle is %d\n",area_calculated);
  permtr_calculated=perimeter(7,5);
  printf("the perimeter of the rectangle is %d\n",permtr_calculated);

  /*sum();
  year_converter();
  max(25,35,15);
  /*distance_points();*/
  sum_odd();
  return 0;
}
