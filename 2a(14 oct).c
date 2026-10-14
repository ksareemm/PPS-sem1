#include<stdio.h>
void main()
{
    int n,i,m=1,f,j,sign=1;
    float xdeg,s=0,xrad,p;
    printf("enter number of steps");
    scanf("%d",&n);
    printf("enter angle valuES");
    scanf("%f",&xdeg);
    xrad=xdeg*3.14159/180;
    p=xrad;
    for(i=1;i<=n;i++)
    {
        s=s+sign*p;
        m=m+2;
        p=p*xrad*xrad/((m-1)*m);
        sign=-sign;
    }
    printf("sin(%f)=%f",xdeg,s);
}


