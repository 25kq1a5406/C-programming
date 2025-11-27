#include<stdio.h>
#include<stdlib.h>
void main()
{
     int lower,upper;
     void printnum(int,int);
     scanf("%d%d",&lower,&upper);
     printnum(lower,upper);
}
     void printnum(int lower,int upper)
{
    printf("%d ",lower);
    lower++;
    if(lower>upper)
    exit(0);
    printnum(lower,upper);
}  
