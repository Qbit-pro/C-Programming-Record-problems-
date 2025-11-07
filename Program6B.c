// Program 2
#include <stdio.h>
#include <conio.h>
void main()
{
int a = 16, b = 0;
printf(" \na = %d b = %d", a, b);
// The output is 1 if a and b are non zerovalues, 0 otherwise
printf("\n a&&b = %d", a && b);
// The output is 1 if any one of a or b is non zero, 0 if both are zeros
printf("\n a||b = %d", a || b);
// The output is 1 if a is zero , 0 if a is non zero
printf("\n !a = %d", !a);
// The output is 1 if b is zero , 0 if b is non zero
printf("\n !b = %d", !b);
getch();
}
