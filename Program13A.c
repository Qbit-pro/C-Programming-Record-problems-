#include <stdio.h>
#include <conio.h>
/* Function declaration */
int fact(int num);
void main()
{
int num,f;
printf("\n Enter any number to find its factorial : ");
scanf("%d", &num);
f = fact(num);
printf("\n Factorial of %d = %d", num, f);
getch();
}
int fact(int num)
{
// Base condition
if(num == 0)
return 1;
return (num * fact(num-1));
}