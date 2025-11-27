#include<stdio.h>
#include<conio.h>
int reverse(int);
void main()
{
   int num,rev;
   clrscr();
   printf("enter a number");
   scanf("%d",&num);
   rev=reverse(num);
   printf("reverse number is :%d",rev);
   getch();
}  
   int reverse(int num)
{
   int r,rev=0;
   while(num>0)
   {
   r=num%10;
   rev=rev*10+r;
   num=num/10;
   }
   return rev;
}   
