#include<stdio.h>
void main()
{
int deci,hex=0,i=1,rem;
printf("enter number in decimal:");
scanf("%d",&deci);
while(deci!=0)
{
rem=deci%8;
deci=deci/8;
hex=hex+rem*i;
i=i*10;
}
printf("%d",hex);
}
