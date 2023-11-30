#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a=34,b=7;
    printf("a=%d and b=%d.\n",a,b);
    printf("After swapping.\n");
    swap(&a,&b);
    printf("a=%d and b=%d.",a,b);
    return 0;
}
