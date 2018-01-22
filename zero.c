#include<stdio.h>
void main()
{
int n;
printf("\n enter the number");
scanf("%d",&n);
if(n==0)
{
printf("\n the number is zero");
}
else
{ 
if(n<0)
printf("\n the number is negative");
else
printf("\n the number is positive");
}
getch();
}
