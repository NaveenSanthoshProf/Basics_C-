#include <stdio.h>



int main()
{
  int i;
  int x,y;
  int arr[6]={12,23,42,10,25,19};
  for(i=0;i<6;i++)
  {
    printf("%d\n",arr[i]);
  }
  for(x=0;x<6;x++)
  {
    int min = x;
    for(y=x+1;y<6;y++)
    {
      if(arr[y]<arr[min])
      {
        min=y;
      }
    }
    if(min!=x)
    {
      int temp=arr[x];
      arr[x]=arr[min];
      arr[min]=temp;
    }
  }
  printf("\n\n\n\n\n\n");
  for(i=0;i<6;i++)
  {
    printf("%d\n",arr[i]);
  }
}
