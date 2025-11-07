//Program 1
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


//Program 2
#include <stdio.h>
#include <conio.h>
/* Function declaration */
unsigned long fibo(int num);
void main()
{
 int num;
 unsigned long fibonacci;
 printf("\n Enter any number to find nth fiboacci term: ");
 scanf("%d", &num);
 fibonacci = fibo(num);
 printf("\n %d Fibonacci term is %lu", num, fibonacci);
 getch();
}
/**
* Recursive function to find nth Fibonacci term
*/
unsigned long fibo(int num)
  {
if(num == 0) //Base condition
      {return 0;}
else if(num == 1) //Base condition
      {return 1;}
else{
      return fibo(num-1) + fibo(num-2);
  }
}


//Program 3
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

