//Program 1
#include <stdio.h>
#include <conio.h>
#define PI 3.14
#define CITY "CHENNAI"
void main()
{
float radius,height,area;
printf("Enter radius of cylinder:");
scanf("%f", &radius);
printf("Enter height of cylinder:");
scanf("%f", &height);
area = PI * radius * height;
printf("\n The area of the cylinder is: %f",area);
printf("\n The area name is %s",CITY);
getch();

}


//Program 2
#define SQUARE(n) (n*n)
#define QUAD(n) (2*SQUARE(n)+5*n-7)
void main()
{
int a;
printf("\nEnter the value : ");
scanf("%d",&a);
printf("\nThe quad Value of %d is %d",a,QUAD(a));
getch();
}
