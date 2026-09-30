#include<stdio.h>
void main()
{
    int m,n,i;
    printf("enter two numbers:\n");
    scanf("%d %d",&m,&n);
    i=m;
    do
    {
        if(i%2!=0)
        printf("%d\n",i);
        i++;
    }while(i<=n);
}
