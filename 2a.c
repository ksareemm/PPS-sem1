#include<stdio.h>
void main()
{
    float a,b,c,d,D,r1,r2;
    print("enter the value of a,b,c:");
    scanf("%f %f %f",&a,&b,&c)
    D=(b*b-4*a*c);
    if(D<0)
    {
     printf("the roots are imginary")
    }
    else if(D==0)
    {
        r1=-b/a;
        printf("roots are equal");
        printf("%f,&r1")
    }
    else
    {
        r1=(-b+sqrt(D))/2*a
        r2=(-b-sqrt(D))/2*a
        printf("%f %f",&r1,&r2)
    }
}
