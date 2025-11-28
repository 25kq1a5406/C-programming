#include<stdio.h>
#include<conio.h>
void main()
{
 int a,*b;
 a=10;
 b=&a;
 printf("%d",a);
 printf("\n%d",&a);
 printf("\n%d",b);
 printf("\n%d",*b);
} 
