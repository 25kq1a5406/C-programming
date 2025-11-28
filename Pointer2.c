#include<stdio.h>
#include<conio.h>
void main()
{
 int *b;
 int a=10;
 printf("%d",a);
 printf("\n%d",&a);
 b=&a;
 printf("\n%d",b);
 b=b+1;
 printf("\n%d",b);
} 
