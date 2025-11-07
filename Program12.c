#include <stdio.h>
#include <conio.h>
void main()
{
int n,q,r,s = 0;
printf("\n Enter a number : ");
scanf("%d",&n);
q = n;
while(n != 0)
{
r = n % 10;
n = n / 10;
s+=r;
}
printf("\n Sum of digits of a given number %d is equal to %d", q,s);
getch();
}