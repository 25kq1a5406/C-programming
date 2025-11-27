#include<stdio.h>
#include<stdlib.h>
int i=1;
int main()
{
     int printnum();
     printnum();
     printf("final i value is:%d",i);
}
int printnum()
{
    printf("%d ",i++);
    if(i==6)
    return 0;
    printnum();
}
