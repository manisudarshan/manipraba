#include<stdio.h>
void main()
{
char ch;
printf("\n enter the character");
scanf("%c",&ch);
if(((ch>'a')&&(ch<'z'))||((ch>'A')&&(ch<'z')))
printf("\n %c is an alphabet");
else
printf("\n it is not an alphabet);
getch();
}
