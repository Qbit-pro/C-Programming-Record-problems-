# include <stdio.h>
# include <conio.h>
int main()
{
int a, b, c;
float d;
/* READ THE VALUES OF TWO INTEGERS AND PERFORM ADDITION,
SUBTRACTION AND MULTIPLICATION */
printf("Enter the values for a and b \n");
scanf(" %d %d", &a,&b);
//ADDITION
c = a + b;
printf("\n ADDITION OF TWO NUMBERS a = %d AND b = % d IS EQUAL TO c =%d\n", a,b,c);
//SUBTRACTION
c = a - b;
printf("\n SUBTRACT b = %d FROM a = % d WHICH IS EQUAL TO c = %d\n", b,a,c);
//MULTIPLICATION
c = a * b;
printf("\n MULTIPLICATION OF TWO NUMBERS a = %d AND b = % d IS EQUAL TOc = %d\n", a,b,c);
//DIVISION
d=(float)a /b ; // CONVERT INTEGER VARIABLE a TO FLOAT VARIABLE USE
printf("\n DIVIDE a = %d BY b = % d WHICH IS EQUAL TO d = %f\n", a,b,d);
getch();
return 0;
}
