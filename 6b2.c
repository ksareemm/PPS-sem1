#include<stdio.h>
int factorial(int n);
void main()
{
    int n,f;
    printf("enter your number:");
    scanf("d",&n);
    s=sum(f);
    printf("factorial=%d",&f);
}

    int factorial(int n)
    {
        if (n==0 || n==1)
          return 1;
      else
      return n*factorial(n-1);
    }

