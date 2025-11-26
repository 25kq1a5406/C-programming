#include<stdio.h>
#include<conio.h>
int add(int);
void main()
{
   int n,result;
   clrscr();
   printf("enter n number");
   scanf("%d",&n);
   result=add(n);
   printf("sum of 1 to n digits is :%d",result);
   getch();
}
  int add(int n)
  {
  int i,s=0;
  for(i=1;i<=n;i++)
  {
  s=s+i;
  }
  return s;
}
