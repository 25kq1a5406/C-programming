#include<stdio.h>
#include<conio.h>
void main()
{
     register int mainvar;
     void printnum();
     mainvar=10;
     printf("\n in main:%d",mainvar);
}
void printnum()
{
   int mainvar;
   printf("%d ",mainvar);
}
