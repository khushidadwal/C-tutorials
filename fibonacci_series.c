#include<stdio.h>

int fib_recursive(int num)
{
    if(num==1 || num==2)
    {
        return num-1;
    }
    else{
        return fib_recursive(num-1)+fib_recursive(num-2);
    }
    return 0;
}

int fib_iterative(int num)
{
    int a=0;
    int b=1;
    int sum=0;
    for(int i=0;i<num-1;i++)
    {
       b=a+b;
       a=b-a;
    }

    return a;
}
int main()
{
    int n;
    printf("Enter the index to find fibonacci series: ");
    scanf("%d",&n);
    printf("The value of fibonacci number at position number %d using iterative approach is %d\n",n,fib_iterative(n));
    printf("The value of fibonacci number at position number %d using recursive approach is %d",n,fib_recursive(n));
    return 0;
}
