#include<stdio.h>
#include<conio.h>
void main()
{
   int a;
   void printnum(int *);
   a=10;
   printf("\n in main a=%d",a);
   printnum(&a);
   printf("\n in main end a=%d",a);
} 
void printnum(int*a)
{
  *a=*a+1;
  printf("\n in printnum fun a=%d",*a);
}   
