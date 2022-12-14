#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a =10;
    int *pointer_p;
    pointer_p = &a;

    printf("address of a=%x\n",&a);
    printf("address of pointer=%x\n",pointer_p);
    printf("value of pointer=%d\n",*pointer_p);

}
