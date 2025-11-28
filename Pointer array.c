#include<stdio.h>
#include<conio.h>
void main()
{
 int a[3]={10,20,30};
 int i;
 int *ptr;
 ptr=a;
 for(i=0;i<=2;i++)
 printf("\n%d",*ptr++);
} 
