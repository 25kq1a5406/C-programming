#include<stdio.h>
#include<conio.h>
void add(int);
void main()
{
   int n;
   clrscr();
   printf("enter n number");
   scanf("%d",&n);
   add(n);
   printf("%d",n);
} 
   void add(int n)
   {
   if(n%2==0)
   printf("the given number is even");
   else
   printf("the given number is odd");
   }
