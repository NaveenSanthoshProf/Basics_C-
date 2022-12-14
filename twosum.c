#include<stdio.h>
#include<stdlib.h>

int main()
{
    int array[4]={2, 7, 11, 15};
    int target=9;
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if((array[j]) == target - (array[i]))
            {
              printf("%d\n",j);
              printf("%d\n",i);
            }
        }
    }
}
