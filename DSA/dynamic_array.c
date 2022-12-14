# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

void print_array (int *b,int b_size)
{
  for (int i =0 ;i<b_size;i++)
  {
    printf("a[%d]:%d\n",i,b[i]);
  }
}

int* create_array(int length)
{
  int *a = malloc(length * sizeof(int));
  printf("enter %d elements",length);
  for (int i=0; i<length; i++)
  {
    scanf("%d",&a[i]);
  }
  return a;
}

int insert_array_element(int *a,int a_size)
{
  int num,pos,i;
  printf("enter the value to be added:");
  scanf("%d",&num);
  printf("\nenter the position:");
  scanf("%d",&pos);
  int *tmp = NULL;
  printf("%d\n",sizeof(a)/sizeof(a[0]));
  printf("%d\n",a_size);
  if (sizeof(a)== a_size)
  {
  printf("reallocation\n");
  int new_a_size = a_size*2;
  tmp = realloc(a,new_a_size*sizeof(int));
  a=tmp;
  }
  for (i=a_size-1;i>=pos-1;i--)
  {
      a[i+1]=a[i];
  }
  a[pos-1]=num;
  a_size++;
  return *a;
  return a_size;
}


int main()
{
  int a_size;
  printf("enter the size of the array:");
  scanf("%d",&a_size);
  int *a = create_array(a_size);
  print_array(a,a_size);
  printf("inserting a new element\n");
  insert_array_element(a,a_size);
  print_array(a,a_size);
  return 0;
}
