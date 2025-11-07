#include <stdio.h>
#include <conio.h>
/* Function declaration */
int sum_of_digits(int num);
void main()
{
int num, sum;
printf("\n Enter any number to find sum of digits: ");
scanf("%d", &num);
sum = sum_of_digits (num);
printf("\n Sum of digits of %d = %d", num, sum);
getch();
}
int sum_of_digits (int num)
{
// Base condition
if(num == 0)
return 0;
return ((num % 10) + sum_of_digits (num / 10));
}