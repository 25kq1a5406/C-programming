#include<stdio.h>
int main()
{
int a,b,c,big;
printf("enter the values of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is big number");
}
else if(b>a&&b>c)
{
printf("b is big number");
}
else if(c>a&&c>b)
{
printf("c is big number");
}
else
{
printf("%d",big);
}
return 0;
}
