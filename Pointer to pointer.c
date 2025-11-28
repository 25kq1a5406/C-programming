#include<stdio.h>
#include<conio.h>
void main()
{
 int a,*b,**c;
 a=10;
 b=&a;
 c=&b;
 printf("%d",a);
 printf("\n%d",&a);
 printf("\n%d",b);
 printf("\n%d",*b);
 printf("\n%d",&b);
 printf("\n%d",c);
} 
