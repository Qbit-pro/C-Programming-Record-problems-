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
unsigned long fibo(int num){
if(num == 0) //Base condition
    {return 0;}
else if(num == 1) //Base condition
    {return 1;}
else{
    return fibo(num-1) + fibo(num-2);
}
}