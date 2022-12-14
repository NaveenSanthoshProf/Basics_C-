#include <stdio.h>
#include <stdlib.h>

int main()
{
  int marks;
  printf("input yours marks:");
  scanf("%d",&marks);

  switch (marks)
  {
    case 90:
      printf("highest");
      break;
    case 70:
      printf("passed");
      break;

    default:
      printf("the mark scored is %d",marks);
  }
}
