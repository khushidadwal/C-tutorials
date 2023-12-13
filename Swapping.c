#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
//without using a third variable
void swap2(int *a, int *b){
    *a=(*a)+(*b);
    *b=(*a)-(*b);
    *a=(*a)-(*b);
}
int main()
{
    int a=34,b=7;
    printf("a=%d and b=%d.\n",a,b);
    /*
    printf("After swapping using the temp variable\n");
    swap(&a,&b);
    printf("a=%d and b=%d.",a,b);
    */
    printf("Swapping without using third varible\n");
    swap2(&a,&b);
    printf("a=%d and b=%d.",a,b);
    return 0;
}
