#include<conio.h>
void add(int,int,int);
void main()
{
  int i,n,c=0;
  clrscr();
  printf("enter n number");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
   {
   if(n%i==0)
    {
   c++;
    }
   }       
  add(i,n,c);
  printf(" %d",n);
  }
  void add(int i,int n,int c)
  {
  if(c==2)
     {
       printf("the given number is prime");
     }
    else
      {
        printf("the given number is not prime");
      }
  }
  
