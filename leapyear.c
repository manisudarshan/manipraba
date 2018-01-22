#include<stdio.h>
void main()
{
int n;
printf("\n enter the year");
scanf("%d",&n);
if(n%4==0)
printf("\n  %d is a leap year",n );
else
printf("\n %d is not a leap year",n);
getch();
}
