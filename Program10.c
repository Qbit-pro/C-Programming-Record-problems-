#include <stdio.h>
#include <conio.h>
void main()
{
int a ,i ;
printf("\nEnter which Multiplication table to be printed:" );
scanf("%d",&a);
for (i=1; i<=10; i++)
printf("\n %d x %d = %d", i,a,i*a);
getch();
}