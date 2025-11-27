#include<stdio.h>
#include<conio.h>
void digit(int);
void main()
{
   int num;
   clrscr();
   printf("enter a number");
   scanf("%d",&num);
   digit(num);
   getch();
}
     void digit(int num)
{
     int r;
     printf("indiviual digits are:\n");
     while(num>0)
     {
     r=num%10;
     printf("%d\n",r);
     num=num/10;
     }
     
}
