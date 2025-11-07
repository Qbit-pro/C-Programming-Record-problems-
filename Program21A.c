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